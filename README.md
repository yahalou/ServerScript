# 介绍

​	**ServerScript**是一种领域特定语言（Domain Specific Language，DSL），能够描述在线客服机器人的自动应答逻辑，并设计实现一个解释器解释执行这个脚本，可以根据用户的不同输入，根据脚本的逻辑设计给出相应的应答。



# 编译运行

```bash
cd ServerScript
mkdir build && cd build
cmake ..
make
src/build/bin/ServerScript
```



# 语言手册

见[Script_Introduction](doc/Script_Introduction.md)



# 代码介绍

​	本项目采用 **c++** 编写，**cmake** 构建，语法分析部分使用 **antlr4** 库，代码测试部分使用 **googletest** 。



## 代码思路

见[Code_Analysis](doc/Code_Analysis.md)



## 模块

```
.
├── CMakeLists.txt
├── doc     // w
├── src		// 代码模块
│   ├── CMakeLists.txt
│   ├── ScriptInterpreter.h // 解释器
│   ├── Server.g4     // 语法描述
│   ├── antlr_generate  // antlr4根据语法描述生成的数据结构
│   ├── antlr_runtime   // antlr4的库
│   ├── build
│   │   ├── CMakeFiles
│   │   ├── Makefile
│   │   ├── ServerScript.cbp
│   │   ├── bin         // 可执行文件
│   │   │   └── ServerScript
│   │   └── cmake_install.cmake
│   └── main.cpp      // 主函数
├── test	// 测试模块
│   ├── CMakeLists.txt
│   ├── build
│   │   ├── CMakeFiles
│   │   ├── CTestTestfile.cmake
│   │   ├── Makefile
│   │   ├── Testing
│   │   ├── bin       // 测试程序可执行文件
│   │   │   └── test
│   │   ├── cmake_install.cmake
│   │   └── script_test.cbp
│   ├── data.csv    // 数据库
│   ├── generate.sh // 测试脚本
│   ├── googletest  // googletest的库
│   ├── result.txt  // 测试结果
│   ├── test.cc
│   ├── testInput   // 测试输入
│   ├── testOutput  // 测试输出
│   └── testScript  // 测试脚本文件
└── tree.txt

89 directories, 539 files

```

## 测试

[测试脚本](/test/generate.sh)

测试了查询账单功能，投诉功能，查找数据库功能，帮助文档，变量声明和Speak函数，Listen函数，if...else，函数调用

测试结果输出至[result.txt](/test/result.txt)



## 命令行参数

```
Using:./ServerScript scriptFile dataFile phoneNumber
Example:/home/cl/ServerScript/src/build/bin/ServerScript /home/cl/ServerScript/test/testScript/t1.svr /home/cl/ServerScript/test/testScript/data.csv 111

scriptFile 脚本文件。
dataFile 数据库文件。
phoneNumber 客户的电话号码。
```



# 作者信息

姓名：陈龙

班级：2020211309

学号：2020211553
