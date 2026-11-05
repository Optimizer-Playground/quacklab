add_subdirectory(grammar)

add_library_unity(
  duckdb_hinting
  OBJECT
  intermediate.cpp
  join_tree.cpp
  planner_hints.cpp
)
set(ALL_OBJECT_FILES
    ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:duckdb_hinting>
    PARENT_SCOPE)
