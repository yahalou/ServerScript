# 语法和词法规则
```
grammar Server;

file:   (functionDecl | varDecl)+ ;

varDecl
    :   ID '=' STRING
    ;

functionDecl
    :   ID '(' ')' block
    ;


block:  '{' stat* '}' ;

stat:   varDecl
    |   IF '(' expr ')' 'then' stat?
    |   expr
    ;

parameters
    :   parameter ('+' parameter)*
    |
    ;

parameter
    :   ID
    |   STRING
    ;

expr:   ID '(' parameters ')'
    |   '(' expr ')'
    |   ID '=='  STRING
    ;


IF: 'if';

ID: ([a-zA-Z?,!] | [0-9])+;


STRING:'"' .*? '"' ;

WS  :   [ \t\n\r]+ -> skip ;

SL_COMMENT
    :   '//' .*? '\n' -> skip
    ;

```

# 例子

```c
name = "null"
amount = "null"
reply="null"

// Welcome为主函数
Welcome()
{
    // Load,Speak,Listen,Exit均为内置函数
    Load(name + amount)	

    // 参数之间用加号隔开
    Speak(name + "先生您好，请问有什么可以帮您?")	

    Listen(reply + 10)

    if (reply=="投诉") then complainProc()
    if (reply=="账单") then billProc()
    silenceProc()
    defaultProc()
}

complainProc()
{
    Listen(reply + 10)

    Speak("您的意见是我们改进工作的动力，请问您还有什么补充?")

    Listen(reply + 10)

    thanks()
}

thanks()
{
    Speak("感谢您的来电，再见")

    Exit()
}

billProc()
{
    Speak("您的本月账单是" + amount + "元，感谢您的来电，再见")

    Exit()
}

silenceProc()
{
    Speak("听不清，请您大声一点可以吗")
    Listen(reply + 10)
    if (reply=="投诉") then complainProc()
    if (reply=="账单") then billProc()
    silenceProc()
    defaultProc()
}

defaultProc()
{
    thanks()
}

```

更多使用样例见[Sample](../test/testScript)



# 内置函数说明

## Welcome

welcome函数是主函数，是程序的入口。

## Speak

```Speak [ARGUMENT]...```

打印变量或者字符串，参数数量不限

## Listen

```Listen [ARGUMENT] [TIME]```

等待输入，第一个参数是接收用户输入的变量，第二个参数是等待时间( **s** )

## Exit

程序退出

