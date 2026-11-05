add_library_unity(
  duckdb_hinting_grammar
  OBJECT
  HintBlockBaseListener.cpp
  HintBlockLexer.cpp
  HintBlockListener.cpp
  HintBlockParser.cpp
  hint_parser.cpp
)
set(ALL_OBJECT_FILES
    ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:duckdb_hinting_grammar>
    PARENT_SCOPE)
