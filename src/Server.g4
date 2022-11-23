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
