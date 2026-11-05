
// Generated from ../../src/hinting/grammar/HintBlock.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "HintBlockParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HintBlockParser.
 */
class  HintBlockListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHint_block(HintBlockParser::Hint_blockContext *ctx) = 0;
  virtual void exitHint_block(HintBlockParser::Hint_blockContext *ctx) = 0;

  virtual void enterHints(HintBlockParser::HintsContext *ctx) = 0;
  virtual void exitHints(HintBlockParser::HintsContext *ctx) = 0;

  virtual void enterSetting_hint(HintBlockParser::Setting_hintContext *ctx) = 0;
  virtual void exitSetting_hint(HintBlockParser::Setting_hintContext *ctx) = 0;

  virtual void enterSetting_list(HintBlockParser::Setting_listContext *ctx) = 0;
  virtual void exitSetting_list(HintBlockParser::Setting_listContext *ctx) = 0;

  virtual void enterSetting(HintBlockParser::SettingContext *ctx) = 0;
  virtual void exitSetting(HintBlockParser::SettingContext *ctx) = 0;

  virtual void enterPlan_mode_setting(HintBlockParser::Plan_mode_settingContext *ctx) = 0;
  virtual void exitPlan_mode_setting(HintBlockParser::Plan_mode_settingContext *ctx) = 0;

  virtual void enterParallelization_setting(HintBlockParser::Parallelization_settingContext *ctx) = 0;
  virtual void exitParallelization_setting(HintBlockParser::Parallelization_settingContext *ctx) = 0;

  virtual void enterJoin_order_hint(HintBlockParser::Join_order_hintContext *ctx) = 0;
  virtual void exitJoin_order_hint(HintBlockParser::Join_order_hintContext *ctx) = 0;

  virtual void enterJoin_order_entry(HintBlockParser::Join_order_entryContext *ctx) = 0;
  virtual void exitJoin_order_entry(HintBlockParser::Join_order_entryContext *ctx) = 0;

  virtual void enterBase_join_order(HintBlockParser::Base_join_orderContext *ctx) = 0;
  virtual void exitBase_join_order(HintBlockParser::Base_join_orderContext *ctx) = 0;

  virtual void enterIntermediate_join_order(HintBlockParser::Intermediate_join_orderContext *ctx) = 0;
  virtual void exitIntermediate_join_order(HintBlockParser::Intermediate_join_orderContext *ctx) = 0;

  virtual void enterOperator_hint(HintBlockParser::Operator_hintContext *ctx) = 0;
  virtual void exitOperator_hint(HintBlockParser::Operator_hintContext *ctx) = 0;

  virtual void enterJoin_op_hint(HintBlockParser::Join_op_hintContext *ctx) = 0;
  virtual void exitJoin_op_hint(HintBlockParser::Join_op_hintContext *ctx) = 0;

  virtual void enterScan_op_hint(HintBlockParser::Scan_op_hintContext *ctx) = 0;
  virtual void exitScan_op_hint(HintBlockParser::Scan_op_hintContext *ctx) = 0;

  virtual void enterResult_hint(HintBlockParser::Result_hintContext *ctx) = 0;
  virtual void exitResult_hint(HintBlockParser::Result_hintContext *ctx) = 0;

  virtual void enterCardinality_hint(HintBlockParser::Cardinality_hintContext *ctx) = 0;
  virtual void exitCardinality_hint(HintBlockParser::Cardinality_hintContext *ctx) = 0;

  virtual void enterParam_list(HintBlockParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(HintBlockParser::Param_listContext *ctx) = 0;

  virtual void enterCost_hint(HintBlockParser::Cost_hintContext *ctx) = 0;
  virtual void exitCost_hint(HintBlockParser::Cost_hintContext *ctx) = 0;

  virtual void enterParallel_hint(HintBlockParser::Parallel_hintContext *ctx) = 0;
  virtual void exitParallel_hint(HintBlockParser::Parallel_hintContext *ctx) = 0;

  virtual void enterForced_hint(HintBlockParser::Forced_hintContext *ctx) = 0;
  virtual void exitForced_hint(HintBlockParser::Forced_hintContext *ctx) = 0;

  virtual void enterBinary_rel_id(HintBlockParser::Binary_rel_idContext *ctx) = 0;
  virtual void exitBinary_rel_id(HintBlockParser::Binary_rel_idContext *ctx) = 0;

  virtual void enterRelation_id(HintBlockParser::Relation_idContext *ctx) = 0;
  virtual void exitRelation_id(HintBlockParser::Relation_idContext *ctx) = 0;

  virtual void enterCost(HintBlockParser::CostContext *ctx) = 0;
  virtual void exitCost(HintBlockParser::CostContext *ctx) = 0;

  virtual void enterGuc_hint(HintBlockParser::Guc_hintContext *ctx) = 0;
  virtual void exitGuc_hint(HintBlockParser::Guc_hintContext *ctx) = 0;

  virtual void enterGuc_name(HintBlockParser::Guc_nameContext *ctx) = 0;
  virtual void exitGuc_name(HintBlockParser::Guc_nameContext *ctx) = 0;

  virtual void enterGuc_value(HintBlockParser::Guc_valueContext *ctx) = 0;
  virtual void exitGuc_value(HintBlockParser::Guc_valueContext *ctx) = 0;


};

