/* A Bison parser, made by GNU Bison 3.7.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Sysy.y"

#include <stdio.h>
#include <string.h>
#include <string>
#include "nodes.h"
int yylex(void);
void yyerror(char*);
extern int yydebug;
struct Node* root;
using namespace std;

#line 83 "Sysy.tab.cpp"

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

#include "Sysy.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_IDENT = 13,                     /* IDENT  */
  YYSYMBOL_NUMBER = 14,                    /* NUMBER  */
  YYSYMBOL_15_ = 15,                       /* ';'  */
  YYSYMBOL_16_ = 16,                       /* ','  */
  YYSYMBOL_17_ = 17,                       /* '='  */
  YYSYMBOL_18_ = 18,                       /* '{'  */
  YYSYMBOL_19_ = 19,                       /* '}'  */
  YYSYMBOL_20_ = 20,                       /* '('  */
  YYSYMBOL_21_ = 21,                       /* ')'  */
  YYSYMBOL_22_ = 22,                       /* '['  */
  YYSYMBOL_23_ = 23,                       /* ']'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '!'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '%'  */
  YYSYMBOL_30_ = 30,                       /* '<'  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '&'  */
  YYSYMBOL_33_ = 33,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_CompUnit = 35,                  /* CompUnit  */
  YYSYMBOL_Decl = 36,                      /* Decl  */
  YYSYMBOL_VarDecl = 37,                   /* VarDecl  */
  YYSYMBOL_VarDefList = 38,                /* VarDefList  */
  YYSYMBOL_VarDef = 39,                    /* VarDef  */
  YYSYMBOL_InitVal = 40,                   /* InitVal  */
  YYSYMBOL_InitValList = 41,               /* InitValList  */
  YYSYMBOL_FuncDef = 42,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 43,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 44,                /* FuncFParam  */
  YYSYMBOL_Block = 45,                     /* Block  */
  YYSYMBOL_BlockItem_list = 46,            /* BlockItem_list  */
  YYSYMBOL_BlockItem = 47,                 /* BlockItem  */
  YYSYMBOL_Stmt = 48,                      /* Stmt  */
  YYSYMBOL_Exp = 49,                       /* Exp  */
  YYSYMBOL_Cond = 50,                      /* Cond  */
  YYSYMBOL_Lval = 51,                      /* Lval  */
  YYSYMBOL_ExpList = 52,                   /* ExpList  */
  YYSYMBOL_PrimaryExp = 53,                /* PrimaryExp  */
  YYSYMBOL_UnaryOp = 54,                   /* UnaryOp  */
  YYSYMBOL_UnaryExp = 55,                  /* UnaryExp  */
  YYSYMBOL_FuncRParams = 56,               /* FuncRParams  */
  YYSYMBOL_MulOp = 57,                     /* MulOp  */
  YYSYMBOL_MulExp = 58,                    /* MulExp  */
  YYSYMBOL_AddOp = 59,                     /* AddOp  */
  YYSYMBOL_AddExp = 60,                    /* AddExp  */
  YYSYMBOL_RelOp = 61,                     /* RelOp  */
  YYSYMBOL_RelExp = 62,                    /* RelExp  */
  YYSYMBOL_EqOp = 63,                      /* EqOp  */
  YYSYMBOL_EqExp = 64,                     /* EqExp  */
  YYSYMBOL_LAndExp = 65,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 66                     /* LOrExp  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   269


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
       2,     2,     2,    26,     2,     2,     2,    29,    32,     2,
      20,    21,    27,    24,    16,    25,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    15,
      30,    17,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    22,     2,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,    33,    19,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    48,    51,    52,    55,
      58,    59,    62,    63,    64,    65,    68,    69,    70,    73,
      74,    77,    78,    79,    80,    84,    85,    88,    89,    90,
      93,    94,    97,    98,   101,   102,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   118,   121,   124,
     125,   128,   129,   132,   133,   134,   137,   138,   139,   142,
     143,   144,   145,   148,   149,   152,   153,   154,   157,   158,
     161,   162,   165,   166,   169,   170,   171,   172,   175,   176,
     179,   180,   183,   184,   187,   188,   191,   192
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "VOID", "CONST",
  "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", "END", "IDENT",
  "NUMBER", "';'", "','", "'='", "'{'", "'}'", "'('", "')'", "'['", "']'",
  "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'|'",
  "$accept", "CompUnit", "Decl", "VarDecl", "VarDefList", "VarDef",
  "InitVal", "InitValList", "FuncDef", "FuncFParams", "FuncFParam",
  "Block", "BlockItem_list", "BlockItem", "Stmt", "Exp", "Cond", "Lval",
  "ExpList", "PrimaryExp", "UnaryOp", "UnaryExp", "FuncRParams", "MulOp",
  "MulExp", "AddOp", "AddExp", "RelOp", "RelExp", "EqOp", "EqExp",
  "LAndExp", "LOrExp", YY_NULLPTR
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
     265,   266,   267,   268,   269,    59,    44,    61,   123,   125,
      40,    41,    91,    93,    43,    45,    33,    42,    47,    37,
      60,    62,    38,   124
};
#endif

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
     103,    10,    49,    68,   177,  -122,  -122,  -122,     4,    25,
    -122,    32,    62,  -122,  -122,  -122,  -122,  -122,   133,    14,
     150,    26,  -122,    62,    15,    36,    39,  -122,    31,   150,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,   150,  -122,   156,
      -5,    66,    64,    47,  -122,    60,   133,   150,  -122,    64,
      53,   147,    67,  -122,  -122,    23,    92,  -122,  -122,  -122,
    -122,   150,  -122,  -122,   150,    70,    85,  -122,    84,    64,
    -122,  -122,    93,  -122,    64,  -122,  -122,    65,   133,  -122,
    -122,  -122,   156,    98,   105,   106,   115,   116,    52,  -122,
    -122,  -122,  -122,   109,  -122,  -122,   117,   120,  -122,  -122,
    -122,  -122,   150,  -122,  -122,   127,   150,   150,  -122,  -122,
    -122,   137,  -122,  -122,  -122,   150,  -122,    67,   121,    -5,
      71,    -1,   134,   129,   144,  -122,   154,   130,   161,   162,
     150,   169,   170,   150,   158,   155,   130,  -122,   184,  -122,
    -122,    -5,  -122,  -122,    71,   150,   150,  -122,   130,    -1,
     134,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     7,     3,    12,     0,
      10,     0,     0,     8,     1,     6,     4,     5,     0,     0,
       0,    14,     9,     0,     0,    12,    49,    55,     0,     0,
      56,    57,    58,    13,    16,    54,    59,     0,    68,    72,
      47,     0,     0,     0,    25,     0,     0,     0,    11,     0,
       0,     0,    50,    17,    19,     0,     0,    62,    65,    66,
      67,     0,    70,    71,     0,    27,     0,    21,     0,     0,
      51,    15,     0,    23,     0,    60,    63,     0,     0,    18,
      53,    69,    73,     0,     0,     0,     0,     0,     0,    37,
      30,    34,    39,     0,    32,    35,     0,    54,    26,    22,
      52,    24,     0,    61,    20,    28,     0,     0,    43,    44,
      45,     0,    31,    33,    38,     0,    64,    29,     0,    78,
      82,    84,    86,    48,     0,    46,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,    36,    40,    74,
      75,    79,    80,    81,    83,     0,     0,    42,     0,    85,
      87,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,     9,   189,  -122,   171,   -24,  -122,   191,   172,
     125,   -37,  -122,   104,  -121,   -18,    91,   -63,   -25,  -122,
    -122,   -23,  -122,  -122,   135,  -122,   -99,  -122,    69,  -122,
      55,    57,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    91,     6,     9,    10,    33,    55,     7,    43,
      44,    92,    93,    94,    95,    96,   118,    35,    21,    36,
      37,    38,    77,    61,    39,    64,    40,   130,   120,   133,
     121,   122,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    52,    45,    97,    54,    67,   138,   119,   119,     5,
      34,    56,    73,    16,    57,   147,   131,    41,    41,    62,
      63,    18,    71,     8,    19,   132,    20,   151,    34,    72,
      97,   141,    99,    76,   119,    42,    49,   101,    81,    78,
      22,    23,    79,    46,    26,    27,   119,   119,    47,    28,
      53,    29,    24,    18,   104,    30,    31,    32,    20,    51,
      34,    20,    11,    68,    97,    26,    27,   110,    69,    68,
     111,    12,    29,    97,    74,    25,    30,    31,    32,    65,
     117,   102,    66,    70,   116,    97,   103,    41,    12,    47,
       3,    84,    83,    85,    86,    87,    88,   126,    26,    27,
      89,   128,   129,    66,    90,    29,     1,     2,     3,    30,
      31,    32,    12,    80,     3,    84,   100,    85,    86,    87,
      88,   105,    26,    27,    89,   106,   107,    66,   112,    29,
     108,   109,   114,    30,    31,    32,    84,   115,    85,    86,
      87,    88,   127,    26,    27,    89,    26,    27,    66,    20,
      29,    28,   125,    29,    30,    31,    32,    30,    31,    32,
      26,    27,   135,    26,    27,   136,   134,    29,    75,   137,
      29,    30,    31,    32,    30,    31,    32,    14,   139,   140,
       1,     2,     3,    58,    59,    60,   142,   143,   146,    15,
     145,   148,    13,    98,    48,    17,    50,   113,   124,    82,
     149,     0,   144,   150
};

static const yytype_int16 yycheck[] =
{
      18,    26,    20,    66,    28,    42,   127,   106,   107,     0,
      28,    29,    49,     4,    37,   136,    17,     3,     3,    24,
      25,    17,    46,    13,    20,    26,    22,   148,    46,    47,
      93,   130,    69,    51,   133,    21,    21,    74,    61,    16,
      15,    16,    19,    17,    13,    14,   145,   146,    22,    18,
      19,    20,    20,    17,    78,    24,    25,    26,    22,    20,
      78,    22,    13,    16,   127,    13,    14,    15,    21,    16,
      88,     3,    20,   136,    21,    13,    24,    25,    26,    13,
     105,    16,    18,    23,   102,   148,    21,     3,     3,    22,
       5,     6,    22,     8,     9,    10,    11,   115,    13,    14,
      15,    30,    31,    18,    19,    20,     3,     4,     5,    24,
      25,    26,     3,    21,     5,     6,    23,     8,     9,    10,
      11,    23,    13,    14,    15,    20,    20,    18,    19,    20,
      15,    15,    15,    24,    25,    26,     6,    17,     8,     9,
      10,    11,    21,    13,    14,    15,    13,    14,    18,    22,
      20,    18,    15,    20,    24,    25,    26,    24,    25,    26,
      13,    14,    33,    13,    14,    21,    32,    20,    21,    15,
      20,    24,    25,    26,    24,    25,    26,     0,    17,    17,
       3,     4,     5,    27,    28,    29,    17,    17,    33,    12,
      32,     7,     3,    68,    23,     4,    24,    93,   107,    64,
     145,    -1,   133,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    35,    36,    37,    42,    13,    38,
      39,    13,     3,    37,     0,    12,    36,    42,    17,    20,
      22,    52,    15,    16,    20,    13,    13,    14,    18,    20,
      24,    25,    26,    40,    49,    51,    53,    54,    55,    58,
      60,     3,    21,    43,    44,    49,    17,    22,    39,    21,
      43,    20,    52,    19,    40,    41,    49,    55,    27,    28,
      29,    57,    24,    25,    59,    13,    18,    45,    16,    21,
      23,    40,    49,    45,    21,    21,    49,    56,    16,    19,
      21,    55,    58,    22,     6,     8,     9,    10,    11,    15,
      19,    36,    45,    46,    47,    48,    49,    51,    44,    45,
      23,    45,    16,    21,    40,    23,    20,    20,    15,    15,
      15,    49,    19,    47,    15,    17,    49,    52,    50,    60,
      62,    64,    65,    66,    50,    15,    49,    21,    30,    31,
      61,    17,    26,    63,    32,    33,    21,    15,    48,    17,
      17,    60,    17,    17,    62,    32,    33,    48,     7,    64,
      65,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    35,    35,    35,    36,    36,    37,
      38,    38,    39,    39,    39,    39,    40,    40,    40,    41,
      41,    42,    42,    42,    42,    43,    43,    44,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    49,    50,    51,
      51,    52,    52,    53,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     3,     1,     3,     2,     4,     1,     2,     3,     1,
       3,     5,     6,     5,     6,     1,     3,     2,     4,     5,
       2,     3,     1,     2,     1,     1,     4,     1,     2,     1,
       5,     7,     5,     2,     2,     2,     3,     1,     1,     1,
       2,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     2,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     2,     2,     1,     1,     1,     3,
       2,     2,     1,     3,     1,     4,     1,     4
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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  case 2: /* CompUnit: Decl  */
#line 44 "Sysy.y"
      {(yyval.node)=new CompUnit(NULL,(yyvsp[0].node));}
#line 1244 "Sysy.tab.cpp"
    break;

  case 3: /* CompUnit: FuncDef  */
#line 45 "Sysy.y"
         {(yyval.node)=new CompUnit(NULL,(yyvsp[0].node));}
#line 1250 "Sysy.tab.cpp"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 46 "Sysy.y"
               {(yyval.node)=new CompUnit((yyvsp[-1].node),(yyvsp[0].node));}
#line 1256 "Sysy.tab.cpp"
    break;

  case 5: /* CompUnit: CompUnit FuncDef  */
#line 47 "Sysy.y"
                  {(yyval.node)=new CompUnit((yyvsp[-1].node),(yyvsp[0].node));}
#line 1262 "Sysy.tab.cpp"
    break;

  case 6: /* CompUnit: CompUnit END  */
#line 48 "Sysy.y"
              {(yyval.node)=(yyvsp[-1].node); start((yyval.node)); return 0;}
#line 1268 "Sysy.tab.cpp"
    break;

  case 7: /* Decl: VarDecl  */
#line 51 "Sysy.y"
         {(yyval.node)=(yyvsp[0].node);}
#line 1274 "Sysy.tab.cpp"
    break;

  case 8: /* Decl: CONST VarDecl  */
#line 52 "Sysy.y"
               {(yyval.node)=(yyvsp[0].node);}
#line 1280 "Sysy.tab.cpp"
    break;

  case 9: /* VarDecl: INT VarDefList ';'  */
#line 55 "Sysy.y"
                    {(yyval.node)=(yyvsp[-1].node);}
#line 1286 "Sysy.tab.cpp"
    break;

  case 10: /* VarDefList: VarDef  */
#line 58 "Sysy.y"
        {(yyval.node)=new VarDefList(NULL,(yyvsp[0].node));}
#line 1292 "Sysy.tab.cpp"
    break;

  case 11: /* VarDefList: VarDefList ',' VarDef  */
#line 59 "Sysy.y"
                       {(yyval.node)=new VarDefList((yyvsp[-2].node),(yyvsp[0].node));}
#line 1298 "Sysy.tab.cpp"
    break;

  case 12: /* VarDef: IDENT  */
#line 62 "Sysy.y"
       {(yyval.node)=new VarDef((yyvsp[0].sValue),NULL,NULL);}
#line 1304 "Sysy.tab.cpp"
    break;

  case 13: /* VarDef: IDENT '=' InitVal  */
#line 63 "Sysy.y"
                   {(yyval.node)=new VarDef((yyvsp[-2].sValue),NULL,(yyvsp[0].node));}
#line 1310 "Sysy.tab.cpp"
    break;

  case 14: /* VarDef: IDENT ExpList  */
#line 64 "Sysy.y"
               {(yyval.node)=new VarDef((yyvsp[-1].sValue),(yyvsp[0].node),NULL);}
#line 1316 "Sysy.tab.cpp"
    break;

  case 15: /* VarDef: IDENT ExpList '=' InitVal  */
#line 65 "Sysy.y"
                           {(yyval.node)=new VarDef((yyvsp[-3].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1322 "Sysy.tab.cpp"
    break;

  case 16: /* InitVal: Exp  */
#line 68 "Sysy.y"
     {(yyval.node)=new InitVal((yyvsp[0].node),NULL);}
#line 1328 "Sysy.tab.cpp"
    break;

  case 17: /* InitVal: '{' '}'  */
#line 69 "Sysy.y"
         {(yyval.node)=new InitVal(NULL,NULL);}
#line 1334 "Sysy.tab.cpp"
    break;

  case 18: /* InitVal: '{' InitValList '}'  */
#line 70 "Sysy.y"
                     {(yyval.node)=new InitVal(NULL,(yyvsp[-1].node));}
#line 1340 "Sysy.tab.cpp"
    break;

  case 19: /* InitValList: InitVal  */
#line 73 "Sysy.y"
         {(yyval.node)=new InitValList(NULL,(yyvsp[0].node));}
#line 1346 "Sysy.tab.cpp"
    break;

  case 20: /* InitValList: InitValList ',' InitVal  */
#line 74 "Sysy.y"
                         {(yyval.node)=new InitValList((yyvsp[-2].node),(yyvsp[0].node));}
#line 1352 "Sysy.tab.cpp"
    break;

  case 21: /* FuncDef: INT IDENT '(' ')' Block  */
#line 77 "Sysy.y"
                         {(yyval.node)=new FuncDef(0,(yyvsp[-3].sValue),NULL,(yyvsp[0].node));}
#line 1358 "Sysy.tab.cpp"
    break;

  case 22: /* FuncDef: INT IDENT '(' FuncFParams ')' Block  */
#line 78 "Sysy.y"
                                     {(yyval.node)=new FuncDef(0,(yyvsp[-4].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1364 "Sysy.tab.cpp"
    break;

  case 23: /* FuncDef: VOID IDENT '(' ')' Block  */
#line 79 "Sysy.y"
                          {(yyval.node)=new FuncDef(1,(yyvsp[-3].sValue),NULL,(yyvsp[0].node));}
#line 1370 "Sysy.tab.cpp"
    break;

  case 24: /* FuncDef: VOID IDENT '(' FuncFParams ')' Block  */
#line 80 "Sysy.y"
                                      {(yyval.node)=new FuncDef(1,(yyvsp[-4].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1376 "Sysy.tab.cpp"
    break;

  case 25: /* FuncFParams: FuncFParam  */
#line 84 "Sysy.y"
            {(yyval.node)=new FuncFParams(NULL,(yyvsp[0].node));}
#line 1382 "Sysy.tab.cpp"
    break;

  case 26: /* FuncFParams: FuncFParams ',' FuncFParam  */
#line 85 "Sysy.y"
                            {(yyval.node)=new FuncFParams((yyvsp[-2].node),(yyvsp[0].node));}
#line 1388 "Sysy.tab.cpp"
    break;

  case 27: /* FuncFParam: INT IDENT  */
#line 88 "Sysy.y"
           {(yyval.node)=new FuncFParam((yyvsp[0].sValue),false,NULL);}
#line 1394 "Sysy.tab.cpp"
    break;

  case 28: /* FuncFParam: INT IDENT '[' ']'  */
#line 89 "Sysy.y"
                   {(yyval.node)=new FuncFParam((yyvsp[-2].sValue),true,NULL);}
#line 1400 "Sysy.tab.cpp"
    break;

  case 29: /* FuncFParam: INT IDENT '[' ']' ExpList  */
#line 90 "Sysy.y"
                           {(yyval.node)=new FuncFParam((yyvsp[-3].sValue),true,(yyvsp[0].node));}
#line 1406 "Sysy.tab.cpp"
    break;

  case 30: /* Block: '{' '}'  */
#line 93 "Sysy.y"
         {(yyval.node)=new Block(NULL);}
#line 1412 "Sysy.tab.cpp"
    break;

  case 31: /* Block: '{' BlockItem_list '}'  */
#line 94 "Sysy.y"
                       {(yyval.node)=new Block((yyvsp[-1].node));}
#line 1418 "Sysy.tab.cpp"
    break;

  case 32: /* BlockItem_list: BlockItem  */
#line 97 "Sysy.y"
           {(yyval.node)=new BlockItemList(NULL,(yyvsp[0].node));}
#line 1424 "Sysy.tab.cpp"
    break;

  case 33: /* BlockItem_list: BlockItem_list BlockItem  */
#line 98 "Sysy.y"
                          {(yyval.node)=new BlockItemList((yyvsp[-1].node),(yyvsp[0].node));}
#line 1430 "Sysy.tab.cpp"
    break;

  case 34: /* BlockItem: Decl  */
#line 101 "Sysy.y"
      {(yyval.node)=(yyvsp[0].node);}
#line 1436 "Sysy.tab.cpp"
    break;

  case 35: /* BlockItem: Stmt  */
#line 102 "Sysy.y"
      {(yyval.node)=(yyvsp[0].node);}
#line 1442 "Sysy.tab.cpp"
    break;

  case 36: /* Stmt: Lval '=' Exp ';'  */
#line 105 "Sysy.y"
                  {(yyval.node)=new Stmt(0,(yyvsp[-3].node),(yyvsp[-1].node),NULL,NULL,NULL,NULL);}
#line 1448 "Sysy.tab.cpp"
    break;

  case 37: /* Stmt: ';'  */
#line 106 "Sysy.y"
     {(yyval.node)=new Stmt(0,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1454 "Sysy.tab.cpp"
    break;

  case 38: /* Stmt: Exp ';'  */
#line 107 "Sysy.y"
         {(yyval.node)=new Stmt(0,NULL,(yyvsp[-1].node),NULL,NULL,NULL,NULL);}
#line 1460 "Sysy.tab.cpp"
    break;

  case 39: /* Stmt: Block  */
#line 108 "Sysy.y"
       {(yyval.node)=new Stmt(0,NULL,NULL,(yyvsp[0].node),NULL,NULL,NULL);}
#line 1466 "Sysy.tab.cpp"
    break;

  case 40: /* Stmt: IF '(' Cond ')' Stmt  */
#line 109 "Sysy.y"
                      {(yyval.node)=new Stmt(1,NULL,NULL,NULL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 1472 "Sysy.tab.cpp"
    break;

  case 41: /* Stmt: IF '(' Cond ')' Stmt ELSE Stmt  */
#line 110 "Sysy.y"
                                {(yyval.node)=new Stmt(2,NULL,NULL,NULL,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1478 "Sysy.tab.cpp"
    break;

  case 42: /* Stmt: WHILE '(' Cond ')' Stmt  */
#line 111 "Sysy.y"
                         {(yyval.node)=new Stmt(3,NULL,NULL,NULL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 1484 "Sysy.tab.cpp"
    break;

  case 43: /* Stmt: BREAK ';'  */
#line 112 "Sysy.y"
           {(yyval.node)=new Stmt(4,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1490 "Sysy.tab.cpp"
    break;

  case 44: /* Stmt: CONTINUE ';'  */
#line 113 "Sysy.y"
              {(yyval.node)=new Stmt(5,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1496 "Sysy.tab.cpp"
    break;

  case 45: /* Stmt: RETURN ';'  */
#line 114 "Sysy.y"
            {(yyval.node)=new Stmt(6,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1502 "Sysy.tab.cpp"
    break;

  case 46: /* Stmt: RETURN Exp ';'  */
#line 115 "Sysy.y"
                {(yyval.node)=new Stmt(7,NULL,(yyvsp[-1].node),NULL,NULL,NULL,NULL);}
#line 1508 "Sysy.tab.cpp"
    break;

  case 47: /* Exp: AddExp  */
#line 118 "Sysy.y"
        {(yyval.node)=(yyvsp[0].node);}
#line 1514 "Sysy.tab.cpp"
    break;

  case 48: /* Cond: LOrExp  */
#line 121 "Sysy.y"
        {(yyval.node)=(yyvsp[0].node);}
#line 1520 "Sysy.tab.cpp"
    break;

  case 49: /* Lval: IDENT  */
#line 124 "Sysy.y"
       {(yyval.node)=new Lval((yyvsp[0].sValue),NULL);}
#line 1526 "Sysy.tab.cpp"
    break;

  case 50: /* Lval: IDENT ExpList  */
#line 125 "Sysy.y"
               {(yyval.node)=new Lval((yyvsp[-1].sValue),(yyvsp[0].node));}
#line 1532 "Sysy.tab.cpp"
    break;

  case 51: /* ExpList: '[' Exp ']'  */
#line 128 "Sysy.y"
             {(yyval.node)=new ExpList(NULL,(yyvsp[-1].node));}
#line 1538 "Sysy.tab.cpp"
    break;

  case 52: /* ExpList: ExpList '[' Exp ']'  */
#line 129 "Sysy.y"
                     {(yyval.node)=new ExpList((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1544 "Sysy.tab.cpp"
    break;

  case 53: /* PrimaryExp: '(' Exp ')'  */
#line 132 "Sysy.y"
             {(yyval.node)=new PrimaryExp((yyvsp[-1].node),NULL,0);}
#line 1550 "Sysy.tab.cpp"
    break;

  case 54: /* PrimaryExp: Lval  */
#line 133 "Sysy.y"
       {(yyval.node)=new PrimaryExp(NULL,(yyvsp[0].node),0);}
#line 1556 "Sysy.tab.cpp"
    break;

  case 55: /* PrimaryExp: NUMBER  */
#line 134 "Sysy.y"
         {(yyval.node)=new PrimaryExp(NULL,NULL,(yyvsp[0].iValue));}
#line 1562 "Sysy.tab.cpp"
    break;

  case 56: /* UnaryOp: '+'  */
#line 137 "Sysy.y"
     {(yyval.sValue)="+";}
#line 1568 "Sysy.tab.cpp"
    break;

  case 57: /* UnaryOp: '-'  */
#line 138 "Sysy.y"
     {(yyval.sValue)="-";}
#line 1574 "Sysy.tab.cpp"
    break;

  case 58: /* UnaryOp: '!'  */
#line 139 "Sysy.y"
     {(yyval.sValue)="!";}
#line 1580 "Sysy.tab.cpp"
    break;

  case 59: /* UnaryExp: PrimaryExp  */
#line 142 "Sysy.y"
            {(yyval.node)=new UnaryExp((yyvsp[0].node),"",NULL,"");}
#line 1586 "Sysy.tab.cpp"
    break;

  case 60: /* UnaryExp: IDENT '(' ')'  */
#line 143 "Sysy.y"
               {(yyval.node)=new UnaryExp(NULL,(yyvsp[-2].sValue),NULL,"");}
#line 1592 "Sysy.tab.cpp"
    break;

  case 61: /* UnaryExp: IDENT '(' FuncRParams ')'  */
#line 144 "Sysy.y"
                          {(yyval.node)=new UnaryExp(NULL,(yyvsp[-3].sValue),(yyvsp[-1].node),"");}
#line 1598 "Sysy.tab.cpp"
    break;

  case 62: /* UnaryExp: UnaryOp UnaryExp  */
#line 145 "Sysy.y"
                  {(yyval.node)=new UnaryExp((yyvsp[0].node),"",NULL,(yyvsp[-1].sValue));}
#line 1604 "Sysy.tab.cpp"
    break;

  case 63: /* FuncRParams: Exp  */
#line 148 "Sysy.y"
     {(yyval.node)=new FuncRParams(NULL,(yyvsp[0].node));}
#line 1610 "Sysy.tab.cpp"
    break;

  case 64: /* FuncRParams: FuncRParams ',' Exp  */
#line 149 "Sysy.y"
                     {(yyval.node)=new FuncRParams((yyvsp[-2].node),(yyvsp[0].node));}
#line 1616 "Sysy.tab.cpp"
    break;

  case 65: /* MulOp: '*'  */
#line 152 "Sysy.y"
     {(yyval.sValue)="*";}
#line 1622 "Sysy.tab.cpp"
    break;

  case 66: /* MulOp: '/'  */
#line 153 "Sysy.y"
     {(yyval.sValue)="/";}
#line 1628 "Sysy.tab.cpp"
    break;

  case 67: /* MulOp: '%'  */
#line 154 "Sysy.y"
     {(yyval.sValue)="%";}
#line 1634 "Sysy.tab.cpp"
    break;

  case 68: /* MulExp: UnaryExp  */
#line 157 "Sysy.y"
          {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1640 "Sysy.tab.cpp"
    break;

  case 69: /* MulExp: MulExp MulOp UnaryExp  */
#line 158 "Sysy.y"
                       {(yyval.node)=new Exp((yyvsp[-1].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1646 "Sysy.tab.cpp"
    break;

  case 70: /* AddOp: '+'  */
#line 161 "Sysy.y"
     {(yyval.sValue)="+";}
#line 1652 "Sysy.tab.cpp"
    break;

  case 71: /* AddOp: '-'  */
#line 162 "Sysy.y"
     {(yyval.sValue)="-";}
#line 1658 "Sysy.tab.cpp"
    break;

  case 72: /* AddExp: MulExp  */
#line 165 "Sysy.y"
        {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1664 "Sysy.tab.cpp"
    break;

  case 73: /* AddExp: AddExp AddOp MulExp  */
#line 166 "Sysy.y"
                     {(yyval.node)=new Exp((yyvsp[-1].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1670 "Sysy.tab.cpp"
    break;

  case 74: /* RelOp: '<' '='  */
#line 169 "Sysy.y"
         {(yyval.sValue)="<=";}
#line 1676 "Sysy.tab.cpp"
    break;

  case 75: /* RelOp: '>' '='  */
#line 170 "Sysy.y"
         {(yyval.sValue)=">=";}
#line 1682 "Sysy.tab.cpp"
    break;

  case 76: /* RelOp: '<'  */
#line 171 "Sysy.y"
     {(yyval.sValue)="<";}
#line 1688 "Sysy.tab.cpp"
    break;

  case 77: /* RelOp: '>'  */
#line 172 "Sysy.y"
     {(yyval.sValue)=">";}
#line 1694 "Sysy.tab.cpp"
    break;

  case 78: /* RelExp: AddExp  */
#line 175 "Sysy.y"
        {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1700 "Sysy.tab.cpp"
    break;

  case 79: /* RelExp: RelExp RelOp AddExp  */
#line 176 "Sysy.y"
                     {(yyval.node)=new Exp((yyvsp[-1].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1706 "Sysy.tab.cpp"
    break;

  case 80: /* EqOp: '=' '='  */
#line 179 "Sysy.y"
         {(yyval.sValue)="==";}
#line 1712 "Sysy.tab.cpp"
    break;

  case 81: /* EqOp: '!' '='  */
#line 180 "Sysy.y"
         {(yyval.sValue)="!=";}
#line 1718 "Sysy.tab.cpp"
    break;

  case 82: /* EqExp: RelExp  */
#line 183 "Sysy.y"
        {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1724 "Sysy.tab.cpp"
    break;

  case 83: /* EqExp: EqExp EqOp RelExp  */
#line 184 "Sysy.y"
                   {(yyval.node)=new Exp((yyvsp[-1].sValue),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1730 "Sysy.tab.cpp"
    break;

  case 84: /* LAndExp: EqExp  */
#line 187 "Sysy.y"
       {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1736 "Sysy.tab.cpp"
    break;

  case 85: /* LAndExp: LAndExp '&' '&' EqExp  */
#line 188 "Sysy.y"
                       {(yyval.node)=new Exp("&&",(yyvsp[-3].node),(yyvsp[0].node));}
#line 1742 "Sysy.tab.cpp"
    break;

  case 86: /* LOrExp: LAndExp  */
#line 191 "Sysy.y"
         {(yyval.node)=new Exp("",NULL,(yyvsp[0].node));}
#line 1748 "Sysy.tab.cpp"
    break;

  case 87: /* LOrExp: LOrExp '|' '|' LAndExp  */
#line 192 "Sysy.y"
                        {(yyval.node)=new Exp("||",(yyvsp[-3].node),(yyvsp[0].node));}
#line 1754 "Sysy.tab.cpp"
    break;


#line 1758 "Sysy.tab.cpp"

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

#line 194 "Sysy.y"

void yyerror(char *s)
{
	//fprintf(stderr,"error:%s\nline:%d\nyytext:%s",yytext,yylineno,yytext);
}
int main(int argc, char* argv[])
{
        freopen(argv[3], "r", stdin);
        freopen(argv[5], "w", stdout);
        //yydebug=1;
        yyparse();
        printf("\n");
	return 0;
}
