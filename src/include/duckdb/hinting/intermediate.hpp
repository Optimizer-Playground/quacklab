#pragma once

// !!! quacklab addition: new file

#include <unordered_set>

#include "duckdb/common/table_index.hpp"
#include "duckdb/optimizer/join_order/relation_index.hpp"

namespace tud {

//! An intermediate result, identified by the set of relations it covers.
//! Hints are stated in terms of duckdb::TableIndex (the binder's numbering). The join order optimizer
//! uses its own duckdb::RelationIndex numbering, so hints that are consulted during enumeration are
//! translated into a RelationIntermediate first (see PlannerHints::SetRelationMapping).
template <class T>
struct IntermediateT {
    std::unordered_set<T> relations;

    explicit IntermediateT(T rel);

    explicit IntermediateT(const std::unordered_set<T>& relations);

    bool operator==(const IntermediateT &other) const;
};

using Intermediate = IntermediateT<duckdb::TableIndex>;
using RelationIntermediate = IntermediateT<duckdb::RelationIndex>;

} // namespace tud

template<class T>
struct std::hash<tud::IntermediateT<T>> {
    std::size_t operator()(const tud::IntermediateT<T>& intermediate) const {
        std::size_t seed = 0;
        for (auto& id : intermediate.relations) {
            seed ^= std::hash<T>()(id) + 0x9e3779b9;
        }
        return seed;
    }
};
