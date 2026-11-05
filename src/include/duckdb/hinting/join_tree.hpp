#pragma once

// !!! quacklab addition: new file

#include <memory>
#include <unordered_set>

#include "duckdb/common/table_index.hpp"

namespace tud {

struct JoinTree {

    explicit JoinTree(duckdb::TableIndex relid);

    JoinTree(std::unique_ptr<JoinTree> left, std::unique_ptr<JoinTree> right);

    //! Set on leaves only, invalid on inner nodes. This is the binder's table index, not the
    //! join order optimizer's relation index.
    duckdb::TableIndex relid;

    std::unique_ptr<JoinTree> left;
    std::unique_ptr<JoinTree> right;

    bool IsLeaf() const;

    std::unordered_set<duckdb::TableIndex> CollectRelids() const;

};

} // namespace tud
