
// Generated from ../../src/hinting/grammar/HintBlock.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  HintBlockLexer : public antlr4::Lexer {
public:
  enum {
    HBLOCK_START = 1, HBLOCK_END = 2, LPAREN = 3, RPAREN = 4, LBRACE = 5, 
    RBRACE = 6, LBRACKET = 7, RBRACKET = 8, HASH = 9, EQ = 10, DOT = 11, 
    SEM = 12, QUOTE = 13, DEFAULT = 14, CONFIG = 15, PLANMODE = 16, FULL = 17, 
    ANCHORED = 18, PARMODE = 19, SEQUENTIAL = 20, PARALLEL = 21, SET = 22, 
    JOINORDER = 23, CARD = 24, NESTLOOP = 25, MERGEJOIN = 26, HASHJOIN = 27, 
    SEQSCAN = 28, IDXSCAN = 29, BITMAPSCAN = 30, MEMOIZE = 31, MATERIALIZE = 32, 
    RESULT = 33, COST = 34, STARTUP = 35, TOTAL = 36, WORKERS = 37, FORCED = 38, 
    IDENTIFIER = 39, FLOAT = 40, INT = 41, WS = 42
  };

  explicit HintBlockLexer(antlr4::CharStream *input);

  ~HintBlockLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

