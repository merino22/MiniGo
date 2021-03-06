%option noyywrap
%option yylineno
%option caseless
%x comment

%{
    #include <stdio.h>
    #include "tokens.h"
%}

DIGIT [0-9]

%%

[\t \r \n] { /* nada */ }
"/*" {BEGIN(comment);}
")" { return ')'; }
"package" { return TK_PACKAGE; }
"import" { return TK_IMPORT; }
"if" { return TK_IF; }
"else" { return TK_ELSE; }
"while" { return TK_WHILE; }
"void" { return TK_VOID; }
"return" { return TK_RETURN; }
"continue" { return TK_CONTINUE; }
"break" { return TK_BREAK; }
"int" { return TK_INT_TYPE; }
"fmt" { return TK_FMT; }
"Println" { return TK_PRINTLN; }
"float32" { return TK_FLOAT_TYPE; }
"bool" { return TK_BOOL_TYPE; }
"string" { return TK_STRING_TYPE; }
"for" { return TK_FOR; }
"var" { return TK_VAR; }
"func" { return TK_FUNC; }
"true" { return TK_LIT_TRUE; }
"false" { return TK_LIT_FALSE; }
\".*\" { yylval.string_t = strdup(yytext); return TK_LIT_STRING; }
{DIGIT}+ { yylval.int_t = atoi(yytext); return TK_LIT_INT; }
{DIGIT}+"."{DIGIT}+ { yylval.float_t = atof(yytext); return TK_LIT_FLOAT; }
[a-zA-Z]({DIGIT}|[a-zA-Z_0-9]|_)* { yylval.string_t = strdup(yytext); return TK_ID; }
"!" {return TK_NOT; }
";" {return ';'; }
":" {return ':'; }
"," {return ','; }
"+" {return '+'; }
"-" {return '-'; }
"/" {return '/'; }
"^" {return '^'; }
"*" {return '*'; }
"%" {return '%'; }
"." { return '.'; }
"=" {return '='; }
"[" { return '['; }
"]" { return ']'; }
"{" { return '{'; }
"}" { return '}'; }
"+=" { return TK_PLUS_EQUAL; }
"-=" { return TK_MINUS_EQUAL; }
"*=" { return TK_MULT_EQUAL; }
"/=" { return TK_DIV_EQUAL; }
"^=" { return TK_PWR_EQUAL; }
"%=" { return TK_MOD_EQUAL; }
"|=" { return TK_OR_EQUAL; }
"&=" { return TK_AND_EQUAL; }
"++" { return TK_PLUS_PLUS; }
"--" { return TK_MINUS_MINUS; }
"||" { return TK_OR; }
"&&" { return TK_AND; }
"==" { return TK_EQUAL; }
"!=" { return TK_NOT_EQUAL; }
">" { return '>'; }
"<" { return '<'; }
">=" { return TK_GREATER_OR_EQUAL; }
"<=" { return TK_LESS_OR_EQUAL; }
"(" { return '('; }
"//"[^\n]* {/* nada */}
. {printf("caracter '%c' invalido en la linea %d\n", yytext[0], yylineno);}

<comment>"*/" {BEGIN(INITIAL);}
<comment>.|\n {/*nada*/}
<comment><<EOF>> {printf("comentario incompleto en la linea %d\n", yylineno); return 0;}
%%