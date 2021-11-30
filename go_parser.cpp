/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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

#line 88 "go_parser.cpp"

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

#include "tokens.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_LIT_STRING = 3,              /* TK_LIT_STRING  */
  YYSYMBOL_TK_ID = 4,                      /* TK_ID  */
  YYSYMBOL_TK_LIT_INT = 5,                 /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 6,               /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_BOOL_TYPE = 7,               /* TK_BOOL_TYPE  */
  YYSYMBOL_TK_TRUE = 8,                    /* TK_TRUE  */
  YYSYMBOL_TK_FALSE = 9,                   /* TK_FALSE  */
  YYSYMBOL_TK_IF = 10,                     /* TK_IF  */
  YYSYMBOL_TK_ELSE = 11,                   /* TK_ELSE  */
  YYSYMBOL_TK_WHILE = 12,                  /* TK_WHILE  */
  YYSYMBOL_TK_RETURN = 13,                 /* TK_RETURN  */
  YYSYMBOL_TK_FOR = 14,                    /* TK_FOR  */
  YYSYMBOL_TK_CONTINUE = 15,               /* TK_CONTINUE  */
  YYSYMBOL_TK_BREAK = 16,                  /* TK_BREAK  */
  YYSYMBOL_TK_VOID = 17,                   /* TK_VOID  */
  YYSYMBOL_TK_INT_TYPE = 18,               /* TK_INT_TYPE  */
  YYSYMBOL_TK_FLOAT_TYPE = 19,             /* TK_FLOAT_TYPE  */
  YYSYMBOL_TK_VAR = 20,                    /* TK_VAR  */
  YYSYMBOL_TK_PRINTF = 21,                 /* TK_PRINTF  */
  YYSYMBOL_TK_PLUS_EQUAL = 22,             /* TK_PLUS_EQUAL  */
  YYSYMBOL_TK_MINUS_EQUAL = 23,            /* TK_MINUS_EQUAL  */
  YYSYMBOL_TK_PLUS_PLUS = 24,              /* TK_PLUS_PLUS  */
  YYSYMBOL_TK_MINUS_MINUS = 25,            /* TK_MINUS_MINUS  */
  YYSYMBOL_TK_NOT = 26,                    /* TK_NOT  */
  YYSYMBOL_TK_OR = 27,                     /* TK_OR  */
  YYSYMBOL_TK_AND = 28,                    /* TK_AND  */
  YYSYMBOL_TK_EQUAL = 29,                  /* TK_EQUAL  */
  YYSYMBOL_TK_NOT_EQUAL = 30,              /* TK_NOT_EQUAL  */
  YYSYMBOL_TK_GREATER_OR_EQUAL = 31,       /* TK_GREATER_OR_EQUAL  */
  YYSYMBOL_TK_LESS_OR_EQUAL = 32,          /* TK_LESS_OR_EQUAL  */
  YYSYMBOL_TK_PACKAGE = 33,                /* TK_PACKAGE  */
  YYSYMBOL_TK_IMPORT = 34,                 /* TK_IMPORT  */
  YYSYMBOL_TK_FUNC = 35,                   /* TK_FUNC  */
  YYSYMBOL_TK_PRINTLN = 36,                /* TK_PRINTLN  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* '.'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_51_ = 51,                       /* '>'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_start = 54,                     /* start  */
  YYSYMBOL_input = 55,                     /* input  */
  YYSYMBOL_external_declaration = 56,      /* external_declaration  */
  YYSYMBOL_package_list = 57,              /* package_list  */
  YYSYMBOL_package = 58,                   /* package  */
  YYSYMBOL_import_list = 59,               /* import_list  */
  YYSYMBOL_import = 60,                    /* import  */
  YYSYMBOL_method_definition = 61,         /* method_definition  */
  YYSYMBOL_declaration_list = 62,          /* declaration_list  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_init_declarator_list = 64,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 65,           /* init_declarator  */
  YYSYMBOL_declarator = 66,                /* declarator  */
  YYSYMBOL_parameters_type_list = 67,      /* parameters_type_list  */
  YYSYMBOL_parameter_declaration = 68,     /* parameter_declaration  */
  YYSYMBOL_initializer = 69,               /* initializer  */
  YYSYMBOL_initializer_list = 70,          /* initializer_list  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_statement_list = 72,            /* statement_list  */
  YYSYMBOL_if_statement = 73,              /* if_statement  */
  YYSYMBOL_for_statement = 74,             /* for_statement  */
  YYSYMBOL_expression_statement = 75,      /* expression_statement  */
  YYSYMBOL_while_statement = 76,           /* while_statement  */
  YYSYMBOL_jump_statement = 77,            /* jump_statement  */
  YYSYMBOL_block_statement = 78,           /* block_statement  */
  YYSYMBOL_print_statement = 79,           /* print_statement  */
  YYSYMBOL_concat_list = 80,               /* concat_list  */
  YYSYMBOL_type = 81,                      /* type  */
  YYSYMBOL_primary_expression = 82,        /* primary_expression  */
  YYSYMBOL_assignment_expression = 83,     /* assignment_expression  */
  YYSYMBOL_postfix_expression = 84,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 85,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 86,          /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 87, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 88,       /* additive_expression  */
  YYSYMBOL_relational_expression = 89,     /* relational_expression  */
  YYSYMBOL_equality_expression = 90,       /* equality_expression  */
  YYSYMBOL_logical_or_expression = 91,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 92,    /* logical_and_expression  */
  YYSYMBOL_assignment_operator = 93,       /* assignment_operator  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_constant = 95                   /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,    38,    48,    47,    40,    50,    46,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
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
       0,    79,    79,    87,    88,    91,    92,    93,    97,   100,
     101,   104,   107,   110,   111,   114,   118,   122,   127,   132,
     135,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   160,   163,   164,   167,   168,   169,   172,   177,   180,
     181,   184,   185,   186,   187,   188,   189,   190,   193,   194,
     197,   198,   199,   200,   203,   204,   205,   208,   211,   214,
     217,   222,   223,   224,   234,   235,   238,   242,   243,   245,
     246,   247,   248,   251,   252,   253,   254,   257,   258,   261,
     262,   263,   264,   265,   266,   270,   271,   274,   275,   276,
     277,   280,   281,   282,   285,   286,   287,   290,   291,   292,
     293,   294,   297,   298,   299,   302,   304,   307,   308,   311,
     312,   313,   316,   319,   320
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_LIT_STRING",
  "TK_ID", "TK_LIT_INT", "TK_LIT_FLOAT", "TK_BOOL_TYPE", "TK_TRUE",
  "TK_FALSE", "TK_IF", "TK_ELSE", "TK_WHILE", "TK_RETURN", "TK_FOR",
  "TK_CONTINUE", "TK_BREAK", "TK_VOID", "TK_INT_TYPE", "TK_FLOAT_TYPE",
  "TK_VAR", "TK_PRINTF", "TK_PLUS_EQUAL", "TK_MINUS_EQUAL", "TK_PLUS_PLUS",
  "TK_MINUS_MINUS", "TK_NOT", "TK_OR", "TK_AND", "TK_EQUAL",
  "TK_NOT_EQUAL", "TK_GREATER_OR_EQUAL", "TK_LESS_OR_EQUAL", "TK_PACKAGE",
  "TK_IMPORT", "TK_FUNC", "TK_PRINTLN", "'('", "')'", "';'", "','", "'='",
  "'['", "']'", "'{'", "'}'", "'.'", "'+'", "'*'", "'/'", "'-'", "'>'",
  "'<'", "$accept", "start", "input", "external_declaration",
  "package_list", "package", "import_list", "import", "method_definition",
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    40,    41,    59,
      44,    61,    91,    93,   123,   125,    46,    43,    42,    47,
      45,    62,    60
};
#endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,     7,    13,    17,    38,    -4,   -86,    57,   -86,   -86,
     -86,     2,   234,   -86,    31,   -86,    10,   -86,   -86,    41,
     -86,   -86,   275,   -86,   -86,   -86,   -86,   -86,     7,    45,
     265,     8,    96,   -86,   -86,   -86,   -86,   316,   316,   316,
     316,   -86,   -86,    70,    50,    -9,    46,    32,     3,    89,
      93,    94,   -86,   -86,   -86,   316,   -86,   -86,     5,    18,
     -86,    -3,   -86,     4,   -86,   -86,   -86,   -86,   100,   -86,
     -86,   -86,   279,   316,   -86,   -86,   -86,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     -36,   -86,    93,   111,   -86,     6,     5,    86,    91,   -86,
     -86,   -86,   -86,   -86,   -86,    62,   102,   -86,   -86,   -86,
      46,    46,    32,    32,    32,    32,     3,     3,    94,    89,
     316,   -86,   108,   316,   121,   316,   251,   -86,   137,   -86,
     -86,   163,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   120,
     -86,   -86,   -86,    37,   -86,   -86,   -86,   316,   -86,    93,
     103,   206,   316,   126,   -86,   223,   -86,   -86,   180,   -86,
     -86,   -86,   -86,   -86,   -86,   123,   316,   153,   132,   -86,
     316,   -86,   -86,   125,   251,   251,   251,   133,   -86,   -86,
     -10,   160,   -86,   -86,   316,   139,   316,   176,   251,   251,
     -86,   142,   -86,   -86,   -86,   152,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     8,    10,     5,
       6,    29,     0,    26,    27,    11,     0,     1,     3,     0,
       9,     7,     0,    72,    69,    70,    71,    24,     0,     0,
       0,     0,     0,    76,    74,   113,   114,     0,     0,     0,
       0,    31,    79,     0,    90,    93,    96,   101,   104,   108,
      78,   106,    75,    25,    23,     0,    28,    37,     0,     0,
      33,    35,    14,     0,    87,    88,    89,   112,     0,    30,
      83,    84,     0,     0,   110,   111,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    40,     0,    18,     0,     0,     0,     0,    34,
      13,    12,    73,    81,    86,     0,     0,    77,    91,    92,
      94,    95,    99,   100,    97,    98,   102,   103,   105,   107,
       0,    38,    74,     0,     0,     0,     0,    63,     0,    22,
      49,     0,    43,    46,    42,    41,    45,    44,    47,     0,
      20,    17,    16,     0,    32,    36,    82,     0,    80,    39,
       0,     0,     0,     0,    56,     0,    62,    21,     0,    60,
      48,    57,    19,    15,    85,     0,     0,    50,     0,    59,
      57,    54,    61,     0,     0,     0,     0,     0,    67,    68,
       0,    51,    53,    58,     0,     0,     0,     0,     0,     0,
      64,     0,    66,    52,    55,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   190,   -86,   189,   -86,   -86,   -86,   -86,
     -85,   -86,   169,   138,   -86,   101,   -86,   -86,   -78,    73,
     -86,   -86,   -86,   -86,   -86,   -55,   -86,   -86,    -7,   -86,
     -20,   -86,   -86,   -19,    52,    24,    66,   113,   -49,   115,
     -86,   -40,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    21,    63,     9,   128,
      10,    12,    13,    14,    59,    60,    56,    90,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   180,    61,    42,
      67,    44,   105,    45,    46,    47,    48,    49,    50,    51,
      77,   139,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    11,    43,    94,   120,    29,    92,   100,   129,   121,
      57,    11,    23,    74,    75,    23,     1,    15,    64,    65,
      66,    16,    24,    25,    26,    24,    25,    26,   185,     2,
     186,     3,    76,   106,    82,    83,    91,   187,    17,    98,
     141,   142,   101,   157,    22,   140,    58,    31,   154,    93,
      93,    95,   104,   160,    84,    85,    96,   107,    97,   108,
     109,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,   149,    30,   167,    70,    71,   162,   171,    32,    80,
     160,    93,    81,   151,    54,   153,   155,    72,   163,   143,
       2,    19,    73,    23,    78,    79,   181,   182,   183,    62,
     146,    91,   147,    24,    25,    26,   112,   113,   114,   115,
     193,   194,   168,    69,    33,   122,    35,    36,    86,    87,
      88,   123,    89,   124,   125,   126,   174,   164,   178,   179,
     177,     1,   110,   111,   145,    37,    38,    39,   102,   165,
      33,   122,    35,    36,   189,   148,   191,   123,    40,   124,
     125,   126,   116,   117,   150,    93,   127,     1,   152,   161,
     173,    37,    38,    39,   175,   169,    33,   122,    35,    36,
     176,   188,   184,   123,    40,   124,   125,   126,   190,   192,
     195,    93,   156,    33,   122,    35,    36,    37,    38,    39,
     123,   196,   124,   125,   126,    18,    20,    53,   144,    99,
      40,   158,   119,   118,    37,    38,    39,    93,   159,    33,
     122,    35,    36,     0,     0,     0,   123,    40,   124,   125,
     126,     0,     0,     0,    93,   172,    33,   122,    35,    36,
      37,    38,    39,   123,     0,   124,   125,   126,     0,     0,
       0,    23,     0,    40,     0,   166,     0,    37,    38,    39,
      93,    24,    25,    26,    33,   122,    35,    36,     0,     0,
      40,   123,   170,   124,   125,   126,     0,    93,    33,    34,
      35,    36,     0,    27,    28,    37,    38,    39,    33,    34,
      35,    36,    33,    34,    35,    36,     0,     0,    40,    37,
      38,    39,     0,     0,     0,    93,     0,     0,     0,    37,
      38,    39,    40,    37,    38,    39,     0,     0,     0,    55,
       0,     0,    40,     0,     0,     0,    40,   103,    41,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      40,     4,    22,    58,    40,    12,    55,     3,    93,    45,
      30,     4,     7,    22,    23,     7,    20,     4,    37,    38,
      39,     4,    17,    18,    19,    17,    18,    19,    38,    33,
      40,    35,    41,    73,    31,    32,    55,    47,     0,    42,
      95,    96,    38,   128,    42,    39,    38,    37,   126,    44,
      44,    58,    72,   131,    51,    52,    38,    77,    40,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   120,    41,   151,    24,    25,    39,   155,    37,    47,
     158,    44,    50,   123,    39,   125,   126,    37,   143,    96,
      33,    34,    42,     7,    48,    49,   174,   175,   176,     3,
      38,   120,    40,    17,    18,    19,    82,    83,    84,    85,
     188,   189,   152,    43,     3,     4,     5,     6,    29,    30,
      27,    10,    28,    12,    13,    14,   166,   147,     3,     4,
     170,    20,    80,    81,    43,    24,    25,    26,    38,    36,
       3,     4,     5,     6,   184,    43,   186,    10,    37,    12,
      13,    14,    86,    87,    46,    44,    45,    20,    37,    39,
      37,    24,    25,    26,    11,    39,     3,     4,     5,     6,
      38,    11,    39,    10,    37,    12,    13,    14,    39,     3,
      38,    44,    45,     3,     4,     5,     6,    24,    25,    26,
      10,    39,    12,    13,    14,     5,     7,    28,    97,    61,
      37,   128,    89,    88,    24,    25,    26,    44,    45,     3,
       4,     5,     6,    -1,    -1,    -1,    10,    37,    12,    13,
      14,    -1,    -1,    -1,    44,    45,     3,     4,     5,     6,
      24,    25,    26,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,     7,    -1,    37,    -1,    39,    -1,    24,    25,    26,
      44,    17,    18,    19,     3,     4,     5,     6,    -1,    -1,
      37,    10,    39,    12,    13,    14,    -1,    44,     3,     4,
       5,     6,    -1,    39,    40,    24,    25,    26,     3,     4,
       5,     6,     3,     4,     5,     6,    -1,    -1,    37,    24,
      25,    26,    -1,    -1,    -1,    44,    -1,    -1,    -1,    24,
      25,    26,    37,    24,    25,    26,    -1,    -1,    -1,    44,
      -1,    -1,    37,    -1,    -1,    -1,    37,    38,    43,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    33,    35,    54,    55,    56,    57,    58,    61,
      63,     4,    64,    65,    66,     4,     4,     0,    56,    34,
      58,    59,    42,     7,    17,    18,    19,    39,    40,    81,
      41,    37,    37,     3,     4,     5,     6,    24,    25,    26,
      37,    43,    82,    83,    84,    86,    87,    88,    89,    90,
      91,    92,    95,    65,    39,    44,    69,    83,    38,    67,
      68,    81,     3,    60,    86,    86,    86,    83,    94,    43,
      24,    25,    37,    42,    22,    23,    41,    93,    48,    49,
      47,    50,    31,    32,    51,    52,    29,    30,    27,    28,
      70,    86,    91,    44,    78,    81,    38,    40,    42,    66,
       3,    38,    38,    38,    83,    85,    94,    83,    86,    86,
      87,    87,    88,    88,    88,    88,    89,    89,    92,    90,
      40,    45,     4,    10,    12,    13,    14,    45,    62,    63,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    94,
      39,    78,    78,    81,    68,    43,    38,    40,    43,    91,
      46,    94,    37,    94,    71,    94,    45,    63,    72,    45,
      71,    39,    39,    78,    83,    36,    39,    71,    94,    39,
      39,    71,    45,    37,    94,    11,    38,    94,     3,     4,
      80,    71,    71,    71,    39,    38,    40,    47,    11,    94,
      39,    94,     3,    71,    71,    38,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    73,    74,    74,    74,    75,    76,    77,
      78,    78,    78,    78,    79,    79,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    94,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     1,     2,
       1,     2,     4,     2,     1,     7,     6,     6,     5,     7,
       6,     2,     1,     4,     3,     3,     1,     1,     3,     1,
       4,     3,     3,     1,     2,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     5,     7,     5,     3,     7,     2,     2,     5,     3,
       3,     4,     3,     2,     7,     9,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       4,     3,     4,     2,     2,     3,     1,     2,     2,     2,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* start: input  */
#line 79 "go.y"
            {
    list<Statement *>::iterator it = (yyvsp[0].statement_list_t)->begin();
    while(it != (yyvsp[0].statement_list_t)->end()){
        //printf("semantic result: %d \n",(*it)->evaluateSemantic());
        it++;
    }
}
#line 1367 "go_parser.cpp"
    break;

  case 3: /* input: input external_declaration  */
#line 87 "go.y"
                                  {(yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1373 "go_parser.cpp"
    break;

  case 4: /* input: external_declaration  */
#line 88 "go.y"
                           {(yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t));}
#line 1379 "go_parser.cpp"
    break;

  case 5: /* external_declaration: method_definition  */
#line 91 "go.y"
                                        {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1385 "go_parser.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 92 "go.y"
                          {(yyval.statement_t) = new GlobalDeclaration((yyvsp[0].declaration_t));}
#line 1391 "go_parser.cpp"
    break;

  case 7: /* external_declaration: package_list import_list  */
#line 93 "go.y"
                                       {
                /*$$ = new PackageDeclaration($1); 
                $$ = new ImportDeclaration($2);*/
                }
#line 1400 "go_parser.cpp"
    break;

  case 8: /* external_declaration: package_list  */
#line 97 "go.y"
                           {/*$$ = new PackageDeclaration($1);*/}
#line 1406 "go_parser.cpp"
    break;

  case 9: /* package_list: package_list package  */
#line 100 "go.y"
                                   { }
#line 1412 "go_parser.cpp"
    break;

  case 10: /* package_list: package  */
#line 101 "go.y"
                      {}
#line 1418 "go_parser.cpp"
    break;

  case 11: /* package: TK_PACKAGE TK_ID  */
#line 104 "go.y"
                          {  }
#line 1424 "go_parser.cpp"
    break;

  case 12: /* import_list: TK_IMPORT '(' import ')'  */
#line 107 "go.y"
                                       {}
#line 1430 "go_parser.cpp"
    break;

  case 13: /* import: import TK_LIT_STRING  */
#line 110 "go.y"
                             { }
#line 1436 "go_parser.cpp"
    break;

  case 14: /* import: TK_LIT_STRING  */
#line 111 "go.y"
                           {}
#line 1442 "go_parser.cpp"
    break;

  case 15: /* method_definition: TK_FUNC TK_ID '(' parameters_type_list ')' type block_statement  */
#line 114 "go.y"
                                                                                   {
                    (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-5].string_t), *(yyvsp[-3].parameter_list_t), (yyvsp[0].statement_t), yylineno );
                    delete (yyvsp[-3].parameter_list_t);
                 }
#line 1451 "go_parser.cpp"
    break;

  case 16: /* method_definition: TK_FUNC TK_ID '(' parameters_type_list ')' block_statement  */
#line 118 "go.y"
                                                                              {
                    (yyval.statement_t) = new MethodDefinition((Type)NULL, (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), (yyvsp[0].statement_t), yylineno );
                    delete (yyvsp[-2].parameter_list_t);
                 }
#line 1460 "go_parser.cpp"
    break;

  case 17: /* method_definition: TK_FUNC TK_ID '(' ')' type block_statement  */
#line 122 "go.y"
                                                             {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-4].string_t), *pm, (yyvsp[0].statement_t), yylineno );
                     delete pm;
                 }
#line 1470 "go_parser.cpp"
    break;

  case 18: /* method_definition: TK_FUNC TK_ID '(' ')' block_statement  */
#line 127 "go.y"
                                                        {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)NULL, (yyvsp[-3].string_t), *pm, (yyvsp[0].statement_t), yylineno );
                     delete pm;
                 }
#line 1480 "go_parser.cpp"
    break;

  case 19: /* method_definition: TK_FUNC TK_ID '(' parameters_type_list ')' type ';'  */
#line 132 "go.y"
                                                                      { // func hola (int x, int y) int;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-5].string_t), *(yyvsp[-3].parameter_list_t), NULL, yylineno);
                 }
#line 1488 "go_parser.cpp"
    break;

  case 20: /* method_definition: TK_FUNC TK_ID '(' ')' type ';'  */
#line 135 "go.y"
                                                 {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((Type)(yyvsp[-1].int_t), (yyvsp[-4].string_t), *pm , NULL, yylineno);
                     delete pm;
                 }
#line 1498 "go_parser.cpp"
    break;

  case 21: /* declaration_list: declaration_list declaration  */
#line 142 "go.y"
                                               { (yyval.declaration_list_t) = (yyvsp[-1].declaration_list_t); (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t)); }
#line 1504 "go_parser.cpp"
    break;

  case 22: /* declaration_list: declaration  */
#line 143 "go.y"
                              {(yyval.declaration_list_t) = new DeclarationList; (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t));}
#line 1510 "go_parser.cpp"
    break;

  case 23: /* declaration: TK_VAR init_declarator_list type ';'  */
#line 146 "go.y"
                                                   { (yyval.declaration_t) = new Declaration((Type)(yyvsp[-1].int_t), *(yyvsp[-2].init_declarator_list_t), yylineno); delete (yyvsp[-2].init_declarator_list_t);  }
#line 1516 "go_parser.cpp"
    break;

  case 24: /* declaration: TK_VAR init_declarator_list ';'  */
#line 147 "go.y"
                                             { (yyval.declaration_t) = new Declaration((Type)NULL, *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);  }
#line 1522 "go_parser.cpp"
    break;

  case 25: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 150 "go.y"
                                                               { (yyval.init_declarator_list_t) = (yyvsp[-2].init_declarator_list_t); (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1528 "go_parser.cpp"
    break;

  case 26: /* init_declarator_list: init_declarator  */
#line 151 "go.y"
                                  { (yyval.init_declarator_list_t) = new InitDeclaratorList; (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1534 "go_parser.cpp"
    break;

  case 27: /* init_declarator: declarator  */
#line 154 "go.y"
                            {(yyval.init_declarator_t) = new InitDeclarator((yyvsp[0].declarator_t), NULL, yylineno);}
#line 1540 "go_parser.cpp"
    break;

  case 28: /* init_declarator: declarator '=' initializer  */
#line 155 "go.y"
                                             { (yyval.init_declarator_t) = new InitDeclarator((yyvsp[-2].declarator_t), (yyvsp[0].initializer_t), yylineno); }
#line 1546 "go_parser.cpp"
    break;

  case 29: /* declarator: TK_ID  */
#line 158 "go.y"
                  {(yyval.declarator_t) = new Declarator((yyvsp[0].string_t), NULL, false, yylineno);}
#line 1552 "go_parser.cpp"
    break;

  case 30: /* declarator: TK_ID '[' assignment_expression ']'  */
#line 159 "go.y"
                                                { (yyval.declarator_t) = new Declarator((yyvsp[-3].string_t), (yyvsp[-1].expr_t), true, yylineno);}
#line 1558 "go_parser.cpp"
    break;

  case 31: /* declarator: TK_ID '[' ']'  */
#line 160 "go.y"
                          {(yyval.declarator_t) = new Declarator((yyvsp[-2].string_t), NULL, true, yylineno);}
#line 1564 "go_parser.cpp"
    break;

  case 32: /* parameters_type_list: parameters_type_list ',' parameter_declaration  */
#line 163 "go.y"
                                                                     {(yyval.parameter_list_t) = (yyvsp[-2].parameter_list_t); (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t));}
#line 1570 "go_parser.cpp"
    break;

  case 33: /* parameters_type_list: parameter_declaration  */
#line 164 "go.y"
                                           { (yyval.parameter_list_t) = new ParameterList; (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t)); }
#line 1576 "go_parser.cpp"
    break;

  case 34: /* parameter_declaration: type declarator  */
#line 167 "go.y"
                                       { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-1].int_t), (yyvsp[0].declarator_t), false, yylineno); }
#line 1582 "go_parser.cpp"
    break;

  case 35: /* parameter_declaration: type  */
#line 168 "go.y"
                            { (yyval.parameter_t) = new Parameter((Type)(yyvsp[0].int_t), NULL, false, yylineno); }
#line 1588 "go_parser.cpp"
    break;

  case 36: /* parameter_declaration: type '[' ']'  */
#line 169 "go.y"
                                     { (yyval.parameter_t) = new Parameter((Type)(yyvsp[-2].int_t), NULL, true, yylineno); }
#line 1594 "go_parser.cpp"
    break;

  case 37: /* initializer: assignment_expression  */
#line 172 "go.y"
                                   {
    InitializerElementList * list = new InitializerElementList;
    list->push_back((yyvsp[0].expr_t));
    (yyval.initializer_t) = new Initializer(*list, yylineno);
}
#line 1604 "go_parser.cpp"
    break;

  case 38: /* initializer: '{' initializer_list '}'  */
#line 177 "go.y"
                                     { (yyval.initializer_t) = new Initializer(*(yyvsp[-1].initializer_list_t), yylineno); delete (yyvsp[-1].initializer_list_t);  }
#line 1610 "go_parser.cpp"
    break;

  case 39: /* initializer_list: initializer_list ',' logical_or_expression  */
#line 180 "go.y"
                                                             { (yyval.initializer_list_t) = (yyvsp[-2].initializer_list_t); (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t)); }
#line 1616 "go_parser.cpp"
    break;

  case 40: /* initializer_list: logical_or_expression  */
#line 181 "go.y"
                                        {(yyval.initializer_list_t) = new InitializerElementList; (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t));}
#line 1622 "go_parser.cpp"
    break;

  case 41: /* statement: while_statement  */
#line 184 "go.y"
                           {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1628 "go_parser.cpp"
    break;

  case 42: /* statement: expression_statement  */
#line 185 "go.y"
                               {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1634 "go_parser.cpp"
    break;

  case 43: /* statement: if_statement  */
#line 186 "go.y"
                       {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1640 "go_parser.cpp"
    break;

  case 44: /* statement: block_statement  */
#line 187 "go.y"
                          {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1646 "go_parser.cpp"
    break;

  case 45: /* statement: jump_statement  */
#line 188 "go.y"
                         {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1652 "go_parser.cpp"
    break;

  case 46: /* statement: for_statement  */
#line 189 "go.y"
                        { (yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1658 "go_parser.cpp"
    break;

  case 47: /* statement: print_statement  */
#line 190 "go.y"
                          { (yyval.statement_t) = (yyvsp[0].statement_t); }
#line 1664 "go_parser.cpp"
    break;

  case 48: /* statement_list: statement_list statement  */
#line 193 "go.y"
                                         { (yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1670 "go_parser.cpp"
    break;

  case 49: /* statement_list: statement  */
#line 194 "go.y"
                          { (yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1676 "go_parser.cpp"
    break;

  case 50: /* if_statement: TK_IF expression statement  */
#line 197 "go.y"
                                         {(yyval.statement_t) = new IfStatement((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1682 "go_parser.cpp"
    break;

  case 51: /* if_statement: TK_IF expression ';' expression statement  */
#line 198 "go.y"
                                                        {(yyval.statement_t) = new IfStatement((yyvsp[-1].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1688 "go_parser.cpp"
    break;

  case 52: /* if_statement: TK_IF expression ';' expression statement TK_ELSE statement  */
#line 199 "go.y"
                                                                         {(yyval.statement_t) = new ElseStatement((yyvsp[-3].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t), yylineno);}
#line 1694 "go_parser.cpp"
    break;

  case 53: /* if_statement: TK_IF expression statement TK_ELSE statement  */
#line 200 "go.y"
                                                           {(yyval.statement_t) = new ElseStatement((yyvsp[-3].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t), yylineno);}
#line 1700 "go_parser.cpp"
    break;

  case 54: /* for_statement: TK_FOR expression statement  */
#line 203 "go.y"
                                           {(yyval.statement_t) = new ForStatement((yyvsp[-1].expr_t),(yyvsp[0].statement_t),yylineno);}
#line 1706 "go_parser.cpp"
    break;

  case 55: /* for_statement: TK_FOR expression ';' expression ';' expression statement  */
#line 204 "go.y"
                                                                         {(yyval.statement_t) = new ForStatementExtended((yyvsp[-5].expr_t),(yyvsp[-3].expr_t),(yyvsp[-1].expr_t),(yyvsp[0].statement_t),yylineno);}
#line 1712 "go_parser.cpp"
    break;

  case 56: /* for_statement: TK_FOR statement  */
#line 205 "go.y"
                                { {(yyval.statement_t) = new ForStatement(NULL,(yyvsp[0].statement_t),yylineno);} }
#line 1718 "go_parser.cpp"
    break;

  case 57: /* expression_statement: expression ';'  */
#line 208 "go.y"
                                     {(yyval.statement_t) = new ExprStatement((yyvsp[-1].expr_t), yylineno);}
#line 1724 "go_parser.cpp"
    break;

  case 58: /* while_statement: TK_WHILE '(' expression ')' statement  */
#line 211 "go.y"
                                                       { (yyval.statement_t) = new WhileStatement((yyvsp[-2].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1730 "go_parser.cpp"
    break;

  case 59: /* jump_statement: TK_RETURN expression ';'  */
#line 214 "go.y"
                                         {(yyval.statement_t) = new ReturnStatement((yyvsp[-1].expr_t), yylineno);}
#line 1736 "go_parser.cpp"
    break;

  case 60: /* block_statement: '{' statement_list '}'  */
#line 217 "go.y"
                                        { 
                    DeclarationList * list = new DeclarationList();
                    (yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *list, yylineno);
                    delete list;
               }
#line 1746 "go_parser.cpp"
    break;

  case 61: /* block_statement: '{' declaration_list statement_list '}'  */
#line 222 "go.y"
                                                          {(yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *(yyvsp[-2].declaration_list_t), yylineno); delete (yyvsp[-2].declaration_list_t); delete (yyvsp[-1].statement_list_t); }
#line 1752 "go_parser.cpp"
    break;

  case 62: /* block_statement: '{' declaration_list '}'  */
#line 223 "go.y"
                                            {}
#line 1758 "go_parser.cpp"
    break;

  case 63: /* block_statement: '{' '}'  */
#line 224 "go.y"
                         {
                   StatementList * stmts = new StatementList();
                   DeclarationList * decls = new DeclarationList();
                   (yyval.statement_t) = new BlockStatement(*stmts, *decls, yylineno);
                   delete stmts;
                   delete decls;

               }
#line 1771 "go_parser.cpp"
    break;

  case 64: /* print_statement: TK_ID '.' TK_PRINTLN '(' concat_list ')' ';'  */
#line 234 "go.y"
                                                              {(yyval.statement_t) = new PrintStatement((yyvsp[-2].string_t),NULL,yylineno);}
#line 1777 "go_parser.cpp"
    break;

  case 65: /* print_statement: TK_ID '.' TK_PRINTLN '(' concat_list ',' expression ')' ';'  */
#line 235 "go.y"
                                                                            {(yyval.statement_t) = new PrintStatement((yyvsp[-4].string_t),(yyvsp[-2].expr_t),yylineno);}
#line 1783 "go_parser.cpp"
    break;

  case 66: /* concat_list: concat_list '+' TK_LIT_STRING  */
#line 238 "go.y"
                                           {
            strcat(const_cast<char *>(yyvsp[-2].string_t),(yyvsp[0].string_t));
            (yyval.string_t) = (yyvsp[-2].string_t);
            }
#line 1792 "go_parser.cpp"
    break;

  case 67: /* concat_list: TK_LIT_STRING  */
#line 242 "go.y"
                           {(yyval.string_t)=(yyvsp[0].string_t);}
#line 1798 "go_parser.cpp"
    break;

  case 68: /* concat_list: TK_ID  */
#line 243 "go.y"
                   { (yyval.string_t) = (yyvsp[0].string_t);}
#line 1804 "go_parser.cpp"
    break;

  case 69: /* type: TK_VOID  */
#line 245 "go.y"
              {(yyval.int_t) = VOID;}
#line 1810 "go_parser.cpp"
    break;

  case 70: /* type: TK_INT_TYPE  */
#line 246 "go.y"
                 {(yyval.int_t) = INT;}
#line 1816 "go_parser.cpp"
    break;

  case 71: /* type: TK_FLOAT_TYPE  */
#line 247 "go.y"
                   {(yyval.int_t) = FLOAT;}
#line 1822 "go_parser.cpp"
    break;

  case 72: /* type: TK_BOOL_TYPE  */
#line 248 "go.y"
                  {(yyval.int_t) = BOOL;}
#line 1828 "go_parser.cpp"
    break;

  case 73: /* primary_expression: '(' expression ')'  */
#line 251 "go.y"
                                       {(yyval.expr_t) = (yyvsp[-1].expr_t);}
#line 1834 "go_parser.cpp"
    break;

  case 74: /* primary_expression: TK_ID  */
#line 252 "go.y"
            {(yyval.expr_t) = new IdExpr((yyvsp[0].string_t), yylineno);}
#line 1840 "go_parser.cpp"
    break;

  case 75: /* primary_expression: constant  */
#line 253 "go.y"
               {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1846 "go_parser.cpp"
    break;

  case 76: /* primary_expression: TK_LIT_STRING  */
#line 254 "go.y"
                    { (yyval.expr_t) = new StringExpr((yyvsp[0].string_t), yylineno); }
#line 1852 "go_parser.cpp"
    break;

  case 79: /* postfix_expression: primary_expression  */
#line 261 "go.y"
                                       {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1858 "go_parser.cpp"
    break;

  case 80: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 262 "go.y"
                                                            { (yyval.expr_t) = new ArrayExpr((IdExpr*)(yyvsp[-3].expr_t), (yyvsp[-1].expr_t), yylineno); }
#line 1864 "go_parser.cpp"
    break;

  case 81: /* postfix_expression: postfix_expression '(' ')'  */
#line 263 "go.y"
                                                 { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-2].expr_t), *(new ArgumentList), yylineno); }
#line 1870 "go_parser.cpp"
    break;

  case 82: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 264 "go.y"
                                                                          { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-3].expr_t), *(yyvsp[-1].argument_list_t), yylineno); }
#line 1876 "go_parser.cpp"
    break;

  case 83: /* postfix_expression: postfix_expression TK_PLUS_PLUS  */
#line 265 "go.y"
                                                      { (yyval.expr_t) = new PostIncrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 1882 "go_parser.cpp"
    break;

  case 84: /* postfix_expression: postfix_expression TK_MINUS_MINUS  */
#line 266 "go.y"
                                                        { (yyval.expr_t) = new PostDecrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 1888 "go_parser.cpp"
    break;

  case 85: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 270 "go.y"
                                                                             {(yyval.argument_list_t) = (yyvsp[-2].argument_list_t);  (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 1894 "go_parser.cpp"
    break;

  case 86: /* argument_expression_list: assignment_expression  */
#line 271 "go.y"
                                                { (yyval.argument_list_t) = new ArgumentList; (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 1900 "go_parser.cpp"
    break;

  case 87: /* unary_expression: TK_PLUS_PLUS unary_expression  */
#line 274 "go.y"
                                                {(yyval.expr_t) = new UnaryExpr(INCREMENT, (yyvsp[0].expr_t), yylineno);}
#line 1906 "go_parser.cpp"
    break;

  case 88: /* unary_expression: TK_MINUS_MINUS unary_expression  */
#line 275 "go.y"
                                                  {(yyval.expr_t) = new UnaryExpr(DECREMENT, (yyvsp[0].expr_t), yylineno);}
#line 1912 "go_parser.cpp"
    break;

  case 89: /* unary_expression: TK_NOT unary_expression  */
#line 276 "go.y"
                                           {(yyval.expr_t) = new UnaryExpr(NOT, (yyvsp[0].expr_t), yylineno);}
#line 1918 "go_parser.cpp"
    break;

  case 90: /* unary_expression: postfix_expression  */
#line 277 "go.y"
                                     { (yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1924 "go_parser.cpp"
    break;

  case 91: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 280 "go.y"
                                                                          { (yyval.expr_t) = new MulExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1930 "go_parser.cpp"
    break;

  case 92: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 281 "go.y"
                                                       { (yyval.expr_t) = new DivExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1936 "go_parser.cpp"
    break;

  case 93: /* multiplicative_expression: unary_expression  */
#line 282 "go.y"
                         {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1942 "go_parser.cpp"
    break;

  case 94: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 285 "go.y"
                                                                       { (yyval.expr_t) = new AddExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1948 "go_parser.cpp"
    break;

  case 95: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 286 "go.y"
                                                                        { (yyval.expr_t) = new SubExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1954 "go_parser.cpp"
    break;

  case 96: /* additive_expression: multiplicative_expression  */
#line 287 "go.y"
                                                {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1960 "go_parser.cpp"
    break;

  case 97: /* relational_expression: relational_expression '>' additive_expression  */
#line 290 "go.y"
                                                                     { (yyval.expr_t) = new GtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1966 "go_parser.cpp"
    break;

  case 98: /* relational_expression: relational_expression '<' additive_expression  */
#line 291 "go.y"
                                                                     { (yyval.expr_t) = new LtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1972 "go_parser.cpp"
    break;

  case 99: /* relational_expression: relational_expression TK_GREATER_OR_EQUAL additive_expression  */
#line 292 "go.y"
                                                                                     { (yyval.expr_t) = new GteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1978 "go_parser.cpp"
    break;

  case 100: /* relational_expression: relational_expression TK_LESS_OR_EQUAL additive_expression  */
#line 293 "go.y"
                                                                                  { (yyval.expr_t) = new LteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1984 "go_parser.cpp"
    break;

  case 101: /* relational_expression: additive_expression  */
#line 294 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1990 "go_parser.cpp"
    break;

  case 102: /* equality_expression: equality_expression TK_EQUAL relational_expression  */
#line 297 "go.y"
                                                                         { (yyval.expr_t) = new EqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1996 "go_parser.cpp"
    break;

  case 103: /* equality_expression: equality_expression TK_NOT_EQUAL relational_expression  */
#line 298 "go.y"
                                                                            { (yyval.expr_t) = new NeqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2002 "go_parser.cpp"
    break;

  case 104: /* equality_expression: relational_expression  */
#line 299 "go.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2008 "go_parser.cpp"
    break;

  case 105: /* logical_or_expression: logical_or_expression TK_OR logical_and_expression  */
#line 302 "go.y"
                                                                          { (yyval.expr_t) = new LogicalOrExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2014 "go_parser.cpp"
    break;

  case 106: /* logical_or_expression: logical_and_expression  */
#line 304 "go.y"
                                             {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2020 "go_parser.cpp"
    break;

  case 107: /* logical_and_expression: logical_and_expression TK_AND equality_expression  */
#line 307 "go.y"
                                                                          { (yyval.expr_t) = new LogicalAndExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2026 "go_parser.cpp"
    break;

  case 108: /* logical_and_expression: equality_expression  */
#line 308 "go.y"
                                            {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2032 "go_parser.cpp"
    break;

  case 109: /* assignment_operator: '='  */
#line 311 "go.y"
                         { (yyval.int_t) = EQUAL; }
#line 2038 "go_parser.cpp"
    break;

  case 110: /* assignment_operator: TK_PLUS_EQUAL  */
#line 312 "go.y"
                                   {(yyval.int_t) = PLUSEQUAL; }
#line 2044 "go_parser.cpp"
    break;

  case 111: /* assignment_operator: TK_MINUS_EQUAL  */
#line 313 "go.y"
                                    { (yyval.int_t) = MINUSEQUAL; }
#line 2050 "go_parser.cpp"
    break;

  case 112: /* expression: assignment_expression  */
#line 316 "go.y"
                                  {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2056 "go_parser.cpp"
    break;

  case 113: /* constant: TK_LIT_INT  */
#line 319 "go.y"
                     { (yyval.expr_t) = new IntExpr((yyvsp[0].int_t) , yylineno);}
#line 2062 "go_parser.cpp"
    break;

  case 114: /* constant: TK_LIT_FLOAT  */
#line 320 "go.y"
                       { (yyval.expr_t) = new FloatExpr((yyvsp[0].float_t) , yylineno);}
#line 2068 "go_parser.cpp"
    break;


#line 2072 "go_parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 322 "go.y"
