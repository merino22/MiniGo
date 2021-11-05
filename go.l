%option yylineno
%option noyywrap
%x comment

%{
    #include <stdio.h>
    #include <string.h>
    //#include "tokens.h"
%}

numbers ([0-9])+
alpha   ([a-zA-Z]+[0-9]*)+

%%

"/*" {BEGIN(comment);}
"package"    {printf("%s palabra \n", yytext);}
"import"     {printf("%s palabra \n", yytext);}
"func"       {printf("%s palabra \n", yytext);}
"var"        {printf("%s palabra \n", yytext);}
"int"        {printf("%s palabra \n", yytext);}
"float32"    {printf("%s palabra \n", yytext);}
"bool"       {printf("%s palabra \n", yytext);}
"continue"   {printf("%s palabra \n", yytext);}
"break"      {printf("%s palabra \n", yytext);}
"printf"     {printf("%s palabra \n", yytext);}
"if"         {printf("%s palabra \n", yytext);}
"else"       {printf("%s palabra \n", yytext);}
"for"        {printf("%s palabra \n", yytext);}
"true"       {printf("%s palabra \n", yytext);}
"false"      {printf("%s palabra \n", yytext);}
"+"          {printf("%s palabra \n", yytext);}
"+="         {printf("%s palabra \n", yytext);}
"&&"         {printf("%s palabra \n", yytext);}
"=="         {printf("%s palabra \n", yytext);}
"!="         {printf("%s palabra \n", yytext);}
"("          {printf("%s palabra \n", yytext);}
")"          {printf("%s palabra \n", yytext);}
"-"          {printf("%s palabra \n", yytext);}
"-="         {printf("%s palabra \n", yytext);}
"|="         {printf("%s palabra \n", yytext);}
"||"         {printf("%s palabra \n", yytext);}
"<"          {printf("%s palabra \n", yytext);}
"<="         {printf("%s palabra \n", yytext);}
"["          {printf("%s palabra \n", yytext);}
"]"          {printf("%s palabra \n", yytext);}
"*"          {printf("%s palabra \n", yytext);}
"^"          {printf("%s palabra \n", yytext);}
"*="         {printf("%s palabra \n", yytext);}
"^="         {printf("%s palabra \n", yytext);}
">"          {printf("%s palabra \n", yytext);}
">="         {printf("%s palabra \n", yytext);}
"{"          {printf("%s palabra \n", yytext);}
"}"          {printf("%s palabra \n", yytext);}
"/"          {printf("%s palabra \n", yytext);}
"/="         {printf("%s palabra \n", yytext);}
"++"         {printf("%s palabra \n", yytext);}
"="          {printf("%s palabra \n", yytext);}
":="         {printf("%s palabra \n", yytext);}
","          {printf("%s palabra \n", yytext);}
";"          {printf("%s palabra \n", yytext);}
"%"          {printf("%s palabra \n", yytext);}
"%="         {printf("%s palabra \n", yytext);}
"--"         {printf("%s palabra \n", yytext);}
"!"          {printf("%s palabra \n", yytext);}
":"          {printf("%s palabra \n", yytext);}
"//"         {printf("%s palabra \n", yytext);}
/*"/*"         {printf("%s palabra \n", yytext);}  */
/* "*/"         {printf("%s palabra \n", yytext);} */
"\""         {printf("%s palabra \n", yytext);}
"."          {printf("%s punto \n", yytext);}
{alpha}     { printf("%s palabra \n", yytext);}
{numbers}   { printf("%s numero \n", yytext);}
" "          {}
\t           {}
\r           {}
\n           {}
.            {}

<comment>"*/" {BEGIN(INITIAL);}
<comment>.|\n {/*nada*/}
<comment><<EOF>> {printf("comentario incompleto en la linea %d\n", yylineno); return 0;}
%%
 int main(){
    FILE * fp;
    char filename[50];
    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
      printf("Error!");   
      exit(1);             
    }   
    yyin=fp;
    int a = yylex();
    while(a != 0)
    {
      a = yylex();
    }
    fclose(fp);
    return 0;
}