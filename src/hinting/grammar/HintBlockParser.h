
// Generated from ../../src/hinting/grammar/HintBlock.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  HintBlockParser : public antlr4::Parser {
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

  enum {
    RuleHint_block = 0, RuleHints = 1, RuleSetting_hint = 2, RuleSetting_list = 3, 
    RuleSetting = 4, RulePlan_mode_setting = 5, RuleParallelization_setting = 6, 
    RuleJoin_order_hint = 7, RuleJoin_order_entry = 8, RuleBase_join_order = 9, 
    RuleIntermediate_join_order = 10, RuleOperator_hint = 11, RuleJoin_op_hint = 12, 
    RuleScan_op_hint = 13, RuleResult_hint = 14, RuleCardinality_hint = 15, 
    RuleParam_list = 16, RuleCost_hint = 17, RuleParallel_hint = 18, RuleForced_hint = 19, 
    RuleBinary_rel_id = 20, RuleRelation_id = 21, RuleCost = 22, RuleGuc_hint = 23, 
    RuleGuc_name = 24, RuleGuc_value = 25
  };

  explicit HintBlockParser(antlr4::TokenStream *input);

  HintBlockParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~HintBlockParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Hint_blockContext;
  class HintsContext;
  class Setting_hintContext;
  class Setting_listContext;
  class SettingContext;
  class Plan_mode_settingContext;
  class Parallelization_settingContext;
  class Join_order_hintContext;
  class Join_order_entryContext;
  class Base_join_orderContext;
  class Intermediate_join_orderContext;
  class Operator_hintContext;
  class Join_op_hintContext;
  class Scan_op_hintContext;
  class Result_hintContext;
  class Cardinality_hintContext;
  class Param_listContext;
  class Cost_hintContext;
  class Parallel_hintContext;
  class Forced_hintContext;
  class Binary_rel_idContext;
  class Relation_idContext;
  class CostContext;
  class Guc_hintContext;
  class Guc_nameContext;
  class Guc_valueContext; 

  class  Hint_blockContext : public antlr4::ParserRuleContext {
  public:
    Hint_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HBLOCK_START();
    antlr4::tree::TerminalNode *HBLOCK_END();
    antlr4::tree::TerminalNode *EOF();
    std::vector<HintsContext *> hints();
    HintsContext* hints(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hint_blockContext* hint_block();

  class  HintsContext : public antlr4::ParserRuleContext {
  public:
    HintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Setting_hintContext *setting_hint();
    Join_order_hintContext *join_order_hint();
    Operator_hintContext *operator_hint();
    Cardinality_hintContext *cardinality_hint();
    Cost_hintContext *cost_hint();
    Guc_hintContext *guc_hint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HintsContext* hints();

  class  Setting_hintContext : public antlr4::ParserRuleContext {
  public:
    Setting_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    antlr4::tree::TerminalNode *LPAREN();
    Setting_listContext *setting_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setting_hintContext* setting_hint();

  class  Setting_listContext : public antlr4::ParserRuleContext {
  public:
    Setting_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SettingContext *setting();
    Setting_listContext *setting_list();
    antlr4::tree::TerminalNode *SEM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setting_listContext* setting_list();
  Setting_listContext* setting_list(int precedence);
  class  SettingContext : public antlr4::ParserRuleContext {
  public:
    SettingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Plan_mode_settingContext *plan_mode_setting();
    Parallelization_settingContext *parallelization_setting();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SettingContext* setting();

  class  Plan_mode_settingContext : public antlr4::ParserRuleContext {
  public:
    Plan_mode_settingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLANMODE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ANCHORED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Plan_mode_settingContext* plan_mode_setting();

  class  Parallelization_settingContext : public antlr4::ParserRuleContext {
  public:
    Parallelization_settingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARMODE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SEQUENTIAL();
    antlr4::tree::TerminalNode *PARALLEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallelization_settingContext* parallelization_setting();

  class  Join_order_hintContext : public antlr4::ParserRuleContext {
  public:
    Join_order_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOINORDER();
    antlr4::tree::TerminalNode *LPAREN();
    Join_order_entryContext *join_order_entry();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_order_hintContext* join_order_hint();

  class  Join_order_entryContext : public antlr4::ParserRuleContext {
  public:
    Join_order_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_join_orderContext *base_join_order();
    Intermediate_join_orderContext *intermediate_join_order();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_order_entryContext* join_order_entry();

  class  Base_join_orderContext : public antlr4::ParserRuleContext {
  public:
    Base_join_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_idContext *relation_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Base_join_orderContext* base_join_order();

  class  Intermediate_join_orderContext : public antlr4::ParserRuleContext {
  public:
    Intermediate_join_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Join_order_entryContext *> join_order_entry();
    Join_order_entryContext* join_order_entry(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Intermediate_join_orderContext* intermediate_join_order();

  class  Operator_hintContext : public antlr4::ParserRuleContext {
  public:
    Operator_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Join_op_hintContext *join_op_hint();
    Scan_op_hintContext *scan_op_hint();
    Result_hintContext *result_hint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_hintContext* operator_hint();

  class  Join_op_hintContext : public antlr4::ParserRuleContext {
  public:
    Join_op_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Binary_rel_idContext *binary_rel_id();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *NESTLOOP();
    antlr4::tree::TerminalNode *HASHJOIN();
    antlr4::tree::TerminalNode *MERGEJOIN();
    antlr4::tree::TerminalNode *MEMOIZE();
    antlr4::tree::TerminalNode *MATERIALIZE();
    std::vector<Relation_idContext *> relation_id();
    Relation_idContext* relation_id(size_t i);
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_op_hintContext* join_op_hint();

  class  Scan_op_hintContext : public antlr4::ParserRuleContext {
  public:
    Scan_op_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Relation_idContext *relation_id();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEQSCAN();
    antlr4::tree::TerminalNode *IDXSCAN();
    antlr4::tree::TerminalNode *BITMAPSCAN();
    antlr4::tree::TerminalNode *MEMOIZE();
    antlr4::tree::TerminalNode *MATERIALIZE();
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scan_op_hintContext* scan_op_hint();

  class  Result_hintContext : public antlr4::ParserRuleContext {
  public:
    Result_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *LPAREN();
    Parallel_hintContext *parallel_hint();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Result_hintContext* result_hint();

  class  Cardinality_hintContext : public antlr4::ParserRuleContext {
  public:
    Cardinality_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Relation_idContext *> relation_id();
    Relation_idContext* relation_id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cardinality_hintContext* cardinality_hint();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Forced_hintContext *> forced_hint();
    Forced_hintContext* forced_hint(size_t i);
    std::vector<Cost_hintContext *> cost_hint();
    Cost_hintContext* cost_hint(size_t i);
    std::vector<Parallel_hintContext *> parallel_hint();
    Parallel_hintContext* parallel_hint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_listContext* param_list();

  class  Cost_hintContext : public antlr4::ParserRuleContext {
  public:
    Cost_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *STARTUP();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<CostContext *> cost();
    CostContext* cost(size_t i);
    antlr4::tree::TerminalNode *TOTAL();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cost_hintContext* cost_hint();

  class  Parallel_hintContext : public antlr4::ParserRuleContext {
  public:
    Parallel_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORKERS();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallel_hintContext* parallel_hint();

  class  Forced_hintContext : public antlr4::ParserRuleContext {
  public:
    Forced_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORCED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Forced_hintContext* forced_hint();

  class  Binary_rel_idContext : public antlr4::ParserRuleContext {
  public:
    Binary_rel_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Relation_idContext *> relation_id();
    Relation_idContext* relation_id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_rel_idContext* binary_rel_id();

  class  Relation_idContext : public antlr4::ParserRuleContext {
  public:
    Relation_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Relation_idContext* relation_id();

  class  CostContext : public antlr4::ParserRuleContext {
  public:
    CostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CostContext* cost();

  class  Guc_hintContext : public antlr4::ParserRuleContext {
  public:
    Guc_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LPAREN();
    Guc_nameContext *guc_name();
    antlr4::tree::TerminalNode *EQ();
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    Guc_valueContext *guc_value();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guc_hintContext* guc_hint();

  class  Guc_nameContext : public antlr4::ParserRuleContext {
  public:
    Guc_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guc_nameContext* guc_name();

  class  Guc_valueContext : public antlr4::ParserRuleContext {
  public:
    Guc_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guc_valueContext* guc_value();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool setting_listSempred(Setting_listContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

