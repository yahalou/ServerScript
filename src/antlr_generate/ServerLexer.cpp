
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1


#include "ServerLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ServerLexerStaticData final {
  ServerLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ServerLexerStaticData(const ServerLexerStaticData&) = delete;
  ServerLexerStaticData(ServerLexerStaticData&&) = delete;
  ServerLexerStaticData& operator=(const ServerLexerStaticData&) = delete;
  ServerLexerStaticData& operator=(ServerLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag serverlexerLexerOnceFlag;
ServerLexerStaticData *serverlexerLexerStaticData = nullptr;

void serverlexerLexerInitialize() {
  assert(serverlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ServerLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "IF", 
      "ID", "STRING", "WS", "SL_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'{'", "'}'", "'then'", "'+'", "'=='", "'if'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "IF", "ID", "STRING", "WS", "SL_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,13,84,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,
  	1,8,1,8,1,9,4,9,52,8,9,11,9,12,9,53,1,10,1,10,5,10,58,8,10,10,10,12,10,
  	61,9,10,1,10,1,10,1,11,4,11,66,8,11,11,11,12,11,67,1,11,1,11,1,12,1,12,
  	1,12,1,12,5,12,76,8,12,10,12,12,12,79,9,12,1,12,1,12,1,12,1,12,2,59,77,
  	0,13,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	1,0,2,6,0,33,33,44,44,48,57,63,63,65,90,97,122,3,0,9,10,13,13,32,32,87,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,1,27,1,0,0,0,3,29,1,0,0,0,5,31,1,0,0,0,7,33,
  	1,0,0,0,9,35,1,0,0,0,11,37,1,0,0,0,13,42,1,0,0,0,15,44,1,0,0,0,17,47,
  	1,0,0,0,19,51,1,0,0,0,21,55,1,0,0,0,23,65,1,0,0,0,25,71,1,0,0,0,27,28,
  	5,61,0,0,28,2,1,0,0,0,29,30,5,40,0,0,30,4,1,0,0,0,31,32,5,41,0,0,32,6,
  	1,0,0,0,33,34,5,123,0,0,34,8,1,0,0,0,35,36,5,125,0,0,36,10,1,0,0,0,37,
  	38,5,116,0,0,38,39,5,104,0,0,39,40,5,101,0,0,40,41,5,110,0,0,41,12,1,
  	0,0,0,42,43,5,43,0,0,43,14,1,0,0,0,44,45,5,61,0,0,45,46,5,61,0,0,46,16,
  	1,0,0,0,47,48,5,105,0,0,48,49,5,102,0,0,49,18,1,0,0,0,50,52,7,0,0,0,51,
  	50,1,0,0,0,52,53,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,20,1,0,0,0,55,
  	59,5,34,0,0,56,58,9,0,0,0,57,56,1,0,0,0,58,61,1,0,0,0,59,60,1,0,0,0,59,
  	57,1,0,0,0,60,62,1,0,0,0,61,59,1,0,0,0,62,63,5,34,0,0,63,22,1,0,0,0,64,
  	66,7,1,0,0,65,64,1,0,0,0,66,67,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,
  	69,1,0,0,0,69,70,6,11,0,0,70,24,1,0,0,0,71,72,5,47,0,0,72,73,5,47,0,0,
  	73,77,1,0,0,0,74,76,9,0,0,0,75,74,1,0,0,0,76,79,1,0,0,0,77,78,1,0,0,0,
  	77,75,1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,10,0,0,81,82,1,0,0,
  	0,82,83,6,12,0,0,83,26,1,0,0,0,6,0,51,53,59,67,77,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  serverlexerLexerStaticData = staticData.release();
}

}

ServerLexer::ServerLexer(CharStream *input) : Lexer(input) {
  ServerLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *serverlexerLexerStaticData->atn, serverlexerLexerStaticData->decisionToDFA, serverlexerLexerStaticData->sharedContextCache);
}

ServerLexer::~ServerLexer() {
  delete _interpreter;
}

std::string ServerLexer::getGrammarFileName() const {
  return "Server.g4";
}

const std::vector<std::string>& ServerLexer::getRuleNames() const {
  return serverlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ServerLexer::getChannelNames() const {
  return serverlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ServerLexer::getModeNames() const {
  return serverlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ServerLexer::getVocabulary() const {
  return serverlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ServerLexer::getSerializedATN() const {
  return serverlexerLexerStaticData->serializedATN;
}

const atn::ATN& ServerLexer::getATN() const {
  return *serverlexerLexerStaticData->atn;
}




void ServerLexer::initialize() {
  ::antlr4::internal::call_once(serverlexerLexerOnceFlag, serverlexerLexerInitialize);
}
