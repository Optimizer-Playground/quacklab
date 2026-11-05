
// Generated from ../../src/hinting/grammar/HintBlock.g4 by ANTLR 4.13.2


#include "HintBlockListener.h"

#include "HintBlockParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct HintBlockParserStaticData final {
  HintBlockParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HintBlockParserStaticData(const HintBlockParserStaticData&) = delete;
  HintBlockParserStaticData(HintBlockParserStaticData&&) = delete;
  HintBlockParserStaticData& operator=(const HintBlockParserStaticData&) = delete;
  HintBlockParserStaticData& operator=(HintBlockParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hintblockParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HintBlockParserStaticData> hintblockParserStaticData = nullptr;

void hintblockParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hintblockParserStaticData != nullptr) {
    return;
  }
#else
  assert(hintblockParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HintBlockParserStaticData>(
    std::vector<std::string>{
      "hint_block", "hints", "setting_hint", "setting_list", "setting", 
      "plan_mode_setting", "parallelization_setting", "join_order_hint", 
      "join_order_entry", "base_join_order", "intermediate_join_order", 
      "operator_hint", "join_op_hint", "scan_op_hint", "result_hint", "cardinality_hint", 
      "param_list", "cost_hint", "parallel_hint", "forced_hint", "binary_rel_id", 
      "relation_id", "cost", "guc_hint", "guc_name", "guc_value"
    },
    std::vector<std::string>{
      "", "'/*=quack_lab='", "'*/'", "'('", "')'", "'{'", "'}'", "'['", 
      "']'", "'#'", "'='", "'.'", "';'", "'''", "'default'", "'Config'", 
      "'plan_mode'", "'full'", "'anchored'", "'exec_mode'", "'sequential'", 
      "'parallel'", "'Set'", "'JoinOrder'", "'Card'", "'NestLoop'", "'MergeJoin'", 
      "'HashJoin'", "'SeqScan'", "'IdxScan'", "'BitmapScan'", "'Memo'", 
      "'Material'", "'Result'", "'Cost'", "'Start'", "'Total'", "'Workers'", 
      "'Forced'"
    },
    std::vector<std::string>{
      "", "HBLOCK_START", "HBLOCK_END", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
      "LBRACKET", "RBRACKET", "HASH", "EQ", "DOT", "SEM", "QUOTE", "DEFAULT", 
      "CONFIG", "PLANMODE", "FULL", "ANCHORED", "PARMODE", "SEQUENTIAL", 
      "PARALLEL", "SET", "JOINORDER", "CARD", "NESTLOOP", "MERGEJOIN", "HASHJOIN", 
      "SEQSCAN", "IDXSCAN", "BITMAPSCAN", "MEMOIZE", "MATERIALIZE", "RESULT", 
      "COST", "STARTUP", "TOTAL", "WORKERS", "FORCED", "IDENTIFIER", "FLOAT", 
      "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,204,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,5,0,55,8,0,10,0,12,
  	0,58,9,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,69,8,1,1,2,1,2,1,2,1,
  	2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,82,8,3,10,3,12,3,85,9,3,1,4,1,4,3,4,
  	89,8,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,3,
  	8,106,8,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,3,11,118,8,
  	11,1,12,1,12,1,12,1,12,5,12,124,8,12,10,12,12,12,127,9,12,1,12,3,12,130,
  	8,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,138,8,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,4,15,150,8,15,11,15,12,15,151,1,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,4,16,162,8,16,11,16,12,16,163,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,0,1,6,26,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,6,1,0,17,18,
  	2,0,14,14,20,21,2,0,25,27,31,32,1,0,28,32,1,0,40,41,1,0,39,41,195,0,52,
  	1,0,0,0,2,68,1,0,0,0,4,70,1,0,0,0,6,75,1,0,0,0,8,88,1,0,0,0,10,90,1,0,
  	0,0,12,94,1,0,0,0,14,98,1,0,0,0,16,105,1,0,0,0,18,107,1,0,0,0,20,109,
  	1,0,0,0,22,117,1,0,0,0,24,119,1,0,0,0,26,133,1,0,0,0,28,141,1,0,0,0,30,
  	146,1,0,0,0,32,157,1,0,0,0,34,167,1,0,0,0,36,177,1,0,0,0,38,181,1,0,0,
  	0,40,183,1,0,0,0,42,186,1,0,0,0,44,188,1,0,0,0,46,190,1,0,0,0,48,199,
  	1,0,0,0,50,201,1,0,0,0,52,56,5,1,0,0,53,55,3,2,1,0,54,53,1,0,0,0,55,58,
  	1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,0,0,0,59,60,
  	5,2,0,0,60,61,5,0,0,1,61,1,1,0,0,0,62,69,3,4,2,0,63,69,3,14,7,0,64,69,
  	3,22,11,0,65,69,3,30,15,0,66,69,3,34,17,0,67,69,3,46,23,0,68,62,1,0,0,
  	0,68,63,1,0,0,0,68,64,1,0,0,0,68,65,1,0,0,0,68,66,1,0,0,0,68,67,1,0,0,
  	0,69,3,1,0,0,0,70,71,5,15,0,0,71,72,5,3,0,0,72,73,3,6,3,0,73,74,5,4,0,
  	0,74,5,1,0,0,0,75,76,6,3,-1,0,76,77,3,8,4,0,77,83,1,0,0,0,78,79,10,2,
  	0,0,79,80,5,12,0,0,80,82,3,8,4,0,81,78,1,0,0,0,82,85,1,0,0,0,83,81,1,
  	0,0,0,83,84,1,0,0,0,84,7,1,0,0,0,85,83,1,0,0,0,86,89,3,10,5,0,87,89,3,
  	12,6,0,88,86,1,0,0,0,88,87,1,0,0,0,89,9,1,0,0,0,90,91,5,16,0,0,91,92,
  	5,10,0,0,92,93,7,0,0,0,93,11,1,0,0,0,94,95,5,19,0,0,95,96,5,10,0,0,96,
  	97,7,1,0,0,97,13,1,0,0,0,98,99,5,23,0,0,99,100,5,3,0,0,100,101,3,16,8,
  	0,101,102,5,4,0,0,102,15,1,0,0,0,103,106,3,18,9,0,104,106,3,20,10,0,105,
  	103,1,0,0,0,105,104,1,0,0,0,106,17,1,0,0,0,107,108,3,42,21,0,108,19,1,
  	0,0,0,109,110,5,3,0,0,110,111,3,16,8,0,111,112,3,16,8,0,112,113,5,4,0,
  	0,113,21,1,0,0,0,114,118,3,24,12,0,115,118,3,26,13,0,116,118,3,28,14,
  	0,117,114,1,0,0,0,117,115,1,0,0,0,117,116,1,0,0,0,118,23,1,0,0,0,119,
  	120,7,2,0,0,120,121,5,3,0,0,121,125,3,40,20,0,122,124,3,42,21,0,123,122,
  	1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,129,1,0,0,
  	0,127,125,1,0,0,0,128,130,3,32,16,0,129,128,1,0,0,0,129,130,1,0,0,0,130,
  	131,1,0,0,0,131,132,5,4,0,0,132,25,1,0,0,0,133,134,7,3,0,0,134,135,5,
  	3,0,0,135,137,3,42,21,0,136,138,3,32,16,0,137,136,1,0,0,0,137,138,1,0,
  	0,0,138,139,1,0,0,0,139,140,5,4,0,0,140,27,1,0,0,0,141,142,5,33,0,0,142,
  	143,5,3,0,0,143,144,3,36,18,0,144,145,5,4,0,0,145,29,1,0,0,0,146,147,
  	5,24,0,0,147,149,5,3,0,0,148,150,3,42,21,0,149,148,1,0,0,0,150,151,1,
  	0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,153,1,0,0,0,153,154,5,9,0,0,
  	154,155,5,41,0,0,155,156,5,4,0,0,156,31,1,0,0,0,157,161,5,3,0,0,158,162,
  	3,38,19,0,159,162,3,34,17,0,160,162,3,36,18,0,161,158,1,0,0,0,161,159,
  	1,0,0,0,161,160,1,0,0,0,162,163,1,0,0,0,163,161,1,0,0,0,163,164,1,0,0,
  	0,164,165,1,0,0,0,165,166,5,4,0,0,166,33,1,0,0,0,167,168,5,34,0,0,168,
  	169,5,3,0,0,169,170,5,35,0,0,170,171,5,10,0,0,171,172,3,44,22,0,172,173,
  	5,36,0,0,173,174,5,10,0,0,174,175,3,44,22,0,175,176,5,4,0,0,176,35,1,
  	0,0,0,177,178,5,37,0,0,178,179,5,10,0,0,179,180,5,41,0,0,180,37,1,0,0,
  	0,181,182,5,38,0,0,182,39,1,0,0,0,183,184,3,42,21,0,184,185,3,42,21,0,
  	185,41,1,0,0,0,186,187,5,39,0,0,187,43,1,0,0,0,188,189,7,4,0,0,189,45,
  	1,0,0,0,190,191,5,22,0,0,191,192,5,3,0,0,192,193,3,48,24,0,193,194,5,
  	10,0,0,194,195,5,13,0,0,195,196,3,50,25,0,196,197,5,13,0,0,197,198,5,
  	4,0,0,198,47,1,0,0,0,199,200,5,39,0,0,200,49,1,0,0,0,201,202,7,5,0,0,
  	202,51,1,0,0,0,12,56,68,83,88,105,117,125,129,137,151,161,163
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hintblockParserStaticData = std::move(staticData);
}

}

HintBlockParser::HintBlockParser(TokenStream *input) : HintBlockParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

HintBlockParser::HintBlockParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  HintBlockParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *hintblockParserStaticData->atn, hintblockParserStaticData->decisionToDFA, hintblockParserStaticData->sharedContextCache, options);
}

HintBlockParser::~HintBlockParser() {
  delete _interpreter;
}

const atn::ATN& HintBlockParser::getATN() const {
  return *hintblockParserStaticData->atn;
}

std::string HintBlockParser::getGrammarFileName() const {
  return "HintBlock.g4";
}

const std::vector<std::string>& HintBlockParser::getRuleNames() const {
  return hintblockParserStaticData->ruleNames;
}

const dfa::Vocabulary& HintBlockParser::getVocabulary() const {
  return hintblockParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView HintBlockParser::getSerializedATN() const {
  return hintblockParserStaticData->serializedATN;
}


//----------------- Hint_blockContext ------------------------------------------------------------------

HintBlockParser::Hint_blockContext::Hint_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Hint_blockContext::HBLOCK_START() {
  return getToken(HintBlockParser::HBLOCK_START, 0);
}

tree::TerminalNode* HintBlockParser::Hint_blockContext::HBLOCK_END() {
  return getToken(HintBlockParser::HBLOCK_END, 0);
}

tree::TerminalNode* HintBlockParser::Hint_blockContext::EOF() {
  return getToken(HintBlockParser::EOF, 0);
}

std::vector<HintBlockParser::HintsContext *> HintBlockParser::Hint_blockContext::hints() {
  return getRuleContexts<HintBlockParser::HintsContext>();
}

HintBlockParser::HintsContext* HintBlockParser::Hint_blockContext::hints(size_t i) {
  return getRuleContext<HintBlockParser::HintsContext>(i);
}


size_t HintBlockParser::Hint_blockContext::getRuleIndex() const {
  return HintBlockParser::RuleHint_block;
}

void HintBlockParser::Hint_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHint_block(this);
}

void HintBlockParser::Hint_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHint_block(this);
}

HintBlockParser::Hint_blockContext* HintBlockParser::hint_block() {
  Hint_blockContext *_localctx = _tracker.createInstance<Hint_blockContext>(_ctx, getState());
  enterRule(_localctx, 0, HintBlockParser::RuleHint_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(HintBlockParser::HBLOCK_START);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34355576832) != 0)) {
      setState(53);
      hints();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(HintBlockParser::HBLOCK_END);
    setState(60);
    match(HintBlockParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HintsContext ------------------------------------------------------------------

HintBlockParser::HintsContext::HintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::Setting_hintContext* HintBlockParser::HintsContext::setting_hint() {
  return getRuleContext<HintBlockParser::Setting_hintContext>(0);
}

HintBlockParser::Join_order_hintContext* HintBlockParser::HintsContext::join_order_hint() {
  return getRuleContext<HintBlockParser::Join_order_hintContext>(0);
}

HintBlockParser::Operator_hintContext* HintBlockParser::HintsContext::operator_hint() {
  return getRuleContext<HintBlockParser::Operator_hintContext>(0);
}

HintBlockParser::Cardinality_hintContext* HintBlockParser::HintsContext::cardinality_hint() {
  return getRuleContext<HintBlockParser::Cardinality_hintContext>(0);
}

HintBlockParser::Cost_hintContext* HintBlockParser::HintsContext::cost_hint() {
  return getRuleContext<HintBlockParser::Cost_hintContext>(0);
}

HintBlockParser::Guc_hintContext* HintBlockParser::HintsContext::guc_hint() {
  return getRuleContext<HintBlockParser::Guc_hintContext>(0);
}


size_t HintBlockParser::HintsContext::getRuleIndex() const {
  return HintBlockParser::RuleHints;
}

void HintBlockParser::HintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHints(this);
}

void HintBlockParser::HintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHints(this);
}

HintBlockParser::HintsContext* HintBlockParser::hints() {
  HintsContext *_localctx = _tracker.createInstance<HintsContext>(_ctx, getState());
  enterRule(_localctx, 2, HintBlockParser::RuleHints);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HintBlockParser::CONFIG: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        setting_hint();
        break;
      }

      case HintBlockParser::JOINORDER: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        join_order_hint();
        break;
      }

      case HintBlockParser::NESTLOOP:
      case HintBlockParser::MERGEJOIN:
      case HintBlockParser::HASHJOIN:
      case HintBlockParser::SEQSCAN:
      case HintBlockParser::IDXSCAN:
      case HintBlockParser::BITMAPSCAN:
      case HintBlockParser::MEMOIZE:
      case HintBlockParser::MATERIALIZE:
      case HintBlockParser::RESULT: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        operator_hint();
        break;
      }

      case HintBlockParser::CARD: {
        enterOuterAlt(_localctx, 4);
        setState(65);
        cardinality_hint();
        break;
      }

      case HintBlockParser::COST: {
        enterOuterAlt(_localctx, 5);
        setState(66);
        cost_hint();
        break;
      }

      case HintBlockParser::SET: {
        enterOuterAlt(_localctx, 6);
        setState(67);
        guc_hint();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Setting_hintContext ------------------------------------------------------------------

HintBlockParser::Setting_hintContext::Setting_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Setting_hintContext::CONFIG() {
  return getToken(HintBlockParser::CONFIG, 0);
}

tree::TerminalNode* HintBlockParser::Setting_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Setting_listContext* HintBlockParser::Setting_hintContext::setting_list() {
  return getRuleContext<HintBlockParser::Setting_listContext>(0);
}

tree::TerminalNode* HintBlockParser::Setting_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Setting_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleSetting_hint;
}

void HintBlockParser::Setting_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetting_hint(this);
}

void HintBlockParser::Setting_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetting_hint(this);
}

HintBlockParser::Setting_hintContext* HintBlockParser::setting_hint() {
  Setting_hintContext *_localctx = _tracker.createInstance<Setting_hintContext>(_ctx, getState());
  enterRule(_localctx, 4, HintBlockParser::RuleSetting_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(HintBlockParser::CONFIG);
    setState(71);
    match(HintBlockParser::LPAREN);
    setState(72);
    setting_list(0);
    setState(73);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Setting_listContext ------------------------------------------------------------------

HintBlockParser::Setting_listContext::Setting_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::SettingContext* HintBlockParser::Setting_listContext::setting() {
  return getRuleContext<HintBlockParser::SettingContext>(0);
}

HintBlockParser::Setting_listContext* HintBlockParser::Setting_listContext::setting_list() {
  return getRuleContext<HintBlockParser::Setting_listContext>(0);
}

tree::TerminalNode* HintBlockParser::Setting_listContext::SEM() {
  return getToken(HintBlockParser::SEM, 0);
}


size_t HintBlockParser::Setting_listContext::getRuleIndex() const {
  return HintBlockParser::RuleSetting_list;
}

void HintBlockParser::Setting_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetting_list(this);
}

void HintBlockParser::Setting_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetting_list(this);
}


HintBlockParser::Setting_listContext* HintBlockParser::setting_list() {
   return setting_list(0);
}

HintBlockParser::Setting_listContext* HintBlockParser::setting_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HintBlockParser::Setting_listContext *_localctx = _tracker.createInstance<Setting_listContext>(_ctx, parentState);
  HintBlockParser::Setting_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, HintBlockParser::RuleSetting_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(76);
    setting();
    _ctx->stop = _input->LT(-1);
    setState(83);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Setting_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSetting_list);
        setState(78);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(79);
        match(HintBlockParser::SEM);
        setState(80);
        setting(); 
      }
      setState(85);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SettingContext ------------------------------------------------------------------

HintBlockParser::SettingContext::SettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::Plan_mode_settingContext* HintBlockParser::SettingContext::plan_mode_setting() {
  return getRuleContext<HintBlockParser::Plan_mode_settingContext>(0);
}

HintBlockParser::Parallelization_settingContext* HintBlockParser::SettingContext::parallelization_setting() {
  return getRuleContext<HintBlockParser::Parallelization_settingContext>(0);
}


size_t HintBlockParser::SettingContext::getRuleIndex() const {
  return HintBlockParser::RuleSetting;
}

void HintBlockParser::SettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetting(this);
}

void HintBlockParser::SettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetting(this);
}

HintBlockParser::SettingContext* HintBlockParser::setting() {
  SettingContext *_localctx = _tracker.createInstance<SettingContext>(_ctx, getState());
  enterRule(_localctx, 8, HintBlockParser::RuleSetting);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HintBlockParser::PLANMODE: {
        enterOuterAlt(_localctx, 1);
        setState(86);
        plan_mode_setting();
        break;
      }

      case HintBlockParser::PARMODE: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        parallelization_setting();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Plan_mode_settingContext ------------------------------------------------------------------

HintBlockParser::Plan_mode_settingContext::Plan_mode_settingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Plan_mode_settingContext::PLANMODE() {
  return getToken(HintBlockParser::PLANMODE, 0);
}

tree::TerminalNode* HintBlockParser::Plan_mode_settingContext::EQ() {
  return getToken(HintBlockParser::EQ, 0);
}

tree::TerminalNode* HintBlockParser::Plan_mode_settingContext::FULL() {
  return getToken(HintBlockParser::FULL, 0);
}

tree::TerminalNode* HintBlockParser::Plan_mode_settingContext::ANCHORED() {
  return getToken(HintBlockParser::ANCHORED, 0);
}


size_t HintBlockParser::Plan_mode_settingContext::getRuleIndex() const {
  return HintBlockParser::RulePlan_mode_setting;
}

void HintBlockParser::Plan_mode_settingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlan_mode_setting(this);
}

void HintBlockParser::Plan_mode_settingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlan_mode_setting(this);
}

HintBlockParser::Plan_mode_settingContext* HintBlockParser::plan_mode_setting() {
  Plan_mode_settingContext *_localctx = _tracker.createInstance<Plan_mode_settingContext>(_ctx, getState());
  enterRule(_localctx, 10, HintBlockParser::RulePlan_mode_setting);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(HintBlockParser::PLANMODE);
    setState(91);
    match(HintBlockParser::EQ);
    setState(92);
    _la = _input->LA(1);
    if (!(_la == HintBlockParser::FULL

    || _la == HintBlockParser::ANCHORED)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parallelization_settingContext ------------------------------------------------------------------

HintBlockParser::Parallelization_settingContext::Parallelization_settingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Parallelization_settingContext::PARMODE() {
  return getToken(HintBlockParser::PARMODE, 0);
}

tree::TerminalNode* HintBlockParser::Parallelization_settingContext::EQ() {
  return getToken(HintBlockParser::EQ, 0);
}

tree::TerminalNode* HintBlockParser::Parallelization_settingContext::DEFAULT() {
  return getToken(HintBlockParser::DEFAULT, 0);
}

tree::TerminalNode* HintBlockParser::Parallelization_settingContext::SEQUENTIAL() {
  return getToken(HintBlockParser::SEQUENTIAL, 0);
}

tree::TerminalNode* HintBlockParser::Parallelization_settingContext::PARALLEL() {
  return getToken(HintBlockParser::PARALLEL, 0);
}


size_t HintBlockParser::Parallelization_settingContext::getRuleIndex() const {
  return HintBlockParser::RuleParallelization_setting;
}

void HintBlockParser::Parallelization_settingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParallelization_setting(this);
}

void HintBlockParser::Parallelization_settingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParallelization_setting(this);
}

HintBlockParser::Parallelization_settingContext* HintBlockParser::parallelization_setting() {
  Parallelization_settingContext *_localctx = _tracker.createInstance<Parallelization_settingContext>(_ctx, getState());
  enterRule(_localctx, 12, HintBlockParser::RuleParallelization_setting);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(HintBlockParser::PARMODE);
    setState(95);
    match(HintBlockParser::EQ);
    setState(96);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3162112) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_order_hintContext ------------------------------------------------------------------

HintBlockParser::Join_order_hintContext::Join_order_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Join_order_hintContext::JOINORDER() {
  return getToken(HintBlockParser::JOINORDER, 0);
}

tree::TerminalNode* HintBlockParser::Join_order_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Join_order_entryContext* HintBlockParser::Join_order_hintContext::join_order_entry() {
  return getRuleContext<HintBlockParser::Join_order_entryContext>(0);
}

tree::TerminalNode* HintBlockParser::Join_order_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Join_order_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleJoin_order_hint;
}

void HintBlockParser::Join_order_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_order_hint(this);
}

void HintBlockParser::Join_order_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_order_hint(this);
}

HintBlockParser::Join_order_hintContext* HintBlockParser::join_order_hint() {
  Join_order_hintContext *_localctx = _tracker.createInstance<Join_order_hintContext>(_ctx, getState());
  enterRule(_localctx, 14, HintBlockParser::RuleJoin_order_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(HintBlockParser::JOINORDER);
    setState(99);
    match(HintBlockParser::LPAREN);
    setState(100);
    join_order_entry();
    setState(101);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_order_entryContext ------------------------------------------------------------------

HintBlockParser::Join_order_entryContext::Join_order_entryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::Base_join_orderContext* HintBlockParser::Join_order_entryContext::base_join_order() {
  return getRuleContext<HintBlockParser::Base_join_orderContext>(0);
}

HintBlockParser::Intermediate_join_orderContext* HintBlockParser::Join_order_entryContext::intermediate_join_order() {
  return getRuleContext<HintBlockParser::Intermediate_join_orderContext>(0);
}


size_t HintBlockParser::Join_order_entryContext::getRuleIndex() const {
  return HintBlockParser::RuleJoin_order_entry;
}

void HintBlockParser::Join_order_entryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_order_entry(this);
}

void HintBlockParser::Join_order_entryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_order_entry(this);
}

HintBlockParser::Join_order_entryContext* HintBlockParser::join_order_entry() {
  Join_order_entryContext *_localctx = _tracker.createInstance<Join_order_entryContext>(_ctx, getState());
  enterRule(_localctx, 16, HintBlockParser::RuleJoin_order_entry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HintBlockParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        base_join_order();
        break;
      }

      case HintBlockParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(104);
        intermediate_join_order();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_join_orderContext ------------------------------------------------------------------

HintBlockParser::Base_join_orderContext::Base_join_orderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::Relation_idContext* HintBlockParser::Base_join_orderContext::relation_id() {
  return getRuleContext<HintBlockParser::Relation_idContext>(0);
}


size_t HintBlockParser::Base_join_orderContext::getRuleIndex() const {
  return HintBlockParser::RuleBase_join_order;
}

void HintBlockParser::Base_join_orderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_join_order(this);
}

void HintBlockParser::Base_join_orderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_join_order(this);
}

HintBlockParser::Base_join_orderContext* HintBlockParser::base_join_order() {
  Base_join_orderContext *_localctx = _tracker.createInstance<Base_join_orderContext>(_ctx, getState());
  enterRule(_localctx, 18, HintBlockParser::RuleBase_join_order);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    relation_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Intermediate_join_orderContext ------------------------------------------------------------------

HintBlockParser::Intermediate_join_orderContext::Intermediate_join_orderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Intermediate_join_orderContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

std::vector<HintBlockParser::Join_order_entryContext *> HintBlockParser::Intermediate_join_orderContext::join_order_entry() {
  return getRuleContexts<HintBlockParser::Join_order_entryContext>();
}

HintBlockParser::Join_order_entryContext* HintBlockParser::Intermediate_join_orderContext::join_order_entry(size_t i) {
  return getRuleContext<HintBlockParser::Join_order_entryContext>(i);
}

tree::TerminalNode* HintBlockParser::Intermediate_join_orderContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Intermediate_join_orderContext::getRuleIndex() const {
  return HintBlockParser::RuleIntermediate_join_order;
}

void HintBlockParser::Intermediate_join_orderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntermediate_join_order(this);
}

void HintBlockParser::Intermediate_join_orderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntermediate_join_order(this);
}

HintBlockParser::Intermediate_join_orderContext* HintBlockParser::intermediate_join_order() {
  Intermediate_join_orderContext *_localctx = _tracker.createInstance<Intermediate_join_orderContext>(_ctx, getState());
  enterRule(_localctx, 20, HintBlockParser::RuleIntermediate_join_order);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(HintBlockParser::LPAREN);
    setState(110);
    join_order_entry();
    setState(111);
    join_order_entry();
    setState(112);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_hintContext ------------------------------------------------------------------

HintBlockParser::Operator_hintContext::Operator_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HintBlockParser::Join_op_hintContext* HintBlockParser::Operator_hintContext::join_op_hint() {
  return getRuleContext<HintBlockParser::Join_op_hintContext>(0);
}

HintBlockParser::Scan_op_hintContext* HintBlockParser::Operator_hintContext::scan_op_hint() {
  return getRuleContext<HintBlockParser::Scan_op_hintContext>(0);
}

HintBlockParser::Result_hintContext* HintBlockParser::Operator_hintContext::result_hint() {
  return getRuleContext<HintBlockParser::Result_hintContext>(0);
}


size_t HintBlockParser::Operator_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleOperator_hint;
}

void HintBlockParser::Operator_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator_hint(this);
}

void HintBlockParser::Operator_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator_hint(this);
}

HintBlockParser::Operator_hintContext* HintBlockParser::operator_hint() {
  Operator_hintContext *_localctx = _tracker.createInstance<Operator_hintContext>(_ctx, getState());
  enterRule(_localctx, 22, HintBlockParser::RuleOperator_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      join_op_hint();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      scan_op_hint();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
      result_hint();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_op_hintContext ------------------------------------------------------------------

HintBlockParser::Join_op_hintContext::Join_op_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Binary_rel_idContext* HintBlockParser::Join_op_hintContext::binary_rel_id() {
  return getRuleContext<HintBlockParser::Binary_rel_idContext>(0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::NESTLOOP() {
  return getToken(HintBlockParser::NESTLOOP, 0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::HASHJOIN() {
  return getToken(HintBlockParser::HASHJOIN, 0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::MERGEJOIN() {
  return getToken(HintBlockParser::MERGEJOIN, 0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::MEMOIZE() {
  return getToken(HintBlockParser::MEMOIZE, 0);
}

tree::TerminalNode* HintBlockParser::Join_op_hintContext::MATERIALIZE() {
  return getToken(HintBlockParser::MATERIALIZE, 0);
}

std::vector<HintBlockParser::Relation_idContext *> HintBlockParser::Join_op_hintContext::relation_id() {
  return getRuleContexts<HintBlockParser::Relation_idContext>();
}

HintBlockParser::Relation_idContext* HintBlockParser::Join_op_hintContext::relation_id(size_t i) {
  return getRuleContext<HintBlockParser::Relation_idContext>(i);
}

HintBlockParser::Param_listContext* HintBlockParser::Join_op_hintContext::param_list() {
  return getRuleContext<HintBlockParser::Param_listContext>(0);
}


size_t HintBlockParser::Join_op_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleJoin_op_hint;
}

void HintBlockParser::Join_op_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_op_hint(this);
}

void HintBlockParser::Join_op_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_op_hint(this);
}

HintBlockParser::Join_op_hintContext* HintBlockParser::join_op_hint() {
  Join_op_hintContext *_localctx = _tracker.createInstance<Join_op_hintContext>(_ctx, getState());
  enterRule(_localctx, 24, HintBlockParser::RuleJoin_op_hint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6677331968) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(120);
    match(HintBlockParser::LPAREN);
    setState(121);
    binary_rel_id();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HintBlockParser::IDENTIFIER) {
      setState(122);
      relation_id();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HintBlockParser::LPAREN) {
      setState(128);
      param_list();
    }
    setState(131);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scan_op_hintContext ------------------------------------------------------------------

HintBlockParser::Scan_op_hintContext::Scan_op_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Relation_idContext* HintBlockParser::Scan_op_hintContext::relation_id() {
  return getRuleContext<HintBlockParser::Relation_idContext>(0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::SEQSCAN() {
  return getToken(HintBlockParser::SEQSCAN, 0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::IDXSCAN() {
  return getToken(HintBlockParser::IDXSCAN, 0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::BITMAPSCAN() {
  return getToken(HintBlockParser::BITMAPSCAN, 0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::MEMOIZE() {
  return getToken(HintBlockParser::MEMOIZE, 0);
}

tree::TerminalNode* HintBlockParser::Scan_op_hintContext::MATERIALIZE() {
  return getToken(HintBlockParser::MATERIALIZE, 0);
}

HintBlockParser::Param_listContext* HintBlockParser::Scan_op_hintContext::param_list() {
  return getRuleContext<HintBlockParser::Param_listContext>(0);
}


size_t HintBlockParser::Scan_op_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleScan_op_hint;
}

void HintBlockParser::Scan_op_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScan_op_hint(this);
}

void HintBlockParser::Scan_op_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScan_op_hint(this);
}

HintBlockParser::Scan_op_hintContext* HintBlockParser::scan_op_hint() {
  Scan_op_hintContext *_localctx = _tracker.createInstance<Scan_op_hintContext>(_ctx, getState());
  enterRule(_localctx, 26, HintBlockParser::RuleScan_op_hint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8321499136) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(134);
    match(HintBlockParser::LPAREN);
    setState(135);
    relation_id();
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HintBlockParser::LPAREN) {
      setState(136);
      param_list();
    }
    setState(139);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Result_hintContext ------------------------------------------------------------------

HintBlockParser::Result_hintContext::Result_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Result_hintContext::RESULT() {
  return getToken(HintBlockParser::RESULT, 0);
}

tree::TerminalNode* HintBlockParser::Result_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Parallel_hintContext* HintBlockParser::Result_hintContext::parallel_hint() {
  return getRuleContext<HintBlockParser::Parallel_hintContext>(0);
}

tree::TerminalNode* HintBlockParser::Result_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Result_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleResult_hint;
}

void HintBlockParser::Result_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult_hint(this);
}

void HintBlockParser::Result_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult_hint(this);
}

HintBlockParser::Result_hintContext* HintBlockParser::result_hint() {
  Result_hintContext *_localctx = _tracker.createInstance<Result_hintContext>(_ctx, getState());
  enterRule(_localctx, 28, HintBlockParser::RuleResult_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(HintBlockParser::RESULT);
    setState(142);
    match(HintBlockParser::LPAREN);
    setState(143);
    parallel_hint();
    setState(144);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cardinality_hintContext ------------------------------------------------------------------

HintBlockParser::Cardinality_hintContext::Cardinality_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Cardinality_hintContext::CARD() {
  return getToken(HintBlockParser::CARD, 0);
}

tree::TerminalNode* HintBlockParser::Cardinality_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

tree::TerminalNode* HintBlockParser::Cardinality_hintContext::HASH() {
  return getToken(HintBlockParser::HASH, 0);
}

tree::TerminalNode* HintBlockParser::Cardinality_hintContext::INT() {
  return getToken(HintBlockParser::INT, 0);
}

tree::TerminalNode* HintBlockParser::Cardinality_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}

std::vector<HintBlockParser::Relation_idContext *> HintBlockParser::Cardinality_hintContext::relation_id() {
  return getRuleContexts<HintBlockParser::Relation_idContext>();
}

HintBlockParser::Relation_idContext* HintBlockParser::Cardinality_hintContext::relation_id(size_t i) {
  return getRuleContext<HintBlockParser::Relation_idContext>(i);
}


size_t HintBlockParser::Cardinality_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleCardinality_hint;
}

void HintBlockParser::Cardinality_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCardinality_hint(this);
}

void HintBlockParser::Cardinality_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCardinality_hint(this);
}

HintBlockParser::Cardinality_hintContext* HintBlockParser::cardinality_hint() {
  Cardinality_hintContext *_localctx = _tracker.createInstance<Cardinality_hintContext>(_ctx, getState());
  enterRule(_localctx, 30, HintBlockParser::RuleCardinality_hint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(HintBlockParser::CARD);
    setState(147);
    match(HintBlockParser::LPAREN);
    setState(149); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(148);
      relation_id();
      setState(151); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HintBlockParser::IDENTIFIER);
    setState(153);
    match(HintBlockParser::HASH);
    setState(154);
    match(HintBlockParser::INT);
    setState(155);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

HintBlockParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Param_listContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

tree::TerminalNode* HintBlockParser::Param_listContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}

std::vector<HintBlockParser::Forced_hintContext *> HintBlockParser::Param_listContext::forced_hint() {
  return getRuleContexts<HintBlockParser::Forced_hintContext>();
}

HintBlockParser::Forced_hintContext* HintBlockParser::Param_listContext::forced_hint(size_t i) {
  return getRuleContext<HintBlockParser::Forced_hintContext>(i);
}

std::vector<HintBlockParser::Cost_hintContext *> HintBlockParser::Param_listContext::cost_hint() {
  return getRuleContexts<HintBlockParser::Cost_hintContext>();
}

HintBlockParser::Cost_hintContext* HintBlockParser::Param_listContext::cost_hint(size_t i) {
  return getRuleContext<HintBlockParser::Cost_hintContext>(i);
}

std::vector<HintBlockParser::Parallel_hintContext *> HintBlockParser::Param_listContext::parallel_hint() {
  return getRuleContexts<HintBlockParser::Parallel_hintContext>();
}

HintBlockParser::Parallel_hintContext* HintBlockParser::Param_listContext::parallel_hint(size_t i) {
  return getRuleContext<HintBlockParser::Parallel_hintContext>(i);
}


size_t HintBlockParser::Param_listContext::getRuleIndex() const {
  return HintBlockParser::RuleParam_list;
}

void HintBlockParser::Param_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_list(this);
}

void HintBlockParser::Param_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_list(this);
}

HintBlockParser::Param_listContext* HintBlockParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 32, HintBlockParser::RuleParam_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(HintBlockParser::LPAREN);
    setState(161); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(161);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HintBlockParser::FORCED: {
          setState(158);
          forced_hint();
          break;
        }

        case HintBlockParser::COST: {
          setState(159);
          cost_hint();
          break;
        }

        case HintBlockParser::WORKERS: {
          setState(160);
          parallel_hint();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(163); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 429496729600) != 0));
    setState(165);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cost_hintContext ------------------------------------------------------------------

HintBlockParser::Cost_hintContext::Cost_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::COST() {
  return getToken(HintBlockParser::COST, 0);
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::STARTUP() {
  return getToken(HintBlockParser::STARTUP, 0);
}

std::vector<tree::TerminalNode *> HintBlockParser::Cost_hintContext::EQ() {
  return getTokens(HintBlockParser::EQ);
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::EQ(size_t i) {
  return getToken(HintBlockParser::EQ, i);
}

std::vector<HintBlockParser::CostContext *> HintBlockParser::Cost_hintContext::cost() {
  return getRuleContexts<HintBlockParser::CostContext>();
}

HintBlockParser::CostContext* HintBlockParser::Cost_hintContext::cost(size_t i) {
  return getRuleContext<HintBlockParser::CostContext>(i);
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::TOTAL() {
  return getToken(HintBlockParser::TOTAL, 0);
}

tree::TerminalNode* HintBlockParser::Cost_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Cost_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleCost_hint;
}

void HintBlockParser::Cost_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCost_hint(this);
}

void HintBlockParser::Cost_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCost_hint(this);
}

HintBlockParser::Cost_hintContext* HintBlockParser::cost_hint() {
  Cost_hintContext *_localctx = _tracker.createInstance<Cost_hintContext>(_ctx, getState());
  enterRule(_localctx, 34, HintBlockParser::RuleCost_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(HintBlockParser::COST);
    setState(168);
    match(HintBlockParser::LPAREN);
    setState(169);
    match(HintBlockParser::STARTUP);
    setState(170);
    match(HintBlockParser::EQ);
    setState(171);
    cost();
    setState(172);
    match(HintBlockParser::TOTAL);
    setState(173);
    match(HintBlockParser::EQ);
    setState(174);
    cost();
    setState(175);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parallel_hintContext ------------------------------------------------------------------

HintBlockParser::Parallel_hintContext::Parallel_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Parallel_hintContext::WORKERS() {
  return getToken(HintBlockParser::WORKERS, 0);
}

tree::TerminalNode* HintBlockParser::Parallel_hintContext::EQ() {
  return getToken(HintBlockParser::EQ, 0);
}

tree::TerminalNode* HintBlockParser::Parallel_hintContext::INT() {
  return getToken(HintBlockParser::INT, 0);
}


size_t HintBlockParser::Parallel_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleParallel_hint;
}

void HintBlockParser::Parallel_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParallel_hint(this);
}

void HintBlockParser::Parallel_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParallel_hint(this);
}

HintBlockParser::Parallel_hintContext* HintBlockParser::parallel_hint() {
  Parallel_hintContext *_localctx = _tracker.createInstance<Parallel_hintContext>(_ctx, getState());
  enterRule(_localctx, 36, HintBlockParser::RuleParallel_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(HintBlockParser::WORKERS);
    setState(178);
    match(HintBlockParser::EQ);
    setState(179);
    match(HintBlockParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Forced_hintContext ------------------------------------------------------------------

HintBlockParser::Forced_hintContext::Forced_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Forced_hintContext::FORCED() {
  return getToken(HintBlockParser::FORCED, 0);
}


size_t HintBlockParser::Forced_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleForced_hint;
}

void HintBlockParser::Forced_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForced_hint(this);
}

void HintBlockParser::Forced_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForced_hint(this);
}

HintBlockParser::Forced_hintContext* HintBlockParser::forced_hint() {
  Forced_hintContext *_localctx = _tracker.createInstance<Forced_hintContext>(_ctx, getState());
  enterRule(_localctx, 38, HintBlockParser::RuleForced_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(HintBlockParser::FORCED);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_rel_idContext ------------------------------------------------------------------

HintBlockParser::Binary_rel_idContext::Binary_rel_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HintBlockParser::Relation_idContext *> HintBlockParser::Binary_rel_idContext::relation_id() {
  return getRuleContexts<HintBlockParser::Relation_idContext>();
}

HintBlockParser::Relation_idContext* HintBlockParser::Binary_rel_idContext::relation_id(size_t i) {
  return getRuleContext<HintBlockParser::Relation_idContext>(i);
}


size_t HintBlockParser::Binary_rel_idContext::getRuleIndex() const {
  return HintBlockParser::RuleBinary_rel_id;
}

void HintBlockParser::Binary_rel_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_rel_id(this);
}

void HintBlockParser::Binary_rel_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_rel_id(this);
}

HintBlockParser::Binary_rel_idContext* HintBlockParser::binary_rel_id() {
  Binary_rel_idContext *_localctx = _tracker.createInstance<Binary_rel_idContext>(_ctx, getState());
  enterRule(_localctx, 40, HintBlockParser::RuleBinary_rel_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    relation_id();
    setState(184);
    relation_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relation_idContext ------------------------------------------------------------------

HintBlockParser::Relation_idContext::Relation_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Relation_idContext::IDENTIFIER() {
  return getToken(HintBlockParser::IDENTIFIER, 0);
}


size_t HintBlockParser::Relation_idContext::getRuleIndex() const {
  return HintBlockParser::RuleRelation_id;
}

void HintBlockParser::Relation_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelation_id(this);
}

void HintBlockParser::Relation_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelation_id(this);
}

HintBlockParser::Relation_idContext* HintBlockParser::relation_id() {
  Relation_idContext *_localctx = _tracker.createInstance<Relation_idContext>(_ctx, getState());
  enterRule(_localctx, 42, HintBlockParser::RuleRelation_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(HintBlockParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CostContext ------------------------------------------------------------------

HintBlockParser::CostContext::CostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::CostContext::FLOAT() {
  return getToken(HintBlockParser::FLOAT, 0);
}

tree::TerminalNode* HintBlockParser::CostContext::INT() {
  return getToken(HintBlockParser::INT, 0);
}


size_t HintBlockParser::CostContext::getRuleIndex() const {
  return HintBlockParser::RuleCost;
}

void HintBlockParser::CostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCost(this);
}

void HintBlockParser::CostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCost(this);
}

HintBlockParser::CostContext* HintBlockParser::cost() {
  CostContext *_localctx = _tracker.createInstance<CostContext>(_ctx, getState());
  enterRule(_localctx, 44, HintBlockParser::RuleCost);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    _la = _input->LA(1);
    if (!(_la == HintBlockParser::FLOAT

    || _la == HintBlockParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Guc_hintContext ------------------------------------------------------------------

HintBlockParser::Guc_hintContext::Guc_hintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Guc_hintContext::SET() {
  return getToken(HintBlockParser::SET, 0);
}

tree::TerminalNode* HintBlockParser::Guc_hintContext::LPAREN() {
  return getToken(HintBlockParser::LPAREN, 0);
}

HintBlockParser::Guc_nameContext* HintBlockParser::Guc_hintContext::guc_name() {
  return getRuleContext<HintBlockParser::Guc_nameContext>(0);
}

tree::TerminalNode* HintBlockParser::Guc_hintContext::EQ() {
  return getToken(HintBlockParser::EQ, 0);
}

std::vector<tree::TerminalNode *> HintBlockParser::Guc_hintContext::QUOTE() {
  return getTokens(HintBlockParser::QUOTE);
}

tree::TerminalNode* HintBlockParser::Guc_hintContext::QUOTE(size_t i) {
  return getToken(HintBlockParser::QUOTE, i);
}

HintBlockParser::Guc_valueContext* HintBlockParser::Guc_hintContext::guc_value() {
  return getRuleContext<HintBlockParser::Guc_valueContext>(0);
}

tree::TerminalNode* HintBlockParser::Guc_hintContext::RPAREN() {
  return getToken(HintBlockParser::RPAREN, 0);
}


size_t HintBlockParser::Guc_hintContext::getRuleIndex() const {
  return HintBlockParser::RuleGuc_hint;
}

void HintBlockParser::Guc_hintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuc_hint(this);
}

void HintBlockParser::Guc_hintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuc_hint(this);
}

HintBlockParser::Guc_hintContext* HintBlockParser::guc_hint() {
  Guc_hintContext *_localctx = _tracker.createInstance<Guc_hintContext>(_ctx, getState());
  enterRule(_localctx, 46, HintBlockParser::RuleGuc_hint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(HintBlockParser::SET);
    setState(191);
    match(HintBlockParser::LPAREN);
    setState(192);
    guc_name();
    setState(193);
    match(HintBlockParser::EQ);
    setState(194);
    match(HintBlockParser::QUOTE);
    setState(195);
    guc_value();
    setState(196);
    match(HintBlockParser::QUOTE);
    setState(197);
    match(HintBlockParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Guc_nameContext ------------------------------------------------------------------

HintBlockParser::Guc_nameContext::Guc_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Guc_nameContext::IDENTIFIER() {
  return getToken(HintBlockParser::IDENTIFIER, 0);
}


size_t HintBlockParser::Guc_nameContext::getRuleIndex() const {
  return HintBlockParser::RuleGuc_name;
}

void HintBlockParser::Guc_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuc_name(this);
}

void HintBlockParser::Guc_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuc_name(this);
}

HintBlockParser::Guc_nameContext* HintBlockParser::guc_name() {
  Guc_nameContext *_localctx = _tracker.createInstance<Guc_nameContext>(_ctx, getState());
  enterRule(_localctx, 48, HintBlockParser::RuleGuc_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(HintBlockParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Guc_valueContext ------------------------------------------------------------------

HintBlockParser::Guc_valueContext::Guc_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HintBlockParser::Guc_valueContext::IDENTIFIER() {
  return getToken(HintBlockParser::IDENTIFIER, 0);
}

tree::TerminalNode* HintBlockParser::Guc_valueContext::FLOAT() {
  return getToken(HintBlockParser::FLOAT, 0);
}

tree::TerminalNode* HintBlockParser::Guc_valueContext::INT() {
  return getToken(HintBlockParser::INT, 0);
}


size_t HintBlockParser::Guc_valueContext::getRuleIndex() const {
  return HintBlockParser::RuleGuc_value;
}

void HintBlockParser::Guc_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuc_value(this);
}

void HintBlockParser::Guc_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HintBlockListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuc_value(this);
}

HintBlockParser::Guc_valueContext* HintBlockParser::guc_value() {
  Guc_valueContext *_localctx = _tracker.createInstance<Guc_valueContext>(_ctx, getState());
  enterRule(_localctx, 50, HintBlockParser::RuleGuc_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3848290697216) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool HintBlockParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return setting_listSempred(antlrcpp::downCast<Setting_listContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HintBlockParser::setting_listSempred(Setting_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void HintBlockParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hintblockParserInitialize();
#else
  ::antlr4::internal::call_once(hintblockParserOnceFlag, hintblockParserInitialize);
#endif
}
