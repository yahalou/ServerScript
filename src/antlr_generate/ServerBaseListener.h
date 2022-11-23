
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ServerListener.h"


/**
 * This class provides an empty implementation of ServerListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ServerBaseListener : public ServerListener {
public:

  virtual void enterFile(ServerParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(ServerParser::FileContext * /*ctx*/) override { }

  virtual void enterVarDecl(ServerParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(ServerParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(ServerParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(ServerParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterBlock(ServerParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ServerParser::BlockContext * /*ctx*/) override { }

  virtual void enterStat(ServerParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(ServerParser::StatContext * /*ctx*/) override { }

  virtual void enterParameters(ServerParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(ServerParser::ParametersContext * /*ctx*/) override { }

  virtual void enterParameter(ServerParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ServerParser::ParameterContext * /*ctx*/) override { }

  virtual void enterExpr(ServerParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ServerParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

