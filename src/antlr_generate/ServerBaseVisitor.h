
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ServerVisitor.h"


/**
 * This class provides an empty implementation of ServerVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ServerBaseVisitor : public ServerVisitor {
public:

  virtual std::any visitFile(ServerParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(ServerParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(ServerParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ServerParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(ServerParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(ServerParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(ServerParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ServerParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

