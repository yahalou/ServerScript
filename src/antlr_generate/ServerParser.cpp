
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1


#include "ServerListener.h"
#include "ServerVisitor.h"

#include "ServerParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ServerParserStaticData final {
  ServerParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ServerParserStaticData(const ServerParserStaticData&) = delete;
  ServerParserStaticData(ServerParserStaticData&&) = delete;
  ServerParserStaticData& operator=(const ServerParserStaticData&) = delete;
  ServerParserStaticData& operator=(ServerParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag serverParserOnceFlag;
ServerParserStaticData *serverParserStaticData = nullptr;

void serverParserInitialize() {
  assert(serverParserStaticData == nullptr);
  auto staticData = std::make_unique<ServerParserStaticData>(
    std::vector<std::string>{
      "file", "varDecl", "functionDecl", "block", "stat", "parameters", 
      "parameter", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'{'", "'}'", "'then'", "'+'", "'=='", "'if'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "IF", "ID", "STRING", "WS", "SL_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,80,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,1,0,4,0,19,8,0,11,0,12,0,20,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,
  	2,1,3,1,3,5,3,34,8,3,10,3,12,3,37,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,3,4,48,8,4,1,4,3,4,51,8,4,1,5,1,5,1,5,5,5,56,8,5,10,5,12,5,59,9,5,
  	1,5,3,5,62,8,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,3,7,78,8,7,1,7,0,0,8,0,2,4,6,8,10,12,14,0,1,1,0,10,11,81,0,18,1,0,0,
  	0,2,22,1,0,0,0,4,26,1,0,0,0,6,31,1,0,0,0,8,50,1,0,0,0,10,61,1,0,0,0,12,
  	63,1,0,0,0,14,77,1,0,0,0,16,19,3,4,2,0,17,19,3,2,1,0,18,16,1,0,0,0,18,
  	17,1,0,0,0,19,20,1,0,0,0,20,18,1,0,0,0,20,21,1,0,0,0,21,1,1,0,0,0,22,
  	23,5,10,0,0,23,24,5,1,0,0,24,25,5,11,0,0,25,3,1,0,0,0,26,27,5,10,0,0,
  	27,28,5,2,0,0,28,29,5,3,0,0,29,30,3,6,3,0,30,5,1,0,0,0,31,35,5,4,0,0,
  	32,34,3,8,4,0,33,32,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,
  	36,38,1,0,0,0,37,35,1,0,0,0,38,39,5,5,0,0,39,7,1,0,0,0,40,51,3,2,1,0,
  	41,42,5,9,0,0,42,43,5,2,0,0,43,44,3,14,7,0,44,45,5,3,0,0,45,47,5,6,0,
  	0,46,48,3,8,4,0,47,46,1,0,0,0,47,48,1,0,0,0,48,51,1,0,0,0,49,51,3,14,
  	7,0,50,40,1,0,0,0,50,41,1,0,0,0,50,49,1,0,0,0,51,9,1,0,0,0,52,57,3,12,
  	6,0,53,54,5,7,0,0,54,56,3,12,6,0,55,53,1,0,0,0,56,59,1,0,0,0,57,55,1,
  	0,0,0,57,58,1,0,0,0,58,62,1,0,0,0,59,57,1,0,0,0,60,62,1,0,0,0,61,52,1,
  	0,0,0,61,60,1,0,0,0,62,11,1,0,0,0,63,64,7,0,0,0,64,13,1,0,0,0,65,66,5,
  	10,0,0,66,67,5,2,0,0,67,68,3,10,5,0,68,69,5,3,0,0,69,78,1,0,0,0,70,71,
  	5,2,0,0,71,72,3,14,7,0,72,73,5,3,0,0,73,78,1,0,0,0,74,75,5,10,0,0,75,
  	76,5,8,0,0,76,78,5,11,0,0,77,65,1,0,0,0,77,70,1,0,0,0,77,74,1,0,0,0,78,
  	15,1,0,0,0,8,18,20,35,47,50,57,61,77
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  serverParserStaticData = staticData.release();
}

}

ServerParser::ServerParser(TokenStream *input) : ServerParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ServerParser::ServerParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ServerParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *serverParserStaticData->atn, serverParserStaticData->decisionToDFA, serverParserStaticData->sharedContextCache, options);
}

ServerParser::~ServerParser() {
  delete _interpreter;
}

const atn::ATN& ServerParser::getATN() const {
  return *serverParserStaticData->atn;
}

std::string ServerParser::getGrammarFileName() const {
  return "Server.g4";
}

const std::vector<std::string>& ServerParser::getRuleNames() const {
  return serverParserStaticData->ruleNames;
}

const dfa::Vocabulary& ServerParser::getVocabulary() const {
  return serverParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ServerParser::getSerializedATN() const {
  return serverParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

ServerParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ServerParser::FunctionDeclContext *> ServerParser::FileContext::functionDecl() {
  return getRuleContexts<ServerParser::FunctionDeclContext>();
}

ServerParser::FunctionDeclContext* ServerParser::FileContext::functionDecl(size_t i) {
  return getRuleContext<ServerParser::FunctionDeclContext>(i);
}

std::vector<ServerParser::VarDeclContext *> ServerParser::FileContext::varDecl() {
  return getRuleContexts<ServerParser::VarDeclContext>();
}

ServerParser::VarDeclContext* ServerParser::FileContext::varDecl(size_t i) {
  return getRuleContext<ServerParser::VarDeclContext>(i);
}


size_t ServerParser::FileContext::getRuleIndex() const {
  return ServerParser::RuleFile;
}

void ServerParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void ServerParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any ServerParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::FileContext* ServerParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, ServerParser::RuleFile);
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
    setState(18); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(16);
        functionDecl();
        break;
      }

      case 2: {
        setState(17);
        varDecl();
        break;
      }

      default:
        break;
      }
      setState(20); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ServerParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

ServerParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ServerParser::VarDeclContext::ID() {
  return getToken(ServerParser::ID, 0);
}

tree::TerminalNode* ServerParser::VarDeclContext::STRING() {
  return getToken(ServerParser::STRING, 0);
}


size_t ServerParser::VarDeclContext::getRuleIndex() const {
  return ServerParser::RuleVarDecl;
}

void ServerParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void ServerParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any ServerParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::VarDeclContext* ServerParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, ServerParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(ServerParser::ID);
    setState(23);
    match(ServerParser::T__0);
    setState(24);
    match(ServerParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

ServerParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ServerParser::FunctionDeclContext::ID() {
  return getToken(ServerParser::ID, 0);
}

ServerParser::BlockContext* ServerParser::FunctionDeclContext::block() {
  return getRuleContext<ServerParser::BlockContext>(0);
}


size_t ServerParser::FunctionDeclContext::getRuleIndex() const {
  return ServerParser::RuleFunctionDecl;
}

void ServerParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void ServerParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


std::any ServerParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::FunctionDeclContext* ServerParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, ServerParser::RuleFunctionDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(ServerParser::ID);
    setState(27);
    match(ServerParser::T__1);
    setState(28);
    match(ServerParser::T__2);
    setState(29);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ServerParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ServerParser::StatContext *> ServerParser::BlockContext::stat() {
  return getRuleContexts<ServerParser::StatContext>();
}

ServerParser::StatContext* ServerParser::BlockContext::stat(size_t i) {
  return getRuleContext<ServerParser::StatContext>(i);
}


size_t ServerParser::BlockContext::getRuleIndex() const {
  return ServerParser::RuleBlock;
}

void ServerParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ServerParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ServerParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::BlockContext* ServerParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, ServerParser::RuleBlock);
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
    setState(31);
    match(ServerParser::T__3);
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1540) != 0) {
      setState(32);
      stat();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
    match(ServerParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

ServerParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ServerParser::VarDeclContext* ServerParser::StatContext::varDecl() {
  return getRuleContext<ServerParser::VarDeclContext>(0);
}

tree::TerminalNode* ServerParser::StatContext::IF() {
  return getToken(ServerParser::IF, 0);
}

ServerParser::ExprContext* ServerParser::StatContext::expr() {
  return getRuleContext<ServerParser::ExprContext>(0);
}

ServerParser::StatContext* ServerParser::StatContext::stat() {
  return getRuleContext<ServerParser::StatContext>(0);
}


size_t ServerParser::StatContext::getRuleIndex() const {
  return ServerParser::RuleStat;
}

void ServerParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void ServerParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


std::any ServerParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::StatContext* ServerParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 8, ServerParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      match(ServerParser::IF);
      setState(42);
      match(ServerParser::T__1);
      setState(43);
      expr();
      setState(44);
      match(ServerParser::T__2);
      setState(45);
      match(ServerParser::T__5);
      setState(47);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(46);
        stat();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(49);
      expr();
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

//----------------- ParametersContext ------------------------------------------------------------------

ServerParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ServerParser::ParameterContext *> ServerParser::ParametersContext::parameter() {
  return getRuleContexts<ServerParser::ParameterContext>();
}

ServerParser::ParameterContext* ServerParser::ParametersContext::parameter(size_t i) {
  return getRuleContext<ServerParser::ParameterContext>(i);
}


size_t ServerParser::ParametersContext::getRuleIndex() const {
  return ServerParser::RuleParameters;
}

void ServerParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void ServerParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


std::any ServerParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::ParametersContext* ServerParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 10, ServerParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ServerParser::ID:
      case ServerParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(52);
        parameter();
        setState(57);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ServerParser::T__6) {
          setState(53);
          match(ServerParser::T__6);
          setState(54);
          parameter();
          setState(59);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ServerParser::T__2: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ParameterContext ------------------------------------------------------------------

ServerParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ServerParser::ParameterContext::ID() {
  return getToken(ServerParser::ID, 0);
}

tree::TerminalNode* ServerParser::ParameterContext::STRING() {
  return getToken(ServerParser::STRING, 0);
}


size_t ServerParser::ParameterContext::getRuleIndex() const {
  return ServerParser::RuleParameter;
}

void ServerParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void ServerParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any ServerParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::ParameterContext* ServerParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 12, ServerParser::RuleParameter);
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
    setState(63);
    _la = _input->LA(1);
    if (!(_la == ServerParser::ID

    || _la == ServerParser::STRING)) {
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

//----------------- ExprContext ------------------------------------------------------------------

ServerParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ServerParser::ExprContext::ID() {
  return getToken(ServerParser::ID, 0);
}

ServerParser::ParametersContext* ServerParser::ExprContext::parameters() {
  return getRuleContext<ServerParser::ParametersContext>(0);
}

ServerParser::ExprContext* ServerParser::ExprContext::expr() {
  return getRuleContext<ServerParser::ExprContext>(0);
}

tree::TerminalNode* ServerParser::ExprContext::STRING() {
  return getToken(ServerParser::STRING, 0);
}


size_t ServerParser::ExprContext::getRuleIndex() const {
  return ServerParser::RuleExpr;
}

void ServerParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ServerParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ServerListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any ServerParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ServerVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

ServerParser::ExprContext* ServerParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 14, ServerParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      match(ServerParser::ID);
      setState(66);
      match(ServerParser::T__1);
      setState(67);
      parameters();
      setState(68);
      match(ServerParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      match(ServerParser::T__1);
      setState(71);
      expr();
      setState(72);
      match(ServerParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      match(ServerParser::ID);
      setState(75);
      match(ServerParser::T__7);
      setState(76);
      match(ServerParser::STRING);
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

void ServerParser::initialize() {
  ::antlr4::internal::call_once(serverParserOnceFlag, serverParserInitialize);
}
