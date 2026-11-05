#include "duckdb/hinting/intermediate.hpp"

namespace tud {

template <class T>
IntermediateT<T>::IntermediateT(T relid) {
    relations = std::unordered_set<T>();
    relations.insert(relid);
}

template <class T>
IntermediateT<T>::IntermediateT(const std::unordered_set<T>& relids) {
    relations = std::unordered_set<T>{relids.begin(), relids.end()};
}

template <class T>
bool IntermediateT<T>::operator==(const IntermediateT<T> &other) const {
    return this->relations == other.relations;
}

template struct IntermediateT<duckdb::TableIndex>;
template struct IntermediateT<duckdb::RelationIndex>;

} // namespace tud
