%{
    #include <stdio.h>
    using namespace std;
    int yylex();
    extern int yylineno;
    void yyerror(const char * s){
        fprintf(stderr, "Line: %d, error: %s\n", yylineno, s);
    }
%}

%token TK_PACKAGE TK_IMPORT_KW TK_FUNC_KW 
%token TK_INT_KW TK_FLOAT_KW TK_BOOL_KW TK_VAR_KW
%token COMILLA COMMA SEMI_COLON MOD NOT COLON
%token STRING NUM 
%token TK_PLUS TK_PLUS_EQUAL TK_AND TK_EQUAL_EQUAL TK_NOT_EQUAL
%token TK_MINUS TK_ASSIGNATION TK_OR TK_LESS TK_LESS_OR_EQUAL
%token TK_OPEN_PAR TK_CLOSE_PAR TK_OPEN_BRACKET TK_OPEN_BRACE TK_CLOSE_BRACE TK_CLOSE_BRACKET
%token TK_ASTERISK TK_POWER TK_POWER_EQUAL TK_ASTERISK_EQUAL TK_GREATER TK_GREATER_EQUAL  TK_DIVISION TK_DIVISION_EQUAL
%token MOD_EQUAL TK_MINUS_MINUS
%token TK_IF_KW TK_ELSE_KW TK_FOR_KW
%token TK_CONTINUE_KW TK_BREAK_KW TK_RETURN_KW
%token TK_PLUS_PLUS TK_EQUAL
%token TK_TRUE_KW TK_FALSE_KW
%token TK_LESS_EQUAL TK_COLON_EQUAL
%token SINGLE_LINE_COMMENT OPEN_COMMENT CLOSE_COMMENT

%union{
    char name[100];
    int number;
}

%type <name> STRING
%type <number> NUM


%%
prog:
    | packages imports func_list                                                                                                                                      
;

block:
    |TK_OPEN_BRACE packages imports stmts func_list TK_CLOSE_BRACE
;

imports:
    | TK_IMPORT_KW TK_OPEN_PAR import TK_CLOSE_PAR
    |
;
import:
    |import_rec import
;

import_rec:
    |COMILLA STRING COMILLA COMMA
    |COMILLA STRING COMILLA
;
packages:
    |package packages
    | 
;

package:
    |TK_PACKAGE STRING
;

stmts:
    |stmt stmts
;
stmt:STRING{
        printf("%s", $1);
    }
    | if_statement
    | TK_BOOL_KW STRING{
        printf("bool type entered %s\n", $2);
    }
    | TK_INT_KW STRING{
        printf("int type entered %s\n", $2);
    }
    | NUM{
        printf("Number %d entered", $1);
    }
    | TK_VAR_KW STRING{
        printf("var type entered %s\n", $2);
    }
;


if_statement: TK_IF_KW TK_OPEN_PAR STRING TK_CLOSE_PAR block
            | TK_IF_KW TK_OPEN_PAR STRING TK_CLOSE_PAR block TK_ELSE_KW block
            ;

func_list:
    | func func_list
;

func:
    | TK_FUNC_KW STRING TK_OPEN_PAR param_list TK_CLOSE_PAR block
;

param_list:
    |parameters param_list
    |
;

parameters:
    | TK_BOOL_KW STRING COMMA
    | TK_INT_KW STRING COMMA
    | TK_BOOL_KW STRING
    | TK_INT_KW STRING
;
%%