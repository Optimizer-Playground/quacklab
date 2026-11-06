#include <algorithm>

#include <memory>
#include <optional>

#include <vector>

#include "duckdb/common/exception.hpp"
#include "duckdb/common/string_util.hpp"

#include "duckdb/hinting/intermediate.hpp"
#include "duckdb/hinting/planner_hints.hpp"

namespace tud {

//
// === Global functions ===
//

void CollectOperatorRelidsInternal(const duckdb::LogicalOperator &op, std::unordered_set<duckdb::TableIndex> &relids) {
    if (op.type == duckdb::LogicalOperatorType::LOGICAL_GET) {
        for (const auto &relid : op.GetTableIndex()) {
            relids.insert(relid);
        }
    }

    for (const auto &child : op.children) {
        // Children are consumed as the physical plan is built, so a null child is expected here.
        if (!child) {
            continue;
        }
        CollectOperatorRelidsInternal(*child, relids);
    }
}

std::unordered_set<duckdb::TableIndex> CollectOperatorRelids(const duckdb::LogicalOperator &op) {
    std::unordered_set<duckdb::TableIndex> relids;
    CollectOperatorRelidsInternal(op, relids);
    return relids;
}


//
// === JoinOrderHinting Implementation ===
//

JoinOrderHinting::JoinOrderHinting(duckdb::PlanEnumerator &plan_enumerator)
    : plan_enumerator_(plan_enumerator) {}

static void CollectLeaves(const JoinTree &jointree, std::vector<duckdb::TableIndex> &leaves) {
    if (jointree.IsLeaf()) {
        leaves.push_back(jointree.relid);
        return;
    }
    CollectLeaves(*jointree.left, leaves);
    CollectLeaves(*jointree.right, leaves);
}

void JoinOrderHinting::Validate(const JoinTree &jointree) {
    auto &relation_manager = plan_enumerator_.query_graph_manager.relation_manager;

    std::vector<duckdb::TableIndex> leaves;
    CollectLeaves(jointree, leaves);

    std::unordered_set<duckdb::RelationIndex> covered;
    for (const auto &relid : leaves) {
        auto relation_index = relation_manager.relation_mapping.find(relid);
        if (relation_index == relation_manager.relation_mapping.end()) {
            throw duckdb::InvalidInputException(
                "JoinOrder hint refers to a relation that is not part of this join: table index %llu", relid.index);
        }
        if (!covered.insert(relation_index->second).second) {
            throw duckdb::InvalidInputException("JoinOrder hint references the same relation more than once");
        }
    }

    auto relation_stats = relation_manager.GetRelationStats();
    if (covered.size() == relation_stats.size()) {
        return;
    }
    duckdb::vector<std::string> missing;
    for (duckdb::idx_t i = 0; i < relation_stats.size(); ++i) {
        if (covered.find(duckdb::RelationIndex(i)) == covered.end()) {
            missing.push_back(relation_stats[i].table_name.GetIdentifierName());
        }
    }
    throw duckdb::InvalidInputException("JoinOrder hint must reference every relation of the join, missing: %s",
                                        duckdb::StringUtil::Join(missing, ", "));
}

void JoinOrderHinting::Apply(const JoinTree &jointree) {
    Validate(jointree);
    MakeJoinNode(jointree);
}


duckdb::JoinRelationSet& JoinOrderHinting::MakeJoinNode(const JoinTree &jointree) {
    auto &graph_manager_ = plan_enumerator_.query_graph_manager;
    auto &set_manager = graph_manager_.set_manager;

    if (jointree.IsLeaf()) {
        auto relation_index = graph_manager_.relation_manager.relation_mapping.find(jointree.relid);
        if (relation_index == graph_manager_.relation_manager.relation_mapping.end()) {
            throw duckdb::InvalidInputException(
                "JoinOrder hint refers to a relation that is not part of this join: table index %llu",
                jointree.relid.index);
        }
        auto &relset = set_manager.GetJoinRelation(relation_index->second);

        // InitLeafPlans() already built this leaf with its cardinality and cost. Overwriting it with a
        // fresh node would leave the reconstructed plan with invalid estimates.
        if (plan_enumerator_.plans.find(relset) == plan_enumerator_.plans.end()) {
            plan_enumerator_.plans[relset] = duckdb::make_uniq<duckdb::DPJoinNode>(relset);
        }
        return relset;
    }

    auto &left_rels = MakeJoinNode(*jointree.left);
    auto &right_rels = MakeJoinNode(*jointree.right);

    auto &query_graph = graph_manager_.GetQueryGraphEdges();
    auto connections = query_graph.GetConnections(left_rels, right_rels);
    if (connections.empty()) {
        // No join predicate connects the two sides. Cross product edges are only materialized on demand
        // since v2.0, so ask the query graph for them and retry before giving up.
        graph_manager_.ActivateRequiredCrossProducts();
        connections = query_graph.GetConnections(left_rels, right_rels);
    }
    if (connections.empty()) {
        throw duckdb::InvalidInputException("JoinOrder hint requests a join that the query graph cannot express");
    }

    auto &join_rels = set_manager.Union(left_rels, right_rels);
    auto left_plan = plan_enumerator_.plans.find(left_rels);
    auto right_plan = plan_enumerator_.plans.find(right_rels);

    auto joinnode = plan_enumerator_.CreateJoinTree(join_rels, connections, *left_plan->second, *right_plan->second);
    plan_enumerator_.plans[join_rels] = std::move(joinnode);

    return join_rels;
}

//
// === PlannerHints Implementation ===
//

PlannerHints::PlannerHints(const std::string query) : raw_query_{query}, contains_hint_{false} {
    relmap_ = duckdb::identifier_map_t<duckdb::TableIndex>();
    operator_hints_ = std::unordered_map<Intermediate, OperatorHint>();
    join_order_hint_ = nullptr;
    global_operator_hints_ = {false, true, true, true}; // Default to enabled for all global operator hints, disable UNKNOWN
}

void PlannerHints::RegisterBaseTable(const duckdb::BaseTableRef &ref, duckdb::TableIndex relid) {
    relmap_[ref.Table()] = relid;
    if (!ref.alias.empty()) {
        relmap_[ref.alias] = relid;
    }
}

std::optional<duckdb::TableIndex> PlannerHints::ResolveRelid(const std::string& relname) const {
    auto relid = relmap_.find(duckdb::Identifier(relname));
    if (relid == relmap_.end()) {
        return std::nullopt;
    }
    return relid->second;
}

std::unordered_set<duckdb::TableIndex> PlannerHints::ResolveRelids(const std::unordered_set<std::string>& relnames) const {
    std::unordered_set<duckdb::TableIndex> relids(relnames.size());
    for (const auto& relname : relnames) {
        auto it = relmap_.find(duckdb::Identifier(relname));
        if (it != relmap_.end()) {
            relids.insert(it->second);
        } else {
            throw duckdb::InvalidInputException("Relation name not found: %s", relname);
        }
    }
    return relids;
}

void PlannerHints::AddOperatorHint(const std::string &relname, OperatorHint hint) {
    auto relid = relmap_.find(duckdb::Identifier(relname));
    if (relid == relmap_.end()) {
        throw duckdb::InvalidInputException("Relation name not found: %s", relname);
    }

    auto intermediate = Intermediate{relid->second};
    operator_hints_[intermediate] = hint;

    contains_hint_ = true;
}

void PlannerHints::AddOperatorHint(const std::unordered_set<std::string>& rels, OperatorHint hint) {
    auto relids = ResolveRelids(rels);
    auto relset = Intermediate(relids);
    operator_hints_[relset] = hint;
    contains_hint_ = true;
}

std::optional<OperatorHint> PlannerHints::GetOperatorHint(const duckdb::LogicalOperator &op) const {
    auto relids = CollectOperatorRelids(op);
    auto intermediate = Intermediate(relids);

    auto ophint = operator_hints_.find(intermediate);
    if (ophint == operator_hints_.end()) {
        return std::nullopt;
    }
    return ophint->second;
}

void PlannerHints::AddCardinalityHint(const std::unordered_set<std::string>& rels, double card) {
    auto relids = ResolveRelids(rels);
    auto relset = Intermediate(relids);
    cardinality_hints_[relset] = card;
    contains_hint_ = true;
}

std::optional<double> PlannerHints::GetCardinalityHint(const duckdb::JoinRelationSet &rels) const {
    std::unordered_set<duckdb::RelationIndex> relids(rels.count);
    for (duckdb::idx_t i = 0; i < rels.count; ++i) {
        relids.insert(rels.relations[i]);
    }
    auto intermediate = RelationIntermediate(relids);

    auto card_hint = relation_cardinality_hints_.find(intermediate);
    if (card_hint == relation_cardinality_hints_.end()) {
        return std::nullopt;
    }
    return card_hint->second;
}

std::vector<std::pair<std::unordered_set<duckdb::RelationIndex>, double>>
PlannerHints::GetSubsetCardinalityHints(const duckdb::JoinRelationSet &rels) const {
    std::vector<std::pair<std::unordered_set<duckdb::RelationIndex>, double>> result;
    for (const auto &hint : relation_cardinality_hints_) {
        const auto &hinted = hint.first.relations;
        if (hinted.size() < 2 || hinted.size() >= rels.count) {
            continue;
        }
        bool is_subset = true;
        for (const auto &relid : hinted) {
            if (!std::binary_search(rels.relations.get(), rels.relations.get() + rels.count, relid)) {
                is_subset = false;
                break;
            }
        }
        if (is_subset) {
            result.emplace_back(hinted, hint.second);
        }
    }
    return result;
}

std::optional<double> PlannerHints::GetCardinalityHint(const duckdb::LogicalGet &op) const {
    auto relids = CollectOperatorRelids(static_cast<const duckdb::LogicalOperator&>(op));
    auto intermediate = Intermediate(relids);

    auto card_hint = cardinality_hints_.find(intermediate);
    if (card_hint == cardinality_hints_.end()) {
        return std::nullopt;
    }
    return card_hint->second;
}


void PlannerHints::SetRelationMapping(const duckdb::unordered_map<duckdb::TableIndex, duckdb::RelationIndex> &mapping) {
    relation_mapping_ = mapping;

    // Re-key the cardinality hints into this subplan's relation numbering. Hints that mention a relation
    // outside of this subplan simply do not apply here and are dropped.
    relation_cardinality_hints_.clear();
    for (const auto &hint : cardinality_hints_) {
        std::unordered_set<duckdb::RelationIndex> relids(hint.first.relations.size());
        bool complete = true;
        for (const auto &relid : hint.first.relations) {
            auto it = relation_mapping_.find(relid);
            if (it == relation_mapping_.end()) {
                complete = false;
                break;
            }
            relids.insert(it->second);
        }
        if (complete && relids.size() == hint.first.relations.size()) {
            relation_cardinality_hints_[RelationIntermediate(relids)] = hint.second;
        }
    }
}

std::optional<duckdb::RelationIndex> PlannerHints::ResolveRelationIndex(duckdb::TableIndex relid) const {
    auto it = relation_mapping_.find(relid);
    if (it == relation_mapping_.end()) {
        return std::nullopt;
    }
    return it->second;
}

void PlannerHints::AddJoinOrderHint(std::unique_ptr<JoinTree> join_tree) {
    join_order_hint_ = std::move(join_tree);
    contains_hint_ = true;
}

std::optional<JoinTree*> PlannerHints::GetJoinOrderHint() const {
    if (!join_order_hint_) {
        return std::nullopt;
    }
    return join_order_hint_.get();
}

void PlannerHints::AddGlobalOperatorHint(OperatorHint op, bool enabled) {
    auto index = static_cast<size_t>(op);
    global_operator_hints_[index] = enabled;
    contains_hint_ = true;
}

bool PlannerHints::GetOperatorEnabled(OperatorHint op) const {
    auto index = static_cast<size_t>(op);
    return global_operator_hints_[index];
}

//
// === HintingContext Implementation ===
//

thread_local std::unique_ptr<PlannerHints> HintingContext::planner_hints_ = nullptr;

PlannerHints* HintingContext::InitHints(const std::string &query) {
    planner_hints_ = std::make_unique<PlannerHints>(query);
    return planner_hints_.get();
}

PlannerHints* HintingContext::CurrentPlannerHints() {
    if (!planner_hints_) {
        // Binding and planning can be reached without going through a client query (the relation API,
        // the appender, internal view/macro expansion). Those simply run unhinted.
        planner_hints_ = std::make_unique<PlannerHints>("");
    }
    return planner_hints_.get();
}

void HintingContext::ResetHints() {
    planner_hints_.reset();
}


} // namespace tud
