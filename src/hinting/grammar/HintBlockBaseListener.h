
// Generated from ../../src/hinting/grammar/HintBlock.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "HintBlockListener.h"


/**
 * This class provides an empty implementation of HintBlockListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HintBlockBaseListener : public HintBlockListener {
public:

  virtual void enterHint_block(HintBlockParser::Hint_blockContext * /*ctx*/) override { }
  virtual void exitHint_block(HintBlockParser::Hint_blockContext * /*ctx*/) override { }

  virtual void enterHints(HintBlockParser::HintsContext * /*ctx*/) override { }
  virtual void exitHints(HintBlockParser::HintsContext * /*ctx*/) override { }

  virtual void enterSetting_hint(HintBlockParser::Setting_hintContext * /*ctx*/) override { }
  virtual void exitSetting_hint(HintBlockParser::Setting_hintContext * /*ctx*/) override { }

  virtual void enterSetting_list(HintBlockParser::Setting_listContext * /*ctx*/) override { }
  virtual void exitSetting_list(HintBlockParser::Setting_listContext * /*ctx*/) override { }

  virtual void enterSetting(HintBlockParser::SettingContext * /*ctx*/) override { }
  virtual void exitSetting(HintBlockParser::SettingContext * /*ctx*/) override { }

  virtual void enterPlan_mode_setting(HintBlockParser::Plan_mode_settingContext * /*ctx*/) override { }
  virtual void exitPlan_mode_setting(HintBlockParser::Plan_mode_settingContext * /*ctx*/) override { }

  virtual void enterParallelization_setting(HintBlockParser::Parallelization_settingContext * /*ctx*/) override { }
  virtual void exitParallelization_setting(HintBlockParser::Parallelization_settingContext * /*ctx*/) override { }

  virtual void enterJoin_order_hint(HintBlockParser::Join_order_hintContext * /*ctx*/) override { }
  virtual void exitJoin_order_hint(HintBlockParser::Join_order_hintContext * /*ctx*/) override { }

  virtual void enterJoin_order_entry(HintBlockParser::Join_order_entryContext * /*ctx*/) override { }
  virtual void exitJoin_order_entry(HintBlockParser::Join_order_entryContext * /*ctx*/) override { }

  virtual void enterBase_join_order(HintBlockParser::Base_join_orderContext * /*ctx*/) override { }
  virtual void exitBase_join_order(HintBlockParser::Base_join_orderContext * /*ctx*/) override { }

  virtual void enterIntermediate_join_order(HintBlockParser::Intermediate_join_orderContext * /*ctx*/) override { }
  virtual void exitIntermediate_join_order(HintBlockParser::Intermediate_join_orderContext * /*ctx*/) override { }

  virtual void enterOperator_hint(HintBlockParser::Operator_hintContext * /*ctx*/) override { }
  virtual void exitOperator_hint(HintBlockParser::Operator_hintContext * /*ctx*/) override { }

  virtual void enterJoin_op_hint(HintBlockParser::Join_op_hintContext * /*ctx*/) override { }
  virtual void exitJoin_op_hint(HintBlockParser::Join_op_hintContext * /*ctx*/) override { }

  virtual void enterScan_op_hint(HintBlockParser::Scan_op_hintContext * /*ctx*/) override { }
  virtual void exitScan_op_hint(HintBlockParser::Scan_op_hintContext * /*ctx*/) override { }

  virtual void enterResult_hint(HintBlockParser::Result_hintContext * /*ctx*/) override { }
  virtual void exitResult_hint(HintBlockParser::Result_hintContext * /*ctx*/) override { }

  virtual void enterCardinality_hint(HintBlockParser::Cardinality_hintContext * /*ctx*/) override { }
  virtual void exitCardinality_hint(HintBlockParser::Cardinality_hintContext * /*ctx*/) override { }

  virtual void enterParam_list(HintBlockParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(HintBlockParser::Param_listContext * /*ctx*/) override { }

  virtual void enterCost_hint(HintBlockParser::Cost_hintContext * /*ctx*/) override { }
  virtual void exitCost_hint(HintBlockParser::Cost_hintContext * /*ctx*/) override { }

  virtual void enterParallel_hint(HintBlockParser::Parallel_hintContext * /*ctx*/) override { }
  virtual void exitParallel_hint(HintBlockParser::Parallel_hintContext * /*ctx*/) override { }

  virtual void enterForced_hint(HintBlockParser::Forced_hintContext * /*ctx*/) override { }
  virtual void exitForced_hint(HintBlockParser::Forced_hintContext * /*ctx*/) override { }

  virtual void enterBinary_rel_id(HintBlockParser::Binary_rel_idContext * /*ctx*/) override { }
  virtual void exitBinary_rel_id(HintBlockParser::Binary_rel_idContext * /*ctx*/) override { }

  virtual void enterRelation_id(HintBlockParser::Relation_idContext * /*ctx*/) override { }
  virtual void exitRelation_id(HintBlockParser::Relation_idContext * /*ctx*/) override { }

  virtual void enterCost(HintBlockParser::CostContext * /*ctx*/) override { }
  virtual void exitCost(HintBlockParser::CostContext * /*ctx*/) override { }

  virtual void enterGuc_hint(HintBlockParser::Guc_hintContext * /*ctx*/) override { }
  virtual void exitGuc_hint(HintBlockParser::Guc_hintContext * /*ctx*/) override { }

  virtual void enterGuc_name(HintBlockParser::Guc_nameContext * /*ctx*/) override { }
  virtual void exitGuc_name(HintBlockParser::Guc_nameContext * /*ctx*/) override { }

  virtual void enterGuc_value(HintBlockParser::Guc_valueContext * /*ctx*/) override { }
  virtual void exitGuc_value(HintBlockParser::Guc_valueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

