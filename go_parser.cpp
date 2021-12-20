/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "go.y"

//http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf
    #include <cstdio>
    #include "asm.h"
    #include <fstream>
    #include <iostream>

    using namespace std;
    int yylex();
    extern int yylineno;
    void yyerror(const char * s){
        fprintf(stderr, "Line: %d, error: %s\n", yylineno, s);
    }

    #define YYERROR_VERBOSE 1
    #define YYDEBUG 1
    #define EQUAL 1
    #define PLUSEQUAL 2
    #define MINUSEQUAL 3
    #define MULTEQUAL 4
    #define DIVEQUAL 5
    #define PWREQUAL 6
    #define MODEQUAL 7
    #define ANDEQUAL 8
    #define OREQUAL 9

    Asm assemblyFile;

    void writeFile(string name){
        ofstream file;
        file.open(name);
        file << assemblyFile.data << endl
        << assemblyFile.global <<endl
        << assemblyFile.text << endl;
        file.close();
    }

#line 108 "go_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 155 "go_parser.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_LIT_STRING = 258,
    TK_ID = 259,
    TK_LIT_INT = 260,
    TK_LIT_FLOAT = 261,
    TK_LIT_TRUE = 262,
    TK_LIT_FALSE = 263,
    TK_IF = 264,
    TK_ELSE = 265,
    TK_WHILE = 266,
    TK_RETURN = 267,
    TK_CONTINUE = 268,
    TK_BREAK = 269,
    TK_FOR = 270,
    TK_VOID = 271,
    TK_INT_TYPE = 272,
    TK_FLOAT_TYPE = 273,
    TK_BOOL_TYPE = 274,
    TK_STRING_TYPE = 275,
    TK_PRINTF = 276,
    TK_PLUS_EQUAL = 277,
    TK_MINUS_EQUAL = 278,
    TK_PLUS_PLUS = 279,
    TK_MINUS_MINUS = 280,
    TK_NOT = 281,
    TK_OR = 282,
    TK_AND = 283,
    TK_EQUAL = 284,
    TK_NOT_EQUAL = 285,
    TK_GREATER_OR_EQUAL = 286,
    TK_LESS_OR_EQUAL = 287,
    TK_VAR = 288,
    TK_FUNC = 289,
    TK_MULT_EQUAL = 290,
    TK_DIV_EQUAL = 291,
    TK_PWR_EQUAL = 292,
    TK_MOD_EQUAL = 293,
    TK_AND_EQUAL = 294,
    TK_OR_EQUAL = 295,
    TK_PACKAGE = 296,
    TK_IMPORT = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "go.y"

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
    Parameter * parameter_t;
    ParameterList * parameter_list_t;

#line 229 "go_parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKENS_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

#define YYUNDEFTOK  2
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    56,     2,     2,
      43,    44,    53,    57,    45,    58,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    52,
      60,    46,    59,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    97,    97,   115,   116,   119,   120,   140,   145,   148,
     151,   156,   159,   166,   167,   170,   171,   174,   175,   178,
     179,   180,   183,   184,   185,   188,   189,   192,   193,   194,
     197,   202,   205,   206,   209,   210,   211,   212,   213,   214,
     215,   218,   219,   222,   223,   224,   228,   231,   234,   235,
     236,   239,   240,   241,   244,   249,   250,   260,   261,   262,
     263,   264,   267,   268,   269,   270,   273,   294,   297,   298,
     299,   300,   301,   302,   306,   307,   310,   311,   312,   313,
     316,   317,   318,   319,   320,   323,   324,   325,   328,   329,
     330,   331,   332,   335,   336,   337,   340,   341,   344,   345,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     360,   363,   364,   365,   366
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_LIT_STRING", "TK_ID", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_LIT_TRUE", "TK_LIT_FALSE", "TK_IF", "TK_ELSE",
  "TK_WHILE", "TK_RETURN", "TK_CONTINUE", "TK_BREAK", "TK_FOR", "TK_VOID",
  "TK_INT_TYPE", "TK_FLOAT_TYPE", "TK_BOOL_TYPE", "TK_STRING_TYPE",
  "TK_PRINTF", "TK_PLUS_EQUAL", "TK_MINUS_EQUAL", "TK_PLUS_PLUS",
  "TK_MINUS_MINUS", "TK_NOT", "TK_OR", "TK_AND", "TK_EQUAL",
  "TK_NOT_EQUAL", "TK_GREATER_OR_EQUAL", "TK_LESS_OR_EQUAL", "TK_VAR",
  "TK_FUNC", "TK_MULT_EQUAL", "TK_DIV_EQUAL", "TK_PWR_EQUAL",
  "TK_MOD_EQUAL", "TK_AND_EQUAL", "TK_OR_EQUAL", "TK_PACKAGE", "TK_IMPORT",
  "'('", "')'", "','", "'='", "':'", "'['", "']'", "'{'", "'}'", "';'",
  "'*'", "'/'", "'^'", "'%'", "'+'", "'-'", "'>'", "'<'", "$accept",
  "start", "input", "external_declaration", "method_definition",
  "declaration_list", "declaration", "init_declarator_list",
  "init_declarator", "declarator", "parameters_type_list",
  "parameter_declaration", "initializer", "initializer_list", "statement",
  "statement_list", "if_statement", "expression_statement",
  "while_statement", "for_statement", "jump_statement", "block_statement",
  "type", "primary_expression", "assignment_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_or_expression",
  "logical_and_expression", "assignment_operator", "expression",
  "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    40,    41,    44,    61,    58,    91,    93,
     123,   125,    59,    42,    47,    94,    37,    43,    45,    62,
      60
};
# endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,     4,    14,    28,    -4,  -122,  -122,  -122,   -16,    83,
    -122,    35,    -2,  -122,  -122,   349,  -122,  -122,  -122,  -122,
    -122,     4,  -122,   343,    15,    -5,  -122,  -122,  -122,  -122,
    -122,  -122,    19,    19,    19,    19,  -122,  -122,    30,    99,
     367,     3,    31,   -25,    65,    37,    62,  -122,  -122,    19,
    -122,  -122,   343,    67,    74,  -122,    -1,  -122,  -122,  -122,
    -122,    77,  -122,  -122,  -122,   357,    19,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,    97,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    -3,  -122,    37,  -122,   184,  -122,    96,    67,
     162,   100,  -122,  -122,  -122,  -122,    85,   103,  -122,  -122,
    -122,  -122,  -122,  -122,     3,     3,    31,    31,    31,    31,
     -25,   -25,    62,    65,    19,  -122,    19,   105,    19,  -122,
    -122,   316,    19,  -122,   283,  -122,  -122,   217,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,    96,  -122,  -122,
    -122,    19,  -122,    37,   101,    19,  -122,  -122,   151,    98,
    -122,   250,  -122,  -122,  -122,  -122,    19,   157,   117,    19,
    -122,  -122,  -122,   316,   316,   316,   116,  -122,  -122,  -122,
      19,   316,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     5,     6,    22,    16,
      18,    19,     0,     1,     3,     0,    57,    58,    59,    60,
      61,     0,    15,     0,     0,     0,    65,    63,   111,   112,
     113,   114,     0,     0,     0,     0,    24,    68,     0,    79,
      84,    87,    92,    95,    99,    67,    97,    64,    17,     0,
      20,    30,     0,     0,     0,    26,    28,    76,    77,    78,
     110,     0,    23,    72,    73,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    33,    21,     0,     7,    12,     0,
       0,     0,    27,    62,    70,    75,     0,     0,   101,    66,
      80,    81,    82,    83,    85,    86,    90,    91,    88,    89,
      93,    94,    96,    98,     0,    31,     0,     0,     0,    52,
      53,     0,     0,    56,     0,    14,    42,     0,    37,    36,
      34,    35,    39,    38,    46,    10,     8,     9,    25,    29,
      71,     0,    69,    32,     0,     0,    51,    49,    46,     0,
      13,     0,    54,    41,    11,    74,     0,    43,     0,     0,
      50,    40,    55,     0,     0,     0,     0,    44,    45,    47,
       0,     0,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,   165,  -122,  -122,   -79,  -122,   149,   115,
    -122,    73,   122,  -122,  -121,    49,  -122,  -122,  -122,  -122,
    -122,   -49,    -7,  -122,   -14,  -122,  -122,   -13,    50,    54,
      47,    93,   -44,    95,  -122,   -35,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,   134,     7,     9,    10,    11,
      54,    55,    50,    92,   136,   137,   138,   139,   140,   141,
     142,   143,    56,    37,    60,    39,   106,    40,    41,    42,
      43,    44,    45,    46,    77,   144,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    38,    22,     8,    97,    94,    84,    85,     8,    51,
     157,    16,    17,    18,    19,    20,   163,   135,    12,    57,
      58,    59,    26,    27,    28,    29,    30,    31,    13,     1,
       2,   107,    15,   167,    86,    87,    93,   170,    51,    53,
     163,    25,   124,    32,    33,    34,    98,   101,   125,   145,
     146,   105,   177,   178,   179,   160,    78,    79,    80,    81,
     182,    52,    35,   109,    90,   110,   111,   112,   113,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    62,
     153,    23,    24,    16,    17,    18,    19,    20,    82,    83,
      91,   154,   147,   156,    88,    89,   158,   159,   164,    16,
      17,    18,    19,    20,    26,    27,    28,    29,    30,    31,
     126,    93,   127,   128,   129,   130,   131,    96,    99,   100,
     168,   103,   132,    63,    64,    32,    33,    34,    21,   150,
     151,   173,   114,   115,   176,   120,   121,   165,   116,   117,
     118,   119,    65,   108,    35,   181,    96,    66,   155,   149,
     171,    96,   152,   166,    26,    27,    28,    29,    30,    31,
     126,   175,   127,   128,   129,   130,   131,   174,   180,    14,
      48,   102,   132,   148,    95,    32,    33,    34,    16,    17,
      18,    19,    20,   161,   123,   122,     0,    26,    27,    28,
      29,    30,    31,   126,    35,   127,   128,   129,   130,   131,
       0,    96,     0,   169,     0,   132,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     1,     0,     0,
      26,    27,    28,    29,    30,    31,   126,    35,   127,   128,
     129,   130,   131,     0,    96,   133,     0,     0,   132,     0,
       0,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,   126,
      35,   127,   128,   129,   130,   131,     0,    96,   162,     0,
       0,   132,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,   126,    35,   127,   128,   129,   130,   131,     0,
      96,   172,     0,     0,   132,     0,     0,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     1,     0,     0,    26,
      27,    28,    29,    30,    31,   126,    35,   127,   128,   129,
     130,   131,     0,    96,     0,     0,     0,   132,     0,     0,
      32,    33,    34,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    26,    27,    28,    29,    30,    31,     0,    35,
      26,    27,    28,    29,    30,    31,    96,    32,    33,    34,
       0,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    35,     0,     0,    67,
      68,     0,    35,    49,     0,     0,     0,     0,    36,     0,
      35,   104,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      35,    15,     9,     4,    53,    49,    31,    32,     4,    23,
     131,    16,    17,    18,    19,    20,   137,    96,     4,    32,
      33,    34,     3,     4,     5,     6,     7,     8,     0,    33,
      34,    66,    48,   154,    59,    60,    49,   158,    52,    44,
     161,    43,    45,    24,    25,    26,    53,    48,    51,    98,
      99,    65,   173,   174,   175,   134,    53,    54,    55,    56,
     181,    46,    43,    77,    27,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    49,
     124,    46,    47,    16,    17,    18,    19,    20,    57,    58,
      28,   126,    99,   128,    29,    30,   131,   132,   147,    16,
      17,    18,    19,    20,     3,     4,     5,     6,     7,     8,
       9,   124,    11,    12,    13,    14,    15,    50,    44,    45,
     155,    44,    21,    24,    25,    24,    25,    26,    45,    44,
      45,   166,    82,    83,   169,    88,    89,   151,    84,    85,
      86,    87,    43,    46,    43,   180,    50,    48,    43,    49,
      52,    50,    49,    52,     3,     4,     5,     6,     7,     8,
       9,    44,    11,    12,    13,    14,    15,    10,    52,     4,
      21,    56,    21,   100,    52,    24,    25,    26,    16,    17,
      18,    19,    20,   134,    91,    90,    -1,     3,     4,     5,
       6,     7,     8,     9,    43,    11,    12,    13,    14,    15,
      -1,    50,    -1,    52,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    43,    11,    12,
      13,    14,    15,    -1,    50,    51,    -1,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      43,    11,    12,    13,    14,    15,    -1,    50,    51,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    43,    11,    12,    13,    14,    15,    -1,
      50,    51,    -1,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    43,    11,    12,    13,
      14,    15,    -1,    50,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    -1,    43,
       3,     4,     5,     6,     7,     8,    50,    24,    25,    26,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    43,    -1,    -1,    22,
      23,    -1,    43,    50,    -1,    -1,    -1,    -1,    49,    -1,
      43,    44,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,    62,    63,    64,    65,    67,     4,    68,
      69,    70,     4,     0,    64,    48,    16,    17,    18,    19,
      20,    45,    83,    46,    47,    43,     3,     4,     5,     6,
       7,     8,    24,    25,    26,    43,    49,    84,    85,    86,
      88,    89,    90,    91,    92,    93,    94,    97,    69,    50,
      73,    85,    46,    44,    71,    72,    83,    88,    88,    88,
      85,    96,    49,    24,    25,    43,    48,    22,    23,    35,
      36,    37,    38,    39,    40,    46,    47,    95,    53,    54,
      55,    56,    57,    58,    31,    32,    59,    60,    29,    30,
      27,    28,    74,    88,    93,    73,    50,    82,    83,    44,
      45,    48,    70,    44,    44,    85,    87,    96,    46,    85,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      91,    91,    94,    92,    45,    51,     9,    11,    12,    13,
      14,    15,    21,    51,    66,    67,    75,    76,    77,    78,
      79,    80,    81,    82,    96,    82,    82,    83,    72,    49,
      44,    45,    49,    93,    96,    43,    96,    75,    96,    96,
      67,    76,    51,    75,    82,    85,    52,    75,    96,    52,
      75,    52,    51,    96,    10,    44,    96,    75,    75,    75,
      52,    96,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    77,    78,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    87,    87,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    97,    97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     5,     6,     6,
       6,     7,     5,     2,     1,     3,     2,     3,     1,     1,
       3,     4,     1,     4,     3,     3,     1,     2,     1,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     3,     5,     5,     1,     5,     7,     2,
       3,     2,     1,     1,     3,     4,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     4,
       3,     4,     2,     2,     3,     1,     2,     2,     2,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 97 "go.y"
            {
    assemblyFile.global = ".globl main";
    assemblyFile.data = ".data\n";
    assemblyFile.text = ".text\n";
    list<Statement *>::iterator it = (yyvsp[0].statement_list_t)->begin();
    string code;
    //code += "main:\n";
    while(it != (yyvsp[0].statement_list_t)->end()){
        printf("semantic result: %d \n",(*it)->evaluateSemantic());
        code += (*it)->genCode();
        it++;
    }
    code += "li $v0, 10\n";
    code += "syscall\n";
    assemblyFile.text += code;
    writeFile("result.s");
}
#line 1613 "go_parser.cpp"
    break;

  case 3:
#line 115 "go.y"
                                  {(yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1619 "go_parser.cpp"
    break;

  case 4:
#line 116 "go.y"
                           {(yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1625 "go_parser.cpp"
    break;

  case 5:
#line 119 "go.y"
                                        {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1631 "go_parser.cpp"
    break;

  case 6:
#line 120 "go.y"
                          {(yyval.statement_t) = new GlobalDeclaration((yyvsp[0].declaration_t));}
#line 1637 "go_parser.cpp"
    break;

  case 7:
#line 140 "go.y"
                                                       {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)DYNAMIC, (yyvsp[-3].string_t), *pm, (yyvsp[0].statement_t), yylineno);
                     delete pm;
                 }
#line 1647 "go_parser.cpp"
    break;

  case 8:
#line 145 "go.y"
                                                                              {
                     (yyval.statement_t) = new MethodDefinition((Type)DYNAMIC, (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), (yyvsp[0].statement_t), yylineno);
                 }
#line 1655 "go_parser.cpp"
    break;

  case 9:
#line 148 "go.y"
                                                                   {
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[0].int_t), (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), NULL, yylineno);
                 }
#line 1663 "go_parser.cpp"
    break;

  case 10:
#line 151 "go.y"
                                                              {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-4].string_t), *pm, (yyvsp[0].statement_t), yylineno);
                     delete pm;
                 }
#line 1673 "go_parser.cpp"
    break;

  case 11:
#line 156 "go.y"
                                                                                   {
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-5].string_t), *(yyvsp[-3].parameter_list_t), (yyvsp[0].statement_t), yylineno);
                 }
#line 1681 "go_parser.cpp"
    break;

  case 12:
#line 159 "go.y"
                                             {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[0].int_t), (yyvsp[-3].string_t), *pm, NULL, yylineno);
                     delete pm;
                 }
#line 1691 "go_parser.cpp"
    break;

  case 13:
#line 166 "go.y"
                                               { (yyval.declaration_list_t) = (yyvsp[-1].declaration_list_t); (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t)); }
#line 1697 "go_parser.cpp"
    break;

  case 14:
#line 167 "go.y"
                              {(yyval.declaration_list_t) = new DeclarationList; (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t));}
#line 1703 "go_parser.cpp"
    break;

  case 15:
#line 170 "go.y"
                                              { (yyval.declaration_t) = new Declaration((Type)(yyvsp[0].int_t), *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);  }
#line 1709 "go_parser.cpp"
    break;

  case 16:
#line 171 "go.y"
                                         { (yyval.declaration_t) = new Declaration((Type)DYNAMIC, *(yyvsp[0].init_declarator_list_t), yylineno); delete (yyvsp[0].init_declarator_list_t);  }
#line 1715 "go_parser.cpp"
    break;

  case 17:
#line 174 "go.y"
                                                               { (yyval.init_declarator_list_t) = (yyvsp[-2].init_declarator_list_t); (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1721 "go_parser.cpp"
    break;

  case 18:
#line 175 "go.y"
                                  { (yyval.init_declarator_list_t) = new InitDeclaratorList; (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1727 "go_parser.cpp"
    break;

  case 19:
#line 178 "go.y"
                            {(yyval.init_declarator_t) = new InitDeclarator((yyvsp[0].declarator_t), NULL, yylineno);}
#line 1733 "go_parser.cpp"
    break;

  case 20:
#line 179 "go.y"
                                             { (yyval.init_declarator_t) = new InitDeclarator((yyvsp[-2].declarator_t), (yyvsp[0].initializer_t), yylineno); }
#line 1739 "go_parser.cpp"
    break;

  case 21:
#line 180 "go.y"
                                                { (yyval.init_declarator_t) = new InitDeclarator((yyvsp[-3].declarator_t), (yyvsp[0].initializer_t), yylineno); }
#line 1745 "go_parser.cpp"
    break;

  case 22:
#line 183 "go.y"
                  {(yyval.declarator_t) = new Declarator((yyvsp[0].string_t), NULL, false, yylineno);}
#line 1751 "go_parser.cpp"
    break;

  case 23:
#line 184 "go.y"
                                                { (yyval.declarator_t) = new Declarator((yyvsp[-3].string_t), (yyvsp[-1].expr_t), true, yylineno);}
#line 1757 "go_parser.cpp"
    break;

  case 24:
#line 185 "go.y"
                          {(yyval.declarator_t) = new Declarator((yyvsp[-2].string_t), NULL, true, yylineno);}
#line 1763 "go_parser.cpp"
    break;

  case 25:
#line 188 "go.y"
                                                                     {(yyval.parameter_list_t) = (yyvsp[-2].parameter_list_t); (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t));}
#line 1769 "go_parser.cpp"
    break;

  case 26:
#line 189 "go.y"
                                           { (yyval.parameter_list_t) = new ParameterList; (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t)); }
#line 1775 "go_parser.cpp"
    break;

  case 27:
#line 192 "go.y"
                                       { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-1].int_t), (yyvsp[0].declarator_t), false, yylineno); }
#line 1781 "go_parser.cpp"
    break;

  case 28:
#line 193 "go.y"
                            { (yyval.parameter_t) = new Parameter((Type)(yyvsp[0].int_t), NULL, false, yylineno); }
#line 1787 "go_parser.cpp"
    break;

  case 29:
#line 194 "go.y"
                                     { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-2].int_t), NULL, true, yylineno); }
#line 1793 "go_parser.cpp"
    break;

  case 30:
#line 197 "go.y"
                                   {
    InitializerElementList * list = new InitializerElementList;
    list->push_back((yyvsp[0].expr_t));
    (yyval.initializer_t) = new Initializer(*list, yylineno);
}
#line 1803 "go_parser.cpp"
    break;

  case 31:
#line 202 "go.y"
                                     { (yyval.initializer_t) = new Initializer(*(yyvsp[-1].initializer_list_t), yylineno); delete (yyvsp[-1].initializer_list_t);  }
#line 1809 "go_parser.cpp"
    break;

  case 32:
#line 205 "go.y"
                                                             { (yyval.initializer_list_t) = (yyvsp[-2].initializer_list_t); (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t)); }
#line 1815 "go_parser.cpp"
    break;

  case 33:
#line 206 "go.y"
                                        {(yyval.initializer_list_t) = new InitializerElementList; (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t));}
#line 1821 "go_parser.cpp"
    break;

  case 34:
#line 209 "go.y"
                           {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1827 "go_parser.cpp"
    break;

  case 35:
#line 210 "go.y"
                        { (yyval.statement_t) = (yyvsp[0].statement_t); }
#line 1833 "go_parser.cpp"
    break;

  case 36:
#line 211 "go.y"
                               {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1839 "go_parser.cpp"
    break;

  case 37:
#line 212 "go.y"
                       {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1845 "go_parser.cpp"
    break;

  case 38:
#line 213 "go.y"
                          {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1851 "go_parser.cpp"
    break;

  case 39:
#line 214 "go.y"
                         {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1857 "go_parser.cpp"
    break;

  case 40:
#line 215 "go.y"
                                   {(yyval.statement_t) = new PrintStatement((yyvsp[-1].expr_t), yylineno);}
#line 1863 "go_parser.cpp"
    break;

  case 41:
#line 218 "go.y"
                                         { (yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1869 "go_parser.cpp"
    break;

  case 42:
#line 219 "go.y"
                          { (yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1875 "go_parser.cpp"
    break;

  case 43:
#line 222 "go.y"
                                         {(yyval.statement_t) = new IfStatement((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1881 "go_parser.cpp"
    break;

  case 44:
#line 223 "go.y"
                                                        {(yyval.statement_t) = new IfStatementExtended((yyvsp[-3].expr_t), (yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1887 "go_parser.cpp"
    break;

  case 45:
#line 224 "go.y"
                                                           {(yyval.statement_t) = new ElseStatement((yyvsp[-3].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t), yylineno);}
#line 1893 "go_parser.cpp"
    break;

  case 46:
#line 228 "go.y"
                                 {(yyval.statement_t) = new ExprStatement((yyvsp[0].expr_t), yylineno);}
#line 1899 "go_parser.cpp"
    break;

  case 47:
#line 231 "go.y"
                                                       { (yyval.statement_t) = new WhileStatement((yyvsp[-2].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1905 "go_parser.cpp"
    break;

  case 48:
#line 234 "go.y"
                                                                         { (yyval.statement_t) = new ForStatement((yyvsp[-5].expr_t), (yyvsp[-3].expr_t), (yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1911 "go_parser.cpp"
    break;

  case 49:
#line 235 "go.y"
                                { (yyval.statement_t) = new ForState((yyvsp[0].statement_t), yylineno);}
#line 1917 "go_parser.cpp"
    break;

  case 50:
#line 236 "go.y"
                                           { (yyval.statement_t) = new ForMid((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno); }
#line 1923 "go_parser.cpp"
    break;

  case 51:
#line 239 "go.y"
                                     {(yyval.statement_t) = new ReturnStatement((yyvsp[0].expr_t), yylineno);}
#line 1929 "go_parser.cpp"
    break;

  case 52:
#line 240 "go.y"
                            { (yyval.statement_t) = new ContinueStatement(yylineno);}
#line 1935 "go_parser.cpp"
    break;

  case 53:
#line 241 "go.y"
                         { (yyval.statement_t) = new BreakStatement(yylineno);}
#line 1941 "go_parser.cpp"
    break;

  case 54:
#line 244 "go.y"
                                        { 
                    DeclarationList * list = new DeclarationList();
                    (yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *list, yylineno);
                    delete list;
               }
#line 1951 "go_parser.cpp"
    break;

  case 55:
#line 249 "go.y"
                                                          {(yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *(yyvsp[-2].declaration_list_t), yylineno); delete (yyvsp[-2].declaration_list_t); delete (yyvsp[-1].statement_list_t); }
#line 1957 "go_parser.cpp"
    break;

  case 56:
#line 250 "go.y"
                         {
                   StatementList * stmts = new StatementList();
                   DeclarationList * decls = new DeclarationList();
                   (yyval.statement_t) = new BlockStatement(*stmts, *decls, yylineno);
                   delete stmts;
                   delete decls;

               }
#line 1970 "go_parser.cpp"
    break;

  case 57:
#line 260 "go.y"
              {(yyval.int_t) = VOID;}
#line 1976 "go_parser.cpp"
    break;

  case 58:
#line 261 "go.y"
                 {(yyval.int_t) = INT;}
#line 1982 "go_parser.cpp"
    break;

  case 59:
#line 262 "go.y"
                   {(yyval.int_t) = FLOAT;}
#line 1988 "go_parser.cpp"
    break;

  case 60:
#line 263 "go.y"
                  {(yyval.int_t) = BOOL;}
#line 1994 "go_parser.cpp"
    break;

  case 61:
#line 264 "go.y"
                    {(yyval.int_t) = STRING;}
#line 2000 "go_parser.cpp"
    break;

  case 62:
#line 267 "go.y"
                                       {(yyval.expr_t) = (yyvsp[-1].expr_t);}
#line 2006 "go_parser.cpp"
    break;

  case 63:
#line 268 "go.y"
            {(yyval.expr_t) = new IdExpr((yyvsp[0].string_t), yylineno);}
#line 2012 "go_parser.cpp"
    break;

  case 64:
#line 269 "go.y"
               {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2018 "go_parser.cpp"
    break;

  case 65:
#line 270 "go.y"
                    { (yyval.expr_t) = new StringExpr((yyvsp[0].string_t), yylineno); }
#line 2024 "go_parser.cpp"
    break;

  case 66:
#line 273 "go.y"
                                                                                  {
        if((yyvsp[-1].int_t) == EQUAL){
            (yyval.expr_t) = new AssignExpr((yyvsp[-2].expr_t),(yyvsp[0].expr_t),yylineno);
        }else if((yyvsp[-1].int_t) == PLUSEQUAL){
            (yyval.expr_t) = new PlusAssignExpr((yyvsp[-2].expr_t),(yyvsp[0].expr_t),yylineno);
        }else if((yyvsp[-1].int_t) == MINUSEQUAL){
            (yyval.expr_t) = new MinusAssignExpr((yyvsp[-2].expr_t),(yyvsp[0].expr_t),yylineno);
        }else if((yyvsp[-1].int_t) == MULTEQUAL){
            (yyval.expr_t) = new MultAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }else if((yyvsp[-1].int_t) == DIVEQUAL){
            (yyval.expr_t) = new DivAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }else if((yyvsp[-1].int_t) == PWREQUAL){
            (yyval.expr_t) = new PwrAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }else if((yyvsp[-1].int_t) == MODEQUAL){
            (yyval.expr_t) = new ModAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }else if((yyvsp[-1].int_t) == ANDEQUAL){
            (yyval.expr_t) = new AndAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }else if((yyvsp[-1].int_t) == OREQUAL){
            (yyval.expr_t) = new OrAssignExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno);
        }
}
#line 2050 "go_parser.cpp"
    break;

  case 67:
#line 294 "go.y"
                                             { (yyval.expr_t) = (yyvsp[0].expr_t); }
#line 2056 "go_parser.cpp"
    break;

  case 68:
#line 297 "go.y"
                                       {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2062 "go_parser.cpp"
    break;

  case 69:
#line 298 "go.y"
                                                            { (yyval.expr_t) = new ArrayExpr((IdExpr*)(yyvsp[-3].expr_t), (yyvsp[-1].expr_t), yylineno); }
#line 2068 "go_parser.cpp"
    break;

  case 70:
#line 299 "go.y"
                                                 { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-2].expr_t), *(new ArgumentList), yylineno); }
#line 2074 "go_parser.cpp"
    break;

  case 71:
#line 300 "go.y"
                                                                          { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-3].expr_t), *(yyvsp[-1].argument_list_t), yylineno); }
#line 2080 "go_parser.cpp"
    break;

  case 72:
#line 301 "go.y"
                                                      { (yyval.expr_t) = new PostIncrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 2086 "go_parser.cpp"
    break;

  case 73:
#line 302 "go.y"
                                                        { (yyval.expr_t) = new PostDecrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 2092 "go_parser.cpp"
    break;

  case 74:
#line 306 "go.y"
                                                                             {(yyval.argument_list_t) = (yyvsp[-2].argument_list_t);  (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 2098 "go_parser.cpp"
    break;

  case 75:
#line 307 "go.y"
                                                { (yyval.argument_list_t) = new ArgumentList; (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 2104 "go_parser.cpp"
    break;

  case 76:
#line 310 "go.y"
                                                {(yyval.expr_t) = new UnaryExpr(INCREMENT, (yyvsp[0].expr_t), yylineno);}
#line 2110 "go_parser.cpp"
    break;

  case 77:
#line 311 "go.y"
                                                  {(yyval.expr_t) = new UnaryExpr(DECREMENT, (yyvsp[0].expr_t), yylineno);}
#line 2116 "go_parser.cpp"
    break;

  case 78:
#line 312 "go.y"
                                           {(yyval.expr_t) = new UnaryExpr(NOT, (yyvsp[0].expr_t), yylineno);}
#line 2122 "go_parser.cpp"
    break;

  case 79:
#line 313 "go.y"
                                     { (yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2128 "go_parser.cpp"
    break;

  case 80:
#line 316 "go.y"
                                                                          { (yyval.expr_t) = new MulExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2134 "go_parser.cpp"
    break;

  case 81:
#line 317 "go.y"
                                                       { (yyval.expr_t) = new DivExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2140 "go_parser.cpp"
    break;

  case 82:
#line 318 "go.y"
                                                       { (yyval.expr_t) = new PwrExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2146 "go_parser.cpp"
    break;

  case 83:
#line 319 "go.y"
                                                       { (yyval.expr_t) = new ModExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2152 "go_parser.cpp"
    break;

  case 84:
#line 320 "go.y"
                         {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2158 "go_parser.cpp"
    break;

  case 85:
#line 323 "go.y"
                                                                       { (yyval.expr_t) = new AddExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2164 "go_parser.cpp"
    break;

  case 86:
#line 324 "go.y"
                                                                        { (yyval.expr_t) = new SubExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2170 "go_parser.cpp"
    break;

  case 87:
#line 325 "go.y"
                                                {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2176 "go_parser.cpp"
    break;

  case 88:
#line 328 "go.y"
                                                                     { (yyval.expr_t) = new GtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2182 "go_parser.cpp"
    break;

  case 89:
#line 329 "go.y"
                                                                     { (yyval.expr_t) = new LtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2188 "go_parser.cpp"
    break;

  case 90:
#line 330 "go.y"
                                                                                     { (yyval.expr_t) = new GteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2194 "go_parser.cpp"
    break;

  case 91:
#line 331 "go.y"
                                                                                  { (yyval.expr_t) = new LteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2200 "go_parser.cpp"
    break;

  case 92:
#line 332 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2206 "go_parser.cpp"
    break;

  case 93:
#line 335 "go.y"
                                                                         { (yyval.expr_t) = new EqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2212 "go_parser.cpp"
    break;

  case 94:
#line 336 "go.y"
                                                                            { (yyval.expr_t) = new NeqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2218 "go_parser.cpp"
    break;

  case 95:
#line 337 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2224 "go_parser.cpp"
    break;

  case 96:
#line 340 "go.y"
                                                                          { (yyval.expr_t) = new LogicalOrExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2230 "go_parser.cpp"
    break;

  case 97:
#line 341 "go.y"
                                             {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2236 "go_parser.cpp"
    break;

  case 98:
#line 344 "go.y"
                                                                          { (yyval.expr_t) = new LogicalAndExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2242 "go_parser.cpp"
    break;

  case 99:
#line 345 "go.y"
                                            {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2248 "go_parser.cpp"
    break;

  case 100:
#line 348 "go.y"
                         { (yyval.int_t) = EQUAL; }
#line 2254 "go_parser.cpp"
    break;

  case 101:
#line 349 "go.y"
                            { (yyval.int_t) = EQUAL; }
#line 2260 "go_parser.cpp"
    break;

  case 102:
#line 350 "go.y"
                                   {(yyval.int_t) = PLUSEQUAL; }
#line 2266 "go_parser.cpp"
    break;

  case 103:
#line 351 "go.y"
                                    { (yyval.int_t) = MINUSEQUAL; }
#line 2272 "go_parser.cpp"
    break;

  case 104:
#line 352 "go.y"
                                   { (yyval.int_t) = MULTEQUAL; }
#line 2278 "go_parser.cpp"
    break;

  case 105:
#line 353 "go.y"
                                  { (yyval.int_t) = DIVEQUAL; }
#line 2284 "go_parser.cpp"
    break;

  case 106:
#line 354 "go.y"
                                  { (yyval.int_t) = PWREQUAL; }
#line 2290 "go_parser.cpp"
    break;

  case 107:
#line 355 "go.y"
                                  { (yyval.int_t) = MODEQUAL; }
#line 2296 "go_parser.cpp"
    break;

  case 108:
#line 356 "go.y"
                                  { (yyval.int_t) = ANDEQUAL; }
#line 2302 "go_parser.cpp"
    break;

  case 109:
#line 357 "go.y"
                                 { (yyval.int_t) = OREQUAL; }
#line 2308 "go_parser.cpp"
    break;

  case 110:
#line 360 "go.y"
                                  {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2314 "go_parser.cpp"
    break;

  case 111:
#line 363 "go.y"
                     { (yyval.expr_t) = new IntExpr((yyvsp[0].int_t) , yylineno);}
#line 2320 "go_parser.cpp"
    break;

  case 112:
#line 364 "go.y"
                       { (yyval.expr_t) = new FloatExpr((yyvsp[0].float_t) , yylineno);}
#line 2326 "go_parser.cpp"
    break;

  case 113:
#line 365 "go.y"
                      { (yyval.expr_t) = new BoolExpr(1, yylineno);}
#line 2332 "go_parser.cpp"
    break;

  case 114:
#line 366 "go.y"
                       { (yyval.expr_t) = new BoolExpr(0, yylineno);}
#line 2338 "go_parser.cpp"
    break;


#line 2342 "go_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 368 "go.y"
