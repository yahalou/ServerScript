#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

TEST(scriptTest, testQuery) {

  cout << "测试账单查询功能" << endl;
  ifstream result("../../testOutput/output1.txt");
  if (result.fail())
    cout << "open ../../testOutput/output1.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("cl先生您好，请问有什么可以帮您?\n您的本月账单是100元，感谢您的来电，再见\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());


  ifstream result1("../../testOutput/output1.txt");
  if (result1.fail())
    cout << "open ../../testOutput/output1.txt failed" << endl;
  stringstream s1;
  s1 << result1.rdbuf();
  string content1 = s.str();
  string expect1("cl先生您好，请问有什么可以帮您?\n您的本月账单是100元，感谢您的来电，再见\n");
  result1.close();
  EXPECT_STREQ(content1.c_str(), expect1.c_str());

}

TEST(scriptTest, testComplain) {
  cout << "测试投诉功能" << endl;
  ifstream result("../../testOutput/output3.txt");
  if (result.fail())
    cout << "open ../../testOutput/output3.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("张三先生您好，请问有什么可以帮您?\n"
                "您的意见是我们改进工作的动力，请问您还有什么补充?\n"
                "感谢您的来电，再见\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testFindUser) {
  cout << "测试查找用户功能" << endl;
  ifstream result("../../testOutput/output4.txt");
  if (result.fail())
    cout << "open ../../testOutput/output4.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("您不是我们的客户，再见！\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testHelper) {
  cout << "测试帮助文档" << endl;
  ifstream result("../../testOutput/output5.txt");
  if (result.fail())
    cout << "open ../../testOutput/output5.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("Using:./ServerScript scriptFile dataFile phoneNumber\n"
                "Example:/home/cl/ServerScript/src/build/bin/ServerScript /home/cl/ServerScript/test/testScript/t1.svr /home/cl/ServerScript/test/data.csv 111\n\n"
                "scriptFile 脚本文件。\n"
                "dataFile 数据库文件。\n"
                "phoneNumber 客户的电话号码。\n\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testSpeak) {
  cout << "测试变量声明和Speak函数" << endl;
  ifstream result("../../testOutput/output6.txt");
  if (result.fail())
    cout << "open ../../testOutput/output6.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("null先生您好，请问有什么可以帮您?\n"
                "nullnull\n"
                "您的回复为:null\n"
                "okok\n"
                "\n"
                "变量undefinedVar不存在\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testListen) {
  cout << "测试Listen函数" << endl;
  ifstream result("../../testOutput/output7.txt");
  if (result.fail())
    cout << "open ../../testOutput/output7.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("aaaaa\n"
                "aaaaabbbbb\n"
                "Listen函数参数必须为变量名+监听时间\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testIf) {
  cout << "测试if...else" << endl;
  ifstream result("../../testOutput/output8.txt");
  if (result.fail())
    cout << "open ../../testOutput/output8.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("您要充值：1000000\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

TEST(scriptTest, testFuncall) {
  cout << "测试函数调用" << endl;
  ifstream result("../../testOutput/output9.txt");
  if (result.fail())
    cout << "open ../../testOutput/output9.txt failed" << endl;
  stringstream s;
  s << result.rdbuf();
  string content = s.str();
  string expect("调用Welcome\n"
                "调用Func1\n"
                "调用Func2\n"
                "调用Func3\n");
  result.close();
  EXPECT_STREQ(content.c_str(), expect.c_str());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
