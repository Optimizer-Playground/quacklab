#pragma once

// !!! quacklab addition: new file

#include <array>
#include <memory>
#include <optional>
#include <ranges>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

#include "duckdb/common/identifier.hpp"
#include "duckdb/common/table_index.hpp"
#include "duckdb/common/typedefs.hpp"
#include "duckdb/common/unordered_map.hpp"
#include "duckdb/optimizer/join_order/join_node.hpp"
#include "duckdb/optimizer/join_order/join_relation_set.hpp"
#include "duckdb/optimizer/join_order/plan_enumerator.hpp"
#include "duckdb/optimizer/join_order/relation_index.hpp"
#include "duckdb/optimizer/join_order/query_graph_manager.hpp"
#include "duckdb/parser/tableref/basetableref.hpp"
#include "duckdb/planner/logical_operator.hpp"
#include "duckdb/planner/operator/logical_get.hpp"

#include "duckdb/hinting/intermediate.hpp"
#include "duckdb/hinting/join_tree.hpp"

namespace duckdb {
    class PlanEnumerator;
    class QueryGraphManager;
}

namespace tud {

enum class OperatorHint {
    UNKNOWN = 0,
    NLJ = 1,
    HASH_JOIN = 2,
    MERGE_JOIN = 3,
};

std::unordered_set<duckdb::TableIndex> CollectOperatorRelids(const duckdb::LogicalOperator &op);

class JoinOrderHinting {

public:
    JoinOrderHinting(duckdb::PlanEnumerator &plan_enumerator);

    duckdb::JoinRelationSet& MakeJoinNode(const JoinTree &jointree);

private:
    duckdb::PlanEnumerator &plan_enumerator_;

};


class HintParser;

class PlannerHints {
    friend class HintParser;

public:

    explicit PlannerHints(const std::string query);

    // Rule-of-zero: we only rely on STL types so we let the auto-generated functions take over.

    //
    // === Basic hint table management ===
    //

    void RegisterBaseTable(const duckdb::BaseTableRef &ref, duckdb::TableIndex relid);

    std::optional<duckdb::TableIndex> ResolveRelid(const std::string& relname) const;

    std::unordered_set<duckdb::TableIndex> ResolveRelids(const std::unordered_set<std::string>& relnames) const;

    void ParseHints();

    //
    // === Join order optimizer relation numbering ===
    //

    //! Publish the join order optimizer's table index -> relation index mapping for the subplan that is
    //! about to be enumerated. Hints are stated in terms of table indexes, but the enumerator and the
    //! cardinality estimator work on relation indexes, so the relevant hints are re-keyed here.
    void SetRelationMapping(const duckdb::unordered_map<duckdb::TableIndex, duckdb::RelationIndex> &mapping);

    //! Translate a binder table index into the relation index of the subplan being enumerated.
    std::optional<duckdb::RelationIndex> ResolveRelationIndex(duckdb::TableIndex relid) const;

    //
    // === Operator hints ===
    //

    void AddOperatorHint(const std::string &relname, OperatorHint hint);

    void AddOperatorHint(const std::unordered_set<std::string>& rels, OperatorHint hint);

    std::optional<OperatorHint> GetOperatorHint(const duckdb::LogicalOperator &op) const;

    //
    // === Cardinality hints ===
    //

    void AddCardinalityHint(const std::unordered_set<std::string>& rels, double card);

    std::optional<double> GetCardinalityHint(const duckdb::JoinRelationSet &rels) const;

    std::optional<double> GetCardinalityHint(const duckdb::LogicalGet &op) const;

    //
    // === Join order hints ===
    //

    void AddJoinOrderHint(std::unique_ptr<JoinTree> join_tree);

    std::optional<JoinTree*> GetJoinOrderHint() const;

    //
    // === Global hints ===
    //

    void AddGlobalOperatorHint(OperatorHint hint, bool enabled);

    bool GetOperatorEnabled(OperatorHint hint) const;

private:
    std::string raw_query_;

    bool contains_hint_;

    //! Table names and aliases compare case-insensitively, matching SQL identifier semantics.
    duckdb::identifier_map_t<duckdb::TableIndex> relmap_;

    std::unordered_map<Intermediate, OperatorHint> operator_hints_;

    std::unordered_map<Intermediate, double> cardinality_hints_;

    duckdb::unordered_map<duckdb::TableIndex, duckdb::RelationIndex> relation_mapping_;

    //! cardinality_hints_ re-keyed into the current subplan's relation numbering
    std::unordered_map<RelationIntermediate, double> relation_cardinality_hints_;

    std::unique_ptr<JoinTree> join_order_hint_;

    std::array<bool, 4> global_operator_hints_; // UNKNOWN, NLJ, HASH_JOIN, MERGE_JOIN

};

class HintingContext {

public:

    static PlannerHints* InitHints(const std::string &query);

    static PlannerHints* CurrentPlannerHints();

    static void ResetHints();

private:

    thread_local static std::unique_ptr<PlannerHints> planner_hints_;

};

} // namespace tud
