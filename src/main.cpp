#include <iostream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "ServerLexer.h"
#include "ServerParser.h"
#include "ScriptInterpreter.h"
using namespace std;
using namespace antlr4;

// 加载csv中的信息
bool loadData(string path) {
  infoVec.clear();

  // 打开文件
  ifstream file;
  file.open(path, ios_base::in);
  if (file.fail()) {
    printf("file.open(%s) open failed.\n", path.c_str());
    return false;
  }
  // 读到string中
  stringstream s;
  s << file.rdbuf();
  string text = s.str();

  // 解析csv
  int i = 0;
  int j = 0;
  struct info tmp;
  while (i < text.size()) {
    if (text[i]==',') {
      j++;
      i++;
      continue;
    }
    if (text[i]=='\n') {
      infoVec.push_back(tmp);
      tmp.name = "";
      tmp.amount = "";
      tmp.telephone = "";
      j = 0;
      i++;
      continue;
    }
    if (j==0) {
      tmp.telephone += text[i++];
    } else if (j==1)
      tmp.name += text[i++];
    else if (j==2)
      tmp.amount += text[i++];
  }
  if (text[i - 1]!='\n')
    infoVec.push_back(tmp);

  return true;
}

bool loadScript(string path, string &script) {
  // 打开文件
  ifstream file;
  file.open(path, ios_base::in);
  if (file.fail()) {
    printf("file.open(%s) open failed.\n", path.c_str());
    return false;
  }
  // 读到string中
  stringstream s;
  s << file.rdbuf();
  script = s.str();

  return true;
}

int main(int argc, char **argv) {
  // 如果参数非法，给出帮助文档。
  if (argc!=4) {
    printf("Using:./ServerScript scriptFile dataFile phoneNumber\n");
    printf(
        "Example:/home/cl/ServerScript/src/build/bin/ServerScript /home/cl/ServerScript/test/testScript/t1.svr /home/cl/ServerScript/test/data.csv 111\n\n");
    printf("scriptFile 脚本文件。\n");
    printf("dataFile 数据库文件。\n");
    printf("phoneNumber 客户的电话号码。\n\n");

    return -1;
  }

  // 把csv文件加载到infoVec容器中
  if (!loadData(string(argv[2])))
    return -1;

  telephone = string(argv[3]);

  string script;
  // 读取.srv文件
  if (!loadScript(string(argv[1]), script))
    return -1;

  // 新建一个CharStream
  ANTLRInputStream input(script);
  // 新建一个词法分析器，处理输入的CharStream
  ServerLexer lexer(&input);
  // 新建一个词法符号的缓冲区，用于存储词法分析器将生成的词法符号
  CommonTokenStream tokens(&lexer);
  // 新建一个语法分析器，处理词法符号缓冲区中的内容
  ServerParser parser(&tokens);

  // 针对file规则，开始语法分析
  tree::ParseTree *tree = parser.file();

  // 新建一个通用的、能够触发回调函数的语法分析树遍历器
  tree::ParseTreeWalker walker;
  // 遍历语法分析过程中生成的语法分析树，触发回调
  walker.walk(new ScriptInterpreter(), tree);

  // 访问特定节点
  ScriptVisitor test;
  test.visit(tree);

  return 0;
}
