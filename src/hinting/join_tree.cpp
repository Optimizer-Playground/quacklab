#include <memory>

#include "duckdb/hinting/join_tree.hpp"

namespace tud {

JoinTree::JoinTree(duckdb::TableIndex relid) : relid(relid), left(nullptr), right(nullptr) {}

JoinTree::JoinTree(std::unique_ptr<JoinTree> left, std::unique_ptr<JoinTree> right)
    : relid(duckdb::TableIndex()), left(std::move(left)), right(std::move(right)) {};

bool JoinTree::IsLeaf() const {
    return relid.IsValid();
}

static void CollectRelidsInternal(const JoinTree &tree, std::unordered_set<duckdb::TableIndex> &relids) {
    if (tree.IsLeaf()) {
        relids.insert(tree.relid);
        return;
    }
    CollectRelidsInternal(*tree.left, relids);
    CollectRelidsInternal(*tree.right, relids);
}


std::unordered_set<duckdb::TableIndex> JoinTree::CollectRelids() const {
    std::unordered_set<duckdb::TableIndex> relids;
    CollectRelidsInternal(*this, relids);
    return relids;
}

} // namespace tud
