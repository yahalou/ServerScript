
// Generated from C:/Users/26033/Desktop/antlrLearn/chengxusheji\Server.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ServerParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ServerParser.
 */
class  ServerVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ServerParser.
   */
    virtual std::any visitFile(ServerParser::FileContext *context) = 0;

    virtual std::any visitVarDecl(ServerParser::VarDeclContext *context) = 0;

    virtual std::any visitFunctionDecl(ServerParser::FunctionDeclContext *context) = 0;

    virtual std::any visitBlock(ServerParser::BlockContext *context) = 0;

    virtual std::any visitStat(ServerParser::StatContext *context) = 0;

    virtual std::any visitParameters(ServerParser::ParametersContext *context) = 0;

    virtual std::any visitParameter(ServerParser::ParameterContext *context) = 0;

    virtual std::any visitExpr(ServerParser::ExprContext *context) = 0;


};

