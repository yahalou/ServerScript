
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ServerParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ServerParser.
 */
class  ServerListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(ServerParser::FileContext *ctx) = 0;
  virtual void exitFile(ServerParser::FileContext *ctx) = 0;

  virtual void enterVarDecl(ServerParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(ServerParser::VarDeclContext *ctx) = 0;

  virtual void enterFunctionDecl(ServerParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(ServerParser::FunctionDeclContext *ctx) = 0;

  virtual void enterBlock(ServerParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ServerParser::BlockContext *ctx) = 0;

  virtual void enterStat(ServerParser::StatContext *ctx) = 0;
  virtual void exitStat(ServerParser::StatContext *ctx) = 0;

  virtual void enterParameters(ServerParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(ServerParser::ParametersContext *ctx) = 0;

  virtual void enterParameter(ServerParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ServerParser::ParameterContext *ctx) = 0;

  virtual void enterExpr(ServerParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ServerParser::ExprContext *ctx) = 0;


};

