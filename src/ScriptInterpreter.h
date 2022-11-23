//
// Created by 26033 on 2022/11/22.
//

#ifndef SERVERSCRIPT_SRC_SCRIPTINTERPRETER_H
#define SERVERSCRIPT_SRC_SCRIPTINTERPRETER_H
#include <poll.h>
#include <ranges>

#include "ServerBaseListener.h"
#include "ServerBaseVisitor.h"
#include "antlr4-runtime.h"

using namespace std;
using namespace antlr4;

// 客户信息结构体
struct info {
  string telephone; // 电话
  string name;      // 姓名
  string amount;    // 余额
};
vector<info> infoVec; // 存放客户信息的结构体

// key为变量名，value为变量值
map<string, string> memory;
// key为函数名，value为函数节点
map<string, ServerParser::FunctionDeclContext *> callMap;
// 客户的电话
string telephone;

// 如果字符串用双引号夹住，去除引号
string stripQuotation(string target) {
  string result = target;
  if (target[0]=='"' && target.back()=='"') {
    result = target.substr(1, target.size() - 2);
  }
  return result;
}

class ScriptInterpreter : public ServerBaseListener {
  // 退出变量声明节点的时候，将变量添加到memory中
  void exitVarDecl(ServerParser::VarDeclContext *ctx) override {
    if (memory.contains(ctx->ID()->getText())) {
      memory[ctx->ID()->getText()] = ctx->STRING()->getText();
    } else {
      memory.insert({ctx->ID()->getText(), ctx->STRING()->getText()});
    }
  }
  // 退出函数声明节点的时候，将变量添加到callMap中
  void exitFunctionDecl(ServerParser::FunctionDeclContext *ctx) override {
    if (callMap.contains(ctx->ID()->getText())) {
      throw string("function already defined");
    } else {
      callMap.insert({ctx->ID()->getText(), ctx});
    }
  }
};

class ScriptVisitor : public ServerBaseVisitor {
  // 程序入口
  std::any visitFile(ServerParser::FileContext *ctx) override {
    for (auto i : ctx->children) {
      // 如果file节点的孩子节点是functionDecl节点，访问
      if (((RuleContext *)i)->getRuleIndex()==ServerParser::RuleFunctionDecl) {
        ServerParser::FunctionDeclContext *j = (ServerParser::FunctionDeclContext *)i;
        // 如果声明的函数名是Welcome，说明这个节点是入口，访问这个节点
        if (j->ID()->getText()=="Welcome") {
          visitFunctionDecl(j);
        }
      }
    }
    return true;
  }

  std::any visitFunctionDecl(ServerParser::FunctionDeclContext *ctx) override {
    // 访问函数声明的块中的内容
    visitBlock(ctx->block());
    return true;
  }

  // 最重要的模块
  std::any visitStat(ServerParser::StatContext *ctx) override {
    // if...else语句
    if (ctx->IF()) {
      // 条件判断
      if (!memory.contains(ctx->expr()->ID()->getText())) {
        cout << "变量" << ctx->expr()->ID()->getText() << "不存在" << endl;
        exit(-1);
      }
      if (stripQuotation(memory[ctx->expr()->ID()->getText()])==stripQuotation(ctx->expr()->STRING()->getText())) {
        visitStat(ctx->stat());
      }
    }
      // 函数调用语句
    else if (ctx->expr()) {
      string funcName = ctx->expr()->ID()->getText();
      // 先判断是不是内置函数

      // Exit直接退出
      if (funcName=="Exit")
        exit(0);
        // Speak输出参数
      else if (funcName=="Speak") {
        string speakContent = any_cast<string>(visitParameters(ctx->expr()->parameters()));
        cout << speakContent << endl;
      }
        // 监听输入，用poll实现超时功能
      else if (funcName=="Listen") {
        if (ctx->expr()->parameters()->parameter().size()!=2) {
          cout << "Listen函数参数必须为变量名+监听时间" << endl;
          exit(-1);
        }
        string reply = ctx->expr()->parameters()->parameter(0)->ID()->getText();
        int waitLength = stoi(ctx->expr()->parameters()->parameter(1)->ID()->getText());
        struct pollfd pfds;
        char str[256];
        string input = "null";
        memset(&pfds, 0, sizeof(pfds));
        pfds.events = POLLIN;
        pfds.fd = 0;

        int infds = poll(&pfds, 1, waitLength*1000);
        if (infds > 0) {
          fscanf(stdin, "%s", str);
          input = string(str);
        }
        memory[reply] = input;
      }
        // 加载客户信息
      else if (funcName=="Load") {
        string name = ctx->expr()->parameters()->parameter(0)->ID()->getText();
        string amount = ctx->expr()->parameters()->parameter(1)->ID()->getText();
        bool found = false;
        for (auto const &i : infoVec) {
          if (i.telephone==telephone) {
            if (memory.contains(name))
              memory[name] = i.name;
            else {
              cout << "变量" << name << "不存在" << endl;
              exit(-1);
            }
            if (memory.contains(amount))
              memory[amount] = i.amount;
            else {
              cout << "变量" << amount << "不存在" << endl;
              exit(-1);
            }
            found = true;
            break;
          }
        }
        if (!found) {
          cout << "您不是我们的客户，再见！" << endl;
          exit(0);
        }
      }
        // 如果不是内置函数，就调用自己写的函数
      else {
        visitFunctionDecl(callMap.at(funcName));
      }
    }
    return true;
  }

  std::any visitBlock(ServerParser::BlockContext *ctx) override {
    for (auto i : ctx->stat()) {
      visitStat(i);
    }
    return true;
  }

  std::any visitParameters(ServerParser::ParametersContext *ctx)
  override {
    // 拼接参数，返回字符串
    string value = "";
    for (auto i : ctx->parameter()) {
      if (i->ID()) {
        if (memory.contains(i->getText()))
          value += stripQuotation(memory[i->getText()]);
        else {
          cout << "变量" << i->getText() << "不存在" << endl;
          exit(-1);
        }
      } else {
        value += stripQuotation(i->getText());
      }
    }
    return value;
  }
};

#endif //SERVERSCRIPT_SRC_SCRIPTINTERPRETER_H
