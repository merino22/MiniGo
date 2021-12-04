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

#line 87 "go_parser.cpp"

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

#line 134 "go_parser.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_LIT_STRING = 258,
    TK_ID = 259,
    TK_LIT_INT = 260,
    TK_LIT_FLOAT = 261,
    TK_BOOL_TYPE = 262,
    TK_TRUE = 263,
    TK_FALSE = 264,
    TK_IF = 265,
    TK_ELSE = 266,
    TK_WHILE = 267,
    TK_RETURN = 268,
    TK_FOR = 269,
    TK_CONTINUE = 270,
    TK_BREAK = 271,
    TK_VOID = 272,
    TK_INT_TYPE = 273,
    TK_FLOAT_TYPE = 274,
    TK_VAR = 275,
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
    TK_PACKAGE = 288,
    TK_IMPORT = 289,
    TK_FUNC = 290,
    TK_PRINTLN = 291
  };
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

#line 204 "go_parser.cpp"

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,    38,    48,    47,    40,    50,    46,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    39,
      52,    41,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    87,    88,    91,    92,   114,   118,   122,
     127,   132,   135,   142,   143,   146,   147,   148,   149,   152,
     153,   154,   157,   158,   161,   162,   163,   164,   167,   168,
     171,   172,   173,   176,   181,   184,   185,   188,   189,   190,
     191,   192,   193,   194,   197,   198,   201,   202,   203,   204,
     207,   208,   209,   212,   215,   218,   219,   220,   221,   224,
     229,   230,   233,   243,   244,   245,   248,   252,   253,   255,
     256,   257,   258,   259,   260,   263,   264,   265,   268,   269,
     272,   273,   274,   275,   276,   277,   281,   282,   285,   286,
     287,   288,   291,   292,   293,   296,   297,   298,   301,   302,
     303,   304,   305,   308,   309,   310,   313,   315,   318,   319,
     322,   323,   324,   325,   328,   331,   332,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_LIT_STRING", "TK_ID", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_BOOL_TYPE", "TK_TRUE", "TK_FALSE", "TK_IF",
  "TK_ELSE", "TK_WHILE", "TK_RETURN", "TK_FOR", "TK_CONTINUE", "TK_BREAK",
  "TK_VOID", "TK_INT_TYPE", "TK_FLOAT_TYPE", "TK_VAR", "TK_PRINTF",
  "TK_PLUS_EQUAL", "TK_MINUS_EQUAL", "TK_PLUS_PLUS", "TK_MINUS_MINUS",
  "TK_NOT", "TK_OR", "TK_AND", "TK_EQUAL", "TK_NOT_EQUAL",
  "TK_GREATER_OR_EQUAL", "TK_LESS_OR_EQUAL", "TK_PACKAGE", "TK_IMPORT",
  "TK_FUNC", "TK_PRINTLN", "'('", "')'", "';'", "','", "'='", "'['", "']'",
  "'{'", "'}'", "'.'", "'+'", "'*'", "'/'", "'-'", "'>'", "'<'", "':'",
  "$accept", "start", "input", "external_declaration", "method_definition",
  "declaration_list", "declaration", "init_declarator_list",
  "init_declarator", "declarator", "parameters_type_list",
  "parameter_declaration", "initializer", "initializer_list", "statement",
  "statement_list", "if_statement", "for_statement",
  "expression_statement", "while_statement", "jump_statement",
  "block_statement", "print_statement", "concat_list", "type",
  "primary_expression", "assignment_expression", "postfix_expression",
  "argument_expression_list", "unary_expression",
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
     285,   286,   287,   288,   289,   290,   291,    40,    41,    59,
      44,    61,    91,    93,   123,   125,    46,    43,    42,    47,
      45,    62,    60,    58
};
# endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     419,   -82,   -82,   -82,   -82,   136,   -82,   -82,    20,    41,
     419,   -82,   -82,   -82,    40,   -82,    28,   360,   -82,    38,
      49,   -82,   -82,   136,    10,   329,   -82,   136,   -82,    65,
      70,   103,    15,   -82,   -82,   -82,   -82,   -82,   405,   405,
     405,   405,   -82,   -82,    83,    56,   -11,    94,    55,    60,
     133,    79,   102,   -82,   -82,   -82,   405,   -82,   -82,     3,
     -35,   -82,     4,   -82,   -82,   -82,   -82,   -82,   126,   -82,
     -82,   -82,   381,   405,   -82,   -82,   -82,   108,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,    63,   -82,    79,   141,   -82,    89,     3,   311,   134,
     -82,   -82,   -82,   -82,    31,   145,   -82,   -82,   -82,   -82,
      94,    94,    55,    55,    55,    55,    60,    60,   102,   133,
     405,   -82,   130,   405,   142,   365,   256,   161,   165,   -82,
     177,   -82,   -82,   203,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   166,   -82,   -82,   -82,    90,   -82,   -82,   -82,   405,
     -82,    79,   176,   282,   405,   -82,   181,   192,   -82,   299,
     -82,   -82,   -82,   -82,   220,   -82,   -82,   -82,   -82,   -82,
     -82,   200,   405,   227,   201,   -82,   405,   -82,   -82,   409,
     336,   336,   336,   202,   -13,   -12,    -9,   204,   232,   -82,
     -82,   405,   210,   405,   247,   212,   336,   336,   -82,   214,
     -82,   -82,   -82,   -82,   215,   -82
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    72,    69,    70,    71,     0,    74,    73,     0,     0,
       2,     4,     5,     6,     0,    25,    24,     0,    21,    22,
       0,     1,     3,     0,     0,     0,    16,     0,    20,     0,
       0,     0,     0,    17,   117,    76,   115,   116,     0,     0,
       0,     0,    27,    80,     0,    91,    94,    97,   102,   105,
     109,    79,   107,    77,    19,    15,     0,    23,    33,     0,
       0,    29,    31,    18,    88,    89,    90,   114,     0,    26,
      84,    85,     0,     0,   112,   113,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    36,     0,    10,     0,     0,     0,     0,
      30,    75,    82,    87,     0,     0,   110,    78,    92,    93,
      95,    96,   100,   101,    98,    99,   103,   104,   106,   108,
       0,    34,    76,     0,     0,     0,     0,     0,     0,    62,
       0,    14,    45,     0,    39,    42,    38,    37,    41,    40,
      43,     0,    12,     9,     8,     0,    28,    32,    83,     0,
      81,    35,     0,     0,     0,    58,     0,     0,    52,     0,
      57,    56,    61,    13,     0,    59,    44,    53,    11,     7,
      86,     0,     0,    46,     0,    55,     0,    50,    60,     0,
       0,     0,     0,     0,   117,    76,     0,     0,    47,    49,
      54,     0,     0,     0,     0,     0,     0,     0,    63,     0,
      66,    65,    48,    51,     0,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   243,   -82,   -82,    -7,    95,   100,   193,
     -82,   158,   -82,   -82,   -81,   128,   -82,   -82,   -82,   -82,
     -82,   -57,   -82,   -82,    -8,   -82,   -24,   -82,   -82,   -23,
      91,    85,   111,   187,   -52,   178,   -82,   -41,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,   130,    13,    17,    18,    19,
      60,    61,    57,    91,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   186,    14,    43,    67,    45,   104,    46,
      47,    48,    49,    50,    51,    52,    78,   141,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    44,    95,    97,    93,    98,    58,    15,    16,    29,
       1,    74,    75,    15,    16,    64,    65,    66,    15,    16,
       2,     3,     4,    62,    20,   -67,   -68,   -67,   -68,   192,
      76,   193,   105,    92,   -67,   -68,     6,     7,   194,   143,
     144,    21,    77,    15,    16,   158,    99,    94,   103,    33,
      27,    96,   166,    63,   107,    27,   108,   109,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,   151,   148,
      25,   149,   173,    34,    35,    36,    37,    23,   177,    30,
      70,    71,   153,   166,   156,   159,    31,   131,   169,   145,
      62,    83,    84,    72,    38,    39,    40,    92,    73,   188,
     189,   190,    81,   120,    55,    82,    89,    41,   121,    24,
       1,    85,    86,   174,    56,   202,   203,    28,    32,   157,
       2,     3,     4,   163,    28,   170,    69,    54,   142,   168,
      90,   180,    28,    94,    94,   183,     6,     7,   187,    15,
      16,    59,    79,    80,    34,   122,    36,    37,     1,   106,
     197,   123,   199,   124,   125,   126,   127,   128,     2,     3,
       4,     5,    87,    88,   101,    38,    39,    40,   112,   113,
     114,   115,   110,   111,     6,     7,   152,   147,    41,   154,
      34,   122,    36,    37,     1,    94,   129,   123,   150,   124,
     125,   126,   127,   128,     2,     3,     4,     5,   116,   117,
     160,    38,    39,    40,   161,   167,    34,   122,    36,    37,
       6,     7,   171,   123,    41,   124,   125,   126,   127,   128,
     175,    94,   162,    34,   122,    36,    37,    38,    39,    40,
     123,   176,   124,   125,   126,   127,   128,   179,   181,   182,
      41,   191,   195,   196,    38,    39,    40,    94,   165,   198,
     200,   201,   204,    22,   205,   100,   146,    41,   164,    34,
     122,    36,    37,     1,    94,   178,   123,   118,   124,   125,
     126,   127,   128,     2,     3,     4,     5,   119,     0,     0,
      38,    39,    40,     0,     0,    34,   122,    36,    37,     6,
       7,     0,   123,    41,   124,   125,   126,   127,   128,     0,
      94,     0,    34,   122,    36,    37,    38,    39,    40,   123,
       0,   124,   125,   126,   127,   128,     0,     0,     1,    41,
       0,   172,     0,    38,    39,    40,    94,     0,     2,     3,
       4,     0,    34,    35,    36,    37,    41,     0,   167,    34,
     122,    36,    37,    94,     6,     7,   123,     0,   124,   125,
     126,   127,   128,    38,    39,    40,     0,     0,     0,     0,
      38,    39,    40,    15,    16,     0,    41,     1,    34,    35,
      36,    37,    42,    41,     0,     0,     0,     2,     3,     4,
      94,     0,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,     6,     7,     0,     0,     0,     0,    26,
      27,     0,    41,     0,   155,    38,    39,    40,    34,    35,
      36,    37,   184,   185,    36,    37,     0,     0,    41,   102,
       0,     0,     0,     0,     0,     0,     1,     0,     0,    38,
      39,    40,     0,    38,    39,    40,     2,     3,     4,     5,
       0,     0,    41,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     6,     7,     8
};

static const yytype_int16 yycheck[] =
{
      41,    25,    59,    38,    56,    40,    30,     3,     4,    17,
       7,    22,    23,     3,     4,    38,    39,    40,     3,     4,
      17,    18,    19,    31,     4,    38,    38,    40,    40,    38,
      41,    40,    73,    56,    47,    47,    33,    34,    47,    96,
      97,     0,    53,     3,     4,   126,    42,    44,    72,    39,
      40,    59,   133,    38,    78,    40,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   120,    38,
      42,    40,   153,     3,     4,     5,     6,    37,   159,    41,
      24,    25,   123,   164,   125,   126,    37,    94,   145,    97,
      98,    31,    32,    37,    24,    25,    26,   120,    42,   180,
     181,   182,    47,    40,    39,    50,    27,    37,    45,    14,
       7,    51,    52,   154,    44,   196,   197,    17,    23,   126,
      17,    18,    19,   130,    24,   149,    43,    27,    39,    39,
      28,   172,    32,    44,    44,   176,    33,    34,   179,     3,
       4,    38,    48,    49,     3,     4,     5,     6,     7,    41,
     191,    10,   193,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    29,    30,    38,    24,    25,    26,    83,    84,
      85,    86,    81,    82,    33,    34,    46,    43,    37,    37,
       3,     4,     5,     6,     7,    44,    45,    10,    43,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    87,    88,
      39,    24,    25,    26,    39,    39,     3,     4,     5,     6,
      33,    34,    36,    10,    37,    12,    13,    14,    15,    16,
      39,    44,    45,     3,     4,     5,     6,    24,    25,    26,
      10,    39,    12,    13,    14,    15,    16,    37,    11,    38,
      37,    39,    38,    11,    24,    25,    26,    44,    45,    39,
       3,    39,    38,    10,    39,    62,    98,    37,   130,     3,
       4,     5,     6,     7,    44,    45,    10,    89,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    90,    -1,    -1,
      24,    25,    26,    -1,    -1,     3,     4,     5,     6,    33,
      34,    -1,    10,    37,    12,    13,    14,    15,    16,    -1,
      44,    -1,     3,     4,     5,     6,    24,    25,    26,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,     7,    37,
      -1,    39,    -1,    24,    25,    26,    44,    -1,    17,    18,
      19,    -1,     3,     4,     5,     6,    37,    -1,    39,     3,
       4,     5,     6,    44,    33,    34,    10,    -1,    12,    13,
      14,    15,    16,    24,    25,    26,    -1,    -1,    -1,    -1,
      24,    25,    26,     3,     4,    -1,    37,     7,     3,     4,
       5,     6,    43,    37,    -1,    -1,    -1,    17,    18,    19,
      44,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    24,
      25,    26,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    37,    -1,    39,    24,    25,    26,     3,     4,
       5,     6,     3,     4,     5,     6,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    24,
      25,    26,    -1,    24,    25,    26,    17,    18,    19,    20,
      -1,    -1,    37,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    17,    18,    19,    20,    33,    34,    35,    55,
      56,    57,    58,    60,    78,     3,     4,    61,    62,    63,
       4,     0,    57,    37,    61,    42,    39,    40,    62,    78,
      41,    37,    61,    39,     3,     4,     5,     6,    24,    25,
      26,    37,    43,    79,    80,    81,    83,    84,    85,    86,
      87,    88,    89,    92,    62,    39,    44,    66,    80,    38,
      64,    65,    78,    38,    83,    83,    83,    80,    91,    43,
      24,    25,    37,    42,    22,    23,    41,    53,    90,    48,
      49,    47,    50,    31,    32,    51,    52,    29,    30,    27,
      28,    67,    83,    88,    44,    75,    78,    38,    40,    42,
      63,    38,    38,    80,    82,    91,    41,    80,    83,    83,
      84,    84,    85,    85,    85,    85,    86,    86,    89,    87,
      40,    45,     4,    10,    12,    13,    14,    15,    16,    45,
      59,    60,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    91,    39,    75,    75,    78,    65,    43,    38,    40,
      43,    88,    46,    91,    37,    39,    91,    60,    68,    91,
      39,    39,    45,    60,    69,    45,    68,    39,    39,    75,
      80,    36,    39,    68,    91,    39,    39,    68,    45,    37,
      91,    11,    38,    91,     3,     4,    77,    91,    68,    68,
      68,    39,    38,    40,    47,    38,    11,    91,    39,    91,
       3,    39,    68,    68,    38,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    63,    63,    63,    63,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    73,    74,    74,    74,    74,    75,
      75,    75,    75,    76,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    91,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     7,     6,     6,
       5,     7,     6,     2,     1,     4,     3,     3,     4,     3,
       2,     1,     1,     3,     1,     1,     4,     3,     3,     1,
       2,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     5,     7,     5,
       3,     7,     2,     2,     5,     3,     2,     2,     2,     3,
       4,     3,     2,     7,     9,     7,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     3,     1,
       1,     4,     3,     4,     2,     2,     3,     1,     2,     2,
       2,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1
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
#line 79 "go.y"
            {
    list<Statement *>::iterator it = (yyvsp[0].statement_list_t)->begin();
    while(it != (yyvsp[0].statement_list_t)->end()){
        printf("semantic result: %d \n",(*it)->evaluateSemantic());
        it++;
    }
}
#line 1590 "go_parser.cpp"
    break;

  case 3:
#line 87 "go.y"
                                  {(yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1596 "go_parser.cpp"
    break;

  case 4:
#line 88 "go.y"
                           {(yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1602 "go_parser.cpp"
    break;

  case 5:
#line 91 "go.y"
                                        {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1608 "go_parser.cpp"
    break;

  case 6:
#line 92 "go.y"
                          {(yyval.statement_t) = new GlobalDeclaration((yyvsp[0].declaration_t));}
#line 1614 "go_parser.cpp"
    break;

  case 7:
#line 114 "go.y"
                                                                                   {
                    (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-5].string_t), *(yyvsp[-3].parameter_list_t), (yyvsp[0].statement_t), yylineno );
                    delete (yyvsp[-3].parameter_list_t);
                 }
#line 1623 "go_parser.cpp"
    break;

  case 8:
#line 118 "go.y"
                                                                              {
                    (yyval.statement_t) = new MethodDefinition((Type)NULL, (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), (yyvsp[0].statement_t), yylineno );
                    delete (yyvsp[-2].parameter_list_t);
                 }
#line 1632 "go_parser.cpp"
    break;

  case 9:
#line 122 "go.y"
                                                             {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-4].string_t), *pm, (yyvsp[0].statement_t), yylineno );
                     delete pm;
                 }
#line 1642 "go_parser.cpp"
    break;

  case 10:
#line 127 "go.y"
                                                        {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)NULL, (yyvsp[-3].string_t), *pm, (yyvsp[0].statement_t), yylineno );
                     delete pm;
                 }
#line 1652 "go_parser.cpp"
    break;

  case 11:
#line 132 "go.y"
                                                                      { // func hola (int x, int y) int;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-5].string_t), *(yyvsp[-3].parameter_list_t), NULL, yylineno);
                 }
#line 1660 "go_parser.cpp"
    break;

  case 12:
#line 135 "go.y"
                                                 {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-4].string_t), *pm , NULL, yylineno);
                     delete pm;
                 }
#line 1670 "go_parser.cpp"
    break;

  case 13:
#line 142 "go.y"
                                               { (yyval.declaration_list_t) = (yyvsp[-1].declaration_list_t); (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t)); }
#line 1676 "go_parser.cpp"
    break;

  case 14:
#line 143 "go.y"
                              {(yyval.declaration_list_t) = new DeclarationList; (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t));}
#line 1682 "go_parser.cpp"
    break;

  case 15:
#line 146 "go.y"
                                                  { (yyval.declaration_t) = new Declaration((Type)(yyvsp[-1].int_t), *(yyvsp[-2].init_declarator_list_t), yylineno); delete (yyvsp[-2].init_declarator_list_t);  }
#line 1688 "go_parser.cpp"
    break;

  case 16:
#line 147 "go.y"
                                             { (yyval.declaration_t) = new Declaration((Type)DYNAMIC, *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);  }
#line 1694 "go_parser.cpp"
    break;

  case 17:
#line 148 "go.y"
                                           { (yyval.declaration_t) = new Declaration((Type)(yyvsp[-2].int_t), *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);  }
#line 1700 "go_parser.cpp"
    break;

  case 18:
#line 149 "go.y"
                                               { (yyval.declaration_t) = new Declaration((Type)(yyvsp[-3].int_t), *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);}
#line 1706 "go_parser.cpp"
    break;

  case 19:
#line 152 "go.y"
                                                               { (yyval.init_declarator_list_t) = (yyvsp[-2].init_declarator_list_t); (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1712 "go_parser.cpp"
    break;

  case 20:
#line 153 "go.y"
                                                       { (yyval.init_declarator_list_t) = (yyvsp[-1].init_declarator_list_t); (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1718 "go_parser.cpp"
    break;

  case 21:
#line 154 "go.y"
                                  { (yyval.init_declarator_list_t) = new InitDeclaratorList; (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1724 "go_parser.cpp"
    break;

  case 22:
#line 157 "go.y"
                            {(yyval.init_declarator_t) = new InitDeclarator((yyvsp[0].declarator_t), NULL, yylineno);}
#line 1730 "go_parser.cpp"
    break;

  case 23:
#line 158 "go.y"
                                             { (yyval.init_declarator_t) = new InitDeclarator((yyvsp[-2].declarator_t), (yyvsp[0].initializer_t), yylineno); }
#line 1736 "go_parser.cpp"
    break;

  case 24:
#line 161 "go.y"
                  {(yyval.declarator_t) = new Declarator((yyvsp[0].string_t), NULL, false, yylineno);}
#line 1742 "go_parser.cpp"
    break;

  case 25:
#line 162 "go.y"
                          {}
#line 1748 "go_parser.cpp"
    break;

  case 26:
#line 163 "go.y"
                                                { (yyval.declarator_t) = new Declarator((yyvsp[-3].string_t), (yyvsp[-1].expr_t), true, yylineno);}
#line 1754 "go_parser.cpp"
    break;

  case 27:
#line 164 "go.y"
                          {(yyval.declarator_t) = new Declarator((yyvsp[-2].string_t), NULL, true, yylineno);}
#line 1760 "go_parser.cpp"
    break;

  case 28:
#line 167 "go.y"
                                                                     {(yyval.parameter_list_t) = (yyvsp[-2].parameter_list_t); (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t));}
#line 1766 "go_parser.cpp"
    break;

  case 29:
#line 168 "go.y"
                                           { (yyval.parameter_list_t) = new ParameterList; (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t)); }
#line 1772 "go_parser.cpp"
    break;

  case 30:
#line 171 "go.y"
                                       { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-1].int_t), (yyvsp[0].declarator_t), false, yylineno); }
#line 1778 "go_parser.cpp"
    break;

  case 31:
#line 172 "go.y"
                            { (yyval.parameter_t) = new Parameter((Type)(yyvsp[0].int_t), NULL, false, yylineno); }
#line 1784 "go_parser.cpp"
    break;

  case 32:
#line 173 "go.y"
                                     { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-2].int_t), NULL, true, yylineno); }
#line 1790 "go_parser.cpp"
    break;

  case 33:
#line 176 "go.y"
                                   {
    InitializerElementList * list = new InitializerElementList;
    list->push_back((yyvsp[0].expr_t));
    (yyval.initializer_t) = new Initializer(*list, yylineno);
}
#line 1800 "go_parser.cpp"
    break;

  case 34:
#line 181 "go.y"
                                     { (yyval.initializer_t) = new Initializer(*(yyvsp[-1].initializer_list_t), yylineno); delete (yyvsp[-1].initializer_list_t);  }
#line 1806 "go_parser.cpp"
    break;

  case 35:
#line 184 "go.y"
                                                             { (yyval.initializer_list_t) = (yyvsp[-2].initializer_list_t); (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t)); }
#line 1812 "go_parser.cpp"
    break;

  case 36:
#line 185 "go.y"
                                        {(yyval.initializer_list_t) = new InitializerElementList; (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t));}
#line 1818 "go_parser.cpp"
    break;

  case 37:
#line 188 "go.y"
                           {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1824 "go_parser.cpp"
    break;

  case 38:
#line 189 "go.y"
                               {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1830 "go_parser.cpp"
    break;

  case 39:
#line 190 "go.y"
                       {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1836 "go_parser.cpp"
    break;

  case 40:
#line 191 "go.y"
                          {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1842 "go_parser.cpp"
    break;

  case 41:
#line 192 "go.y"
                         {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1848 "go_parser.cpp"
    break;

  case 42:
#line 193 "go.y"
                        { (yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1854 "go_parser.cpp"
    break;

  case 43:
#line 194 "go.y"
                          { (yyval.statement_t) = (yyvsp[0].statement_t); }
#line 1860 "go_parser.cpp"
    break;

  case 44:
#line 197 "go.y"
                                         { (yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1866 "go_parser.cpp"
    break;

  case 45:
#line 198 "go.y"
                          { (yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1872 "go_parser.cpp"
    break;

  case 46:
#line 201 "go.y"
                                         {(yyval.statement_t) = new IfStatement((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1878 "go_parser.cpp"
    break;

  case 47:
#line 202 "go.y"
                                                        {(yyval.statement_t) = new IfStatement((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1884 "go_parser.cpp"
    break;

  case 48:
#line 203 "go.y"
                                                                         {(yyval.statement_t) = new ElseStatement((yyvsp[-3].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t), yylineno);}
#line 1890 "go_parser.cpp"
    break;

  case 49:
#line 204 "go.y"
                                                           {(yyval.statement_t) = new ElseStatement((yyvsp[-3].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t), yylineno);}
#line 1896 "go_parser.cpp"
    break;

  case 50:
#line 207 "go.y"
                                           {(yyval.statement_t) = new ForStatement((yyvsp[-1].expr_t),(yyvsp[0].statement_t),yylineno);}
#line 1902 "go_parser.cpp"
    break;

  case 51:
#line 208 "go.y"
                                                                          {(yyval.statement_t) = new ForStatementExtended((yyvsp[-5].declaration_t),(yyvsp[-3].expr_t),(yyvsp[-1].expr_t),(yyvsp[0].statement_t),yylineno);}
#line 1908 "go_parser.cpp"
    break;

  case 52:
#line 209 "go.y"
                                { {(yyval.statement_t) = new ForStatement(NULL,(yyvsp[0].statement_t),yylineno);} }
#line 1914 "go_parser.cpp"
    break;

  case 53:
#line 212 "go.y"
                                     {(yyval.statement_t) = new ExprStatement((yyvsp[-1].expr_t), yylineno);}
#line 1920 "go_parser.cpp"
    break;

  case 54:
#line 215 "go.y"
                                                       { (yyval.statement_t) = new WhileStatement((yyvsp[-2].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1926 "go_parser.cpp"
    break;

  case 55:
#line 218 "go.y"
                                         {(yyval.statement_t) = new ReturnStatement((yyvsp[-1].expr_t), yylineno);}
#line 1932 "go_parser.cpp"
    break;

  case 56:
#line 219 "go.y"
                             { (yyval.statement_t) = new BreakStatement(yylineno);}
#line 1938 "go_parser.cpp"
    break;

  case 57:
#line 220 "go.y"
                                { (yyval.statement_t) = new ContinueStatement(yylineno);}
#line 1944 "go_parser.cpp"
    break;

  case 58:
#line 221 "go.y"
                              { (yyval.statement_t) = new ReturnStatement(NULL, yylineno);}
#line 1950 "go_parser.cpp"
    break;

  case 59:
#line 224 "go.y"
                                        { 
                    DeclarationList * list = new DeclarationList();
                    (yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *list, yylineno);
                    delete list;
               }
#line 1960 "go_parser.cpp"
    break;

  case 60:
#line 229 "go.y"
                                                          {(yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *(yyvsp[-2].declaration_list_t), yylineno); delete (yyvsp[-2].declaration_list_t); delete (yyvsp[-1].statement_list_t); }
#line 1966 "go_parser.cpp"
    break;

  case 61:
#line 230 "go.y"
                                            { 
                   StatementList * stmts = new StatementList();
                   (yyval.statement_t) = new BlockStatement(*stmts, *(yyvsp[-1].declaration_list_t), yylineno); delete (yyvsp[-1].declaration_list_t); delete stmts;}
#line 1974 "go_parser.cpp"
    break;

  case 62:
#line 233 "go.y"
                         {
                   StatementList * stmts = new StatementList();
                   DeclarationList * decls = new DeclarationList();
                   (yyval.statement_t) = new BlockStatement(*stmts, *decls, yylineno);
                   delete stmts;
                   delete decls;

               }
#line 1987 "go_parser.cpp"
    break;

  case 63:
#line 243 "go.y"
                                                              {(yyval.statement_t) = new PrintStatement((yyvsp[-2].string_t),NULL,yylineno);}
#line 1993 "go_parser.cpp"
    break;

  case 64:
#line 244 "go.y"
                                                                            {(yyval.statement_t) = new PrintStatement((yyvsp[-4].string_t),(yyvsp[-2].expr_t),yylineno);}
#line 1999 "go_parser.cpp"
    break;

  case 65:
#line 245 "go.y"
                                                            {(yyval.statement_t) = new PrintStatement(NULL,(yyvsp[-2].expr_t),yylineno);}
#line 2005 "go_parser.cpp"
    break;

  case 66:
#line 248 "go.y"
                                           {
            strcat(const_cast<char *>(yyvsp[-2].string_t),(yyvsp[0].string_t));
            (yyval.string_t) = (yyvsp[-2].string_t);
            }
#line 2014 "go_parser.cpp"
    break;

  case 67:
#line 252 "go.y"
                           {(yyval.string_t)=(yyvsp[0].string_t);}
#line 2020 "go_parser.cpp"
    break;

  case 68:
#line 253 "go.y"
                   { (yyval.string_t) = (yyvsp[0].string_t);}
#line 2026 "go_parser.cpp"
    break;

  case 69:
#line 255 "go.y"
              {(yyval.int_t) = VOID;}
#line 2032 "go_parser.cpp"
    break;

  case 70:
#line 256 "go.y"
                 {(yyval.int_t) = INT;}
#line 2038 "go_parser.cpp"
    break;

  case 71:
#line 257 "go.y"
                   {(yyval.int_t) = FLOAT;}
#line 2044 "go_parser.cpp"
    break;

  case 72:
#line 258 "go.y"
                  {(yyval.int_t) = BOOL;}
#line 2050 "go_parser.cpp"
    break;

  case 73:
#line 259 "go.y"
                { (yyval.int_t) = IMPORT;}
#line 2056 "go_parser.cpp"
    break;

  case 74:
#line 260 "go.y"
                 { (yyval.int_t) = PACKAGE;}
#line 2062 "go_parser.cpp"
    break;

  case 75:
#line 263 "go.y"
                                       {(yyval.expr_t) = (yyvsp[-1].expr_t);}
#line 2068 "go_parser.cpp"
    break;

  case 76:
#line 264 "go.y"
            {(yyval.expr_t) = new IdExpr((yyvsp[0].string_t), yylineno);}
#line 2074 "go_parser.cpp"
    break;

  case 77:
#line 265 "go.y"
               {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2080 "go_parser.cpp"
    break;

  case 80:
#line 272 "go.y"
                                       {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2086 "go_parser.cpp"
    break;

  case 81:
#line 273 "go.y"
                                                            { (yyval.expr_t) = new ArrayExpr((IdExpr*)(yyvsp[-3].expr_t), (yyvsp[-1].expr_t), yylineno); }
#line 2092 "go_parser.cpp"
    break;

  case 82:
#line 274 "go.y"
                                                 { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-2].expr_t), *(new ArgumentList), yylineno); }
#line 2098 "go_parser.cpp"
    break;

  case 83:
#line 275 "go.y"
                                                                          { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-3].expr_t), *(yyvsp[-1].argument_list_t), yylineno); }
#line 2104 "go_parser.cpp"
    break;

  case 84:
#line 276 "go.y"
                                                      { (yyval.expr_t) = new PostIncrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 2110 "go_parser.cpp"
    break;

  case 85:
#line 277 "go.y"
                                                        { (yyval.expr_t) = new PostDecrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 2116 "go_parser.cpp"
    break;

  case 86:
#line 281 "go.y"
                                                                             {(yyval.argument_list_t) = (yyvsp[-2].argument_list_t);  (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 2122 "go_parser.cpp"
    break;

  case 87:
#line 282 "go.y"
                                                { (yyval.argument_list_t) = new ArgumentList; (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 2128 "go_parser.cpp"
    break;

  case 88:
#line 285 "go.y"
                                                {(yyval.expr_t) = new UnaryExpr(INCREMENT, (yyvsp[0].expr_t), yylineno);}
#line 2134 "go_parser.cpp"
    break;

  case 89:
#line 286 "go.y"
                                                  {(yyval.expr_t) = new UnaryExpr(DECREMENT, (yyvsp[0].expr_t), yylineno);}
#line 2140 "go_parser.cpp"
    break;

  case 90:
#line 287 "go.y"
                                           {(yyval.expr_t) = new UnaryExpr(NOT, (yyvsp[0].expr_t), yylineno);}
#line 2146 "go_parser.cpp"
    break;

  case 91:
#line 288 "go.y"
                                     { (yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2152 "go_parser.cpp"
    break;

  case 92:
#line 291 "go.y"
                                                                          { (yyval.expr_t) = new MulExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2158 "go_parser.cpp"
    break;

  case 93:
#line 292 "go.y"
                                                       { (yyval.expr_t) = new DivExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2164 "go_parser.cpp"
    break;

  case 94:
#line 293 "go.y"
                         {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2170 "go_parser.cpp"
    break;

  case 95:
#line 296 "go.y"
                                                                       { (yyval.expr_t) = new AddExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2176 "go_parser.cpp"
    break;

  case 96:
#line 297 "go.y"
                                                                        { (yyval.expr_t) = new SubExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2182 "go_parser.cpp"
    break;

  case 97:
#line 298 "go.y"
                                                {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2188 "go_parser.cpp"
    break;

  case 98:
#line 301 "go.y"
                                                                     { (yyval.expr_t) = new GtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2194 "go_parser.cpp"
    break;

  case 99:
#line 302 "go.y"
                                                                     { (yyval.expr_t) = new LtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2200 "go_parser.cpp"
    break;

  case 100:
#line 303 "go.y"
                                                                                     { (yyval.expr_t) = new GteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2206 "go_parser.cpp"
    break;

  case 101:
#line 304 "go.y"
                                                                                  { (yyval.expr_t) = new LteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2212 "go_parser.cpp"
    break;

  case 102:
#line 305 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2218 "go_parser.cpp"
    break;

  case 103:
#line 308 "go.y"
                                                                         { (yyval.expr_t) = new EqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2224 "go_parser.cpp"
    break;

  case 104:
#line 309 "go.y"
                                                                            { (yyval.expr_t) = new NeqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2230 "go_parser.cpp"
    break;

  case 105:
#line 310 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2236 "go_parser.cpp"
    break;

  case 106:
#line 313 "go.y"
                                                                          { (yyval.expr_t) = new LogicalOrExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2242 "go_parser.cpp"
    break;

  case 107:
#line 315 "go.y"
                                             {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2248 "go_parser.cpp"
    break;

  case 108:
#line 318 "go.y"
                                                                          { (yyval.expr_t) = new LogicalAndExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2254 "go_parser.cpp"
    break;

  case 109:
#line 319 "go.y"
                                            {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2260 "go_parser.cpp"
    break;

  case 110:
#line 322 "go.y"
                             { (yyval.int_t) = EQUAL; }
#line 2266 "go_parser.cpp"
    break;

  case 111:
#line 323 "go.y"
                          { (yyval.int_t) = EQUAL; }
#line 2272 "go_parser.cpp"
    break;

  case 112:
#line 324 "go.y"
                                   {(yyval.int_t) = PLUSEQUAL; }
#line 2278 "go_parser.cpp"
    break;

  case 113:
#line 325 "go.y"
                                    { (yyval.int_t) = MINUSEQUAL; }
#line 2284 "go_parser.cpp"
    break;

  case 114:
#line 328 "go.y"
                                  {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2290 "go_parser.cpp"
    break;

  case 115:
#line 331 "go.y"
                     { (yyval.expr_t) = new IntExpr((yyvsp[0].int_t) , yylineno);}
#line 2296 "go_parser.cpp"
    break;

  case 116:
#line 332 "go.y"
                       { (yyval.expr_t) = new FloatExpr((yyvsp[0].float_t) , yylineno);}
#line 2302 "go_parser.cpp"
    break;

  case 117:
#line 333 "go.y"
                        { (yyval.expr_t) = new StringExpr((yyvsp[0].string_t), yylineno); }
#line 2308 "go_parser.cpp"
    break;


#line 2312 "go_parser.cpp"

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
#line 335 "go.y"
