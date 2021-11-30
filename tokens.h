/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TOKENS_H_INCLUDED
# define YY_YY_TOKENS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "go.y"

    #include "ast.h"

#line 53 "tokens.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_LIT_STRING = 258,           /* TK_LIT_STRING  */
    TK_ID = 259,                   /* TK_ID  */
    TK_LIT_INT = 260,              /* TK_LIT_INT  */
    TK_LIT_FLOAT = 261,            /* TK_LIT_FLOAT  */
    TK_BOOL_TYPE = 262,            /* TK_BOOL_TYPE  */
    TK_TRUE = 263,                 /* TK_TRUE  */
    TK_FALSE = 264,                /* TK_FALSE  */
    TK_IF = 265,                   /* TK_IF  */
    TK_ELSE = 266,                 /* TK_ELSE  */
    TK_WHILE = 267,                /* TK_WHILE  */
    TK_RETURN = 268,               /* TK_RETURN  */
    TK_FOR = 269,                  /* TK_FOR  */
    TK_CONTINUE = 270,             /* TK_CONTINUE  */
    TK_BREAK = 271,                /* TK_BREAK  */
    TK_VOID = 272,                 /* TK_VOID  */
    TK_INT_TYPE = 273,             /* TK_INT_TYPE  */
    TK_FLOAT_TYPE = 274,           /* TK_FLOAT_TYPE  */
    TK_VAR = 275,                  /* TK_VAR  */
    TK_PRINTF = 276,               /* TK_PRINTF  */
    TK_PLUS_EQUAL = 277,           /* TK_PLUS_EQUAL  */
    TK_MINUS_EQUAL = 278,          /* TK_MINUS_EQUAL  */
    TK_PLUS_PLUS = 279,            /* TK_PLUS_PLUS  */
    TK_MINUS_MINUS = 280,          /* TK_MINUS_MINUS  */
    TK_NOT = 281,                  /* TK_NOT  */
    TK_OR = 282,                   /* TK_OR  */
    TK_AND = 283,                  /* TK_AND  */
    TK_EQUAL = 284,                /* TK_EQUAL  */
    TK_NOT_EQUAL = 285,            /* TK_NOT_EQUAL  */
    TK_GREATER_OR_EQUAL = 286,     /* TK_GREATER_OR_EQUAL  */
    TK_LESS_OR_EQUAL = 287,        /* TK_LESS_OR_EQUAL  */
    TK_PACKAGE = 288,              /* TK_PACKAGE  */
    TK_IMPORT = 289,               /* TK_IMPORT  */
    TK_FUNC = 290,                 /* TK_FUNC  */
    TK_PRINTLN = 291               /* TK_PRINTLN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "go.y"

    const char * string_t;
    int int_t;
    float float_t;
    bool bool_t;
    Expr * expr_t;
    ArgumentList * argument_list_t;
    Statement * statement_t;
    StatementList * statement_list_t;
    InitDeclaratorList * init_declarator_list_t;
    InitDeclarator * init_declarator_t;
    Declarator * declarator_t;
    Initializer * initializer_t;
    InitializerElementList * initializer_list_t;
    Declaration * declaration_t;
    DeclarationList * declaration_list_t;
    DeclarationList * package_list_t;
    DeclarationList * import_list_t;
    Parameter * parameter_t;
    ParameterList * parameter_list_t;

#line 128 "tokens.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKENS_H_INCLUDED  */
