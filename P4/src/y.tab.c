/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/Sintact.y"

// ************************************************************
// ***
// *** Fichero : SINTACT.Y
// *** Función : Especificación BISON del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ************************************************************
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "estructuras.h"

// La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
// fuente de lex (prueba.l)
void yyerror(char * msg);

// La siguiente variable se usará para conocer el numero de la línea
// que se esta leyendo en cada momento. También es posible usar la variable
// ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
// invocar a flex con la opción ’-l’ (compatibilidad con lex).

//############
//#define YYDEBUG 1
//############

#define YYERROR_VERBOSE


#line 104 "src/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_WHILE = 3,                      /* WHILE  */
  YYSYMBOL_DO = 4,                         /* DO  */
  YYSYMBOL_UNTIL = 5,                      /* UNTIL  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_CIN = 8,                        /* CIN  */
  YYSYMBOL_COUT = 9,                       /* COUT  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_LOCAL = 12,                     /* LOCAL  */
  YYSYMBOL_TIPOINT = 13,                   /* TIPOINT  */
  YYSYMBOL_TIPOCHAR = 14,                  /* TIPOCHAR  */
  YYSYMBOL_TIPOVAR = 15,                   /* TIPOVAR  */
  YYSYMBOL_TIPOLISTA = 16,                 /* TIPOLISTA  */
  YYSYMBOL_TIPOCONST = 17,                 /* TIPOCONST  */
  YYSYMBOL_VALBOOL = 18,                   /* VALBOOL  */
  YYSYMBOL_PARIZQ = 19,                    /* PARIZQ  */
  YYSYMBOL_PARDCH = 20,                    /* PARDCH  */
  YYSYMBOL_LLAVEIZQ = 21,                  /* LLAVEIZQ  */
  YYSYMBOL_LLAVEDCH = 22,                  /* LLAVEDCH  */
  YYSYMBOL_CORIZQ = 23,                    /* CORIZQ  */
  YYSYMBOL_CORDCH = 24,                    /* CORDCH  */
  YYSYMBOL_PYC = 25,                       /* PYC  */
  YYSYMBOL_COMA = 26,                      /* COMA  */
  YYSYMBOL_ASIGN = 27,                     /* ASIGN  */
  YYSYMBOL_OPEMON = 28,                    /* OPEMON  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_XOR = 31,                       /* XOR  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_REL = 33,                       /* REL  */
  YYSYMBOL_SIG = 34,                       /* SIG  */
  YYSYMBOL_ANT = 35,                       /* ANT  */
  YYSYMBOL_DOLLAR = 36,                    /* DOLLAR  */
  YYSYMBOL_HASHTAG = 37,                   /* HASHTAG  */
  YYSYMBOL_INTERR = 38,                    /* INTERR  */
  YYSYMBOL_DIV = 39,                       /* DIV  */
  YYSYMBOL_MOD = 40,                       /* MOD  */
  YYSYMBOL_AT = 41,                        /* AT  */
  YYSYMBOL_PLUSPLUS = 42,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 43,                /* MINUSMINUS  */
  YYSYMBOL_TIMESTIMES = 44,                /* TIMESTIMES  */
  YYSYMBOL_PLUS = 45,                      /* PLUS  */
  YYSYMBOL_MINUS = 46,                     /* MINUS  */
  YYSYMBOL_TIMES = 47,                     /* TIMES  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_CADENA = 49,                    /* CADENA  */
  YYSYMBOL_NUMERO = 50,                    /* NUMERO  */
  YYSYMBOL_ENTERO = 51,                    /* ENTERO  */
  YYSYMBOL_ID = 52,                        /* ID  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_programa = 54,                  /* programa  */
  YYSYMBOL_bloque = 55,                    /* bloque  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_declar_var_locales = 57,        /* declar_var_locales  */
  YYSYMBOL_var_locales = 58,               /* var_locales  */
  YYSYMBOL_cuerpo_declar_var = 59,         /* cuerpo_declar_var  */
  YYSYMBOL_nombres = 60,                   /* nombres  */
  YYSYMBOL_cuerpo_declar_const = 61,       /* cuerpo_declar_const  */
  YYSYMBOL_asig_const_lista = 62,          /* asig_const_lista  */
  YYSYMBOL_items = 63,                     /* items  */
  YYSYMBOL_declar_funciones = 64,          /* declar_funciones  */
  YYSYMBOL_declar_funcion = 65,            /* declar_funcion  */
  YYSYMBOL_cabec_funcion = 66,             /* cabec_funcion  */
  YYSYMBOL_67_2 = 67,                      /* $@2  */
  YYSYMBOL_parametros = 68,                /* parametros  */
  YYSYMBOL_parametro = 69,                 /* parametro  */
  YYSYMBOL_sentencias = 70,                /* sentencias  */
  YYSYMBOL_sentencia_asig = 71,            /* sentencia_asig  */
  YYSYMBOL_sentencia_if = 72,              /* sentencia_if  */
  YYSYMBOL_sentencia_while = 73,           /* sentencia_while  */
  YYSYMBOL_sentencia_entrada = 74,         /* sentencia_entrada  */
  YYSYMBOL_datos_entrada = 75,             /* datos_entrada  */
  YYSYMBOL_sentencia_salida = 76,          /* sentencia_salida  */
  YYSYMBOL_datos_salida = 77,              /* datos_salida  */
  YYSYMBOL_dato_salida = 78,               /* dato_salida  */
  YYSYMBOL_sentencia_return = 79,          /* sentencia_return  */
  YYSYMBOL_sentencia_do_until = 80,        /* sentencia_do_until  */
  YYSYMBOL_sentencia_funcion = 81,         /* sentencia_funcion  */
  YYSYMBOL_sentencia_lista = 82,           /* sentencia_lista  */
  YYSYMBOL_exp = 83,                       /* exp  */
  YYSYMBOL_exp_lista_ID = 84,              /* exp_lista_ID  */
  YYSYMBOL_op_ternario = 85,               /* op_ternario  */
  YYSYMBOL_aux = 86,                       /* aux  */
  YYSYMBOL_termino = 87,                   /* termino  */
  YYSYMBOL_exp_simple = 88,                /* exp_simple  */
  YYSYMBOL_num = 89,                       /* num  */
  YYSYMBOL_tipo_var_elem = 90,             /* tipo_var_elem  */
  YYSYMBOL_tipo_var = 91                   /* tipo_var  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   118,   118,   120,   120,   126,   127,   129,   130,   131,
     132,   134,   135,   136,   138,   139,   141,   142,   144,   145,
     147,   148,   149,   154,   155,   157,   159,   159,   160,   162,
     163,   164,   166,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   184,   185,   186,   188,   189,   191,
     193,   195,   196,   198,   200,   201,   203,   204,   206,   208,
     210,   212,   213,   214,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   248,   249,   251,   252,   255,
     256,   257,   258,   259,   260,   262,   263,   264,   265,   266,
     268,   269,   275,   276,   277,   279,   280
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "WHILE", "DO", "UNTIL",
  "IF", "ELSE", "CIN", "COUT", "MAIN", "RETURN", "LOCAL", "TIPOINT",
  "TIPOCHAR", "TIPOVAR", "TIPOLISTA", "TIPOCONST", "VALBOOL", "PARIZQ",
  "PARDCH", "LLAVEIZQ", "LLAVEDCH", "CORIZQ", "CORDCH", "PYC", "COMA",
  "ASIGN", "OPEMON", "OR", "AND", "XOR", "EQ", "REL", "SIG", "ANT",
  "DOLLAR", "HASHTAG", "INTERR", "DIV", "MOD", "AT", "PLUSPLUS",
  "MINUSMINUS", "TIMESTIMES", "PLUS", "MINUS", "TIMES", "CHAR", "CADENA",
  "NUMERO", "ENTERO", "ID", "$accept", "programa", "bloque", "$@1",
  "declar_var_locales", "var_locales", "cuerpo_declar_var", "nombres",
  "cuerpo_declar_const", "asig_const_lista", "items", "declar_funciones",
  "declar_funcion", "cabec_funcion", "$@2", "parametros", "parametro",
  "sentencias", "sentencia_asig", "sentencia_if", "sentencia_while",
  "sentencia_entrada", "datos_entrada", "sentencia_salida", "datos_salida",
  "dato_salida", "sentencia_return", "sentencia_do_until",
  "sentencia_funcion", "sentencia_lista", "exp", "exp_lista_ID",
  "op_ternario", "aux", "termino", "exp_simple", "num", "tipo_var_elem",
  "tipo_var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,     5,    30,    12,  -137,  -137,  -137,    39,    36,  -137,
     292,    61,  -137,  -137,  -137,  -137,    -5,    65,   488,  -137,
    -137,    14,  -137,  -137,  -137,    12,   473,  -137,    32,    14,
      -5,    41,  -137,  -137,  -137,  -137,   -20,    43,    90,    12,
      91,    78,    79,   145,  -137,    64,     9,    92,   101,  -137,
      24,    75,   103,  -137,    82,  -137,   145,   111,   130,   112,
     145,   114,   145,   115,   104,   118,  -137,  -137,   145,    93,
     209,   123,   128,  -137,  -137,  -137,    55,   125,   271,  -137,
    -137,  -137,  -137,   449,   110,  -137,  -137,  -137,  -137,   132,
    -137,   138,   209,  -137,   294,  -137,   140,  -137,   328,  -137,
     133,   169,  -137,  -137,   134,  -137,   203,  -137,   351,   135,
    -137,   117,   119,  -137,   209,   209,    53,    53,   120,   209,
     209,   209,  -137,  -137,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   -23,   148,   155,  -137,    37,   151,
     385,    76,   154,   153,    12,   145,    12,   145,   104,  -137,
    -137,   157,   159,  -137,  -137,   142,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,   164,   209,   161,   165,    11,  -137,   -13,
    -137,   136,   442,  -137,  -137,   408,   184,   237,  -137,  -137,
    -137,   209,  -137,   160,  -137,  -137,  -137,  -137,  -137,    76,
    -137,   168,   180,    16,  -137,    12,  -137,   185,  -137,  -137,
    -137,  -137,  -137,  -137
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     2,     6,     0,    24,
       0,     0,    13,   104,   103,   102,     0,     0,     0,     9,
      10,     0,    28,   106,    23,     0,     0,   105,     0,     0,
       0,     0,     5,     7,     8,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,    26,
       0,     0,     0,    11,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,    97,     0,     0,
       0,     0,     0,    96,   100,   101,     0,     0,     0,    75,
      89,    95,    63,     0,     0,    61,    62,    33,    42,     0,
      12,     0,     0,    14,     0,    36,     0,    40,     0,    35,
      50,     0,    37,    57,    53,    55,     0,    38,     0,     0,
      90,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    21,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    91,
      98,     0,     0,    82,    83,    86,    77,    78,    79,    80,
      81,    67,    68,    69,    71,    70,    72,    73,    64,    65,
      66,    87,    88,     0,     0,     0,     0,     0,    34,     0,
      30,     0,     0,    16,    49,     0,    47,     0,    54,    93,
      92,     0,    76,     0,    20,    41,    46,    45,    27,     0,
      32,     0,     0,     0,    59,     0,    85,     0,    29,    19,
      17,    18,    48,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,   -25,  -137,  -137,  -137,   188,   182,   195,  -137,
    -136,  -137,  -137,  -137,  -137,  -137,    19,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,    74,  -137,  -137,  -137,  -137,
     -39,  -137,  -137,  -137,   387,   -67,   -57,     2,   212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,     7,     9,    18,    19,    36,    20,   202,
     135,    11,    24,    25,    89,   179,   180,    26,   139,    61,
      57,    63,   100,    65,   104,   105,    77,    59,   136,    48,
     106,   122,   192,   173,    79,    80,    81,    27,   181
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    47,   177,   110,    78,    53,    54,   198,    13,    14,
      15,   134,    21,   199,    58,     3,   137,    94,    29,    31,
      21,    98,   171,   101,   172,   143,     1,   134,    83,   108,
       4,   134,    51,     5,   134,   197,    84,   174,    66,   134,
     211,   134,   174,    85,    86,   140,   203,   153,   154,    90,
      54,     8,   158,   159,   160,    67,   113,    10,    69,   155,
     156,   -22,    22,   -22,   -43,   -43,    35,   -43,    55,   -43,
     -43,   137,   -43,   134,    13,    14,    15,    23,    13,    14,
      15,    30,   -43,   -43,    49,    73,   176,    74,    75,    13,
      14,    15,    23,    52,   114,   115,   116,   -43,   117,   118,
     119,   120,   121,    74,    75,    66,   185,   194,   187,    56,
      60,    66,    62,   -43,    64,   137,    82,    87,   134,   184,
     134,   186,    67,    68,   206,    69,    88,    91,    67,    68,
      92,    69,    70,   138,    93,    96,    95,    97,    70,    99,
     102,    71,    72,   107,   111,   109,    66,    71,    72,   112,
     123,   141,    73,   103,    74,    75,    76,   150,    73,   145,
      74,    75,    76,    67,    68,   142,    69,   147,   148,   151,
      66,   152,   157,    70,   174,   175,   178,   182,   183,   189,
     212,   190,    71,    72,   191,   193,   195,    67,   200,   196,
      69,   205,   209,    73,   -52,    74,    75,    76,   124,   125,
     126,   127,   128,   -52,    66,   210,    33,   213,   129,   130,
      66,    50,   207,    34,   131,   132,   133,    73,   208,    74,
      75,    67,   188,    28,    69,     0,     0,    67,   -56,     0,
      69,     0,   124,   125,   126,   127,   128,   -56,    66,     0,
       0,     0,   129,   130,     0,     0,     0,     0,   131,   132,
     133,    73,     0,    74,    75,    67,     0,    73,    69,    74,
      75,     0,   -51,     0,     0,     0,   124,   125,   126,   127,
     128,   -51,    66,     0,     0,     0,   129,   130,     0,     0,
       0,     0,   131,   132,   133,    73,     0,    74,    75,    67,
       0,     0,    69,    12,     0,    66,   -58,     0,     0,     0,
     124,   125,   126,   127,   128,    13,    14,    15,    16,    17,
     129,   130,    67,     0,   144,    69,   131,   132,   133,    73,
       0,    74,    75,   124,   125,   126,   127,   128,     0,    66,
       0,     0,     0,   129,   130,     0,     0,     0,     0,   131,
     132,   133,    73,     0,    74,    75,    67,     0,   146,    69,
       0,     0,    66,     0,     0,     0,     0,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,   129,   130,    67,
       0,   149,    69,   131,   132,   133,    73,     0,    74,    75,
     124,   125,   126,   127,   128,     0,    66,     0,     0,     0,
     129,   130,     0,     0,     0,     0,   131,   132,   133,    73,
       0,    74,    75,    67,     0,     0,    69,     0,     0,    66,
     -44,     0,     0,     0,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,   129,   130,    67,     0,   204,    69,
     131,   132,   133,    73,     0,    74,    75,   124,   125,   126,
     127,   128,     0,    66,     0,     0,     0,   129,   130,     0,
      66,     0,     0,   131,   132,   133,    73,     0,    74,    75,
      67,     0,     0,    69,     0,     0,   -22,    67,   -22,   -22,
      69,     0,     0,     0,     0,   -22,    38,    39,     0,    40,
       0,    41,    42,     0,    43,     0,     0,     0,     0,    12,
      73,   201,    74,    75,     5,    44,     0,    73,     0,    74,
      75,    13,    14,    15,    16,    17,     0,     0,     0,    45,
      32,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      25,    26,   138,    70,    43,    25,    26,    20,    13,    14,
      15,    78,    10,    26,    39,    10,    83,    56,    16,    17,
      18,    60,    45,    62,    47,    92,    13,    94,    19,    68,
       0,    98,    30,    21,   101,    24,    27,    26,     1,   106,
      24,   108,    26,    34,    35,    84,   182,   114,   115,    25,
      26,    12,   119,   120,   121,    18,     1,    21,    21,   116,
     117,    24,     1,    26,     3,     4,    52,     6,    25,     8,
       9,   138,    11,   140,    13,    14,    15,    16,    13,    14,
      15,    16,    21,    22,    52,    48,    49,    50,    51,    13,
      14,    15,    16,    52,    39,    40,    41,    36,    43,    44,
      45,    46,    47,    50,    51,     1,   145,   174,   147,    19,
      19,     1,    34,    52,    35,   182,    52,    25,   185,   144,
     187,   146,    18,    19,   191,    21,    25,    52,    18,    19,
      27,    21,    28,    23,    52,     5,    25,    25,    28,    25,
      25,    37,    38,    25,    21,    52,     1,    37,    38,    21,
      25,    19,    48,    49,    50,    51,    52,    22,    48,    19,
      50,    51,    52,    18,    19,    27,    21,    34,    34,    52,
       1,    52,    52,    28,    26,    20,    25,    23,    25,    22,
     205,    22,    37,    38,    42,    21,    25,    18,    52,    24,
      21,     7,    24,    48,    25,    50,    51,    52,    29,    30,
      31,    32,    33,    34,     1,    25,    18,    22,    39,    40,
       1,    29,    52,    18,    45,    46,    47,    48,   199,    50,
      51,    18,   148,    11,    21,    -1,    -1,    18,    25,    -1,
      21,    -1,    29,    30,    31,    32,    33,    34,     1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    18,    -1,    48,    21,    50,
      51,    -1,    25,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,     1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    -1,    50,    51,    18,
      -1,    -1,    21,     1,    -1,     1,    25,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    13,    14,    15,    16,    17,
      39,    40,    18,    -1,    20,    21,    45,    46,    47,    48,
      -1,    50,    51,    29,    30,    31,    32,    33,    -1,     1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    50,    51,    18,    -1,    20,    21,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,    18,
      -1,    20,    21,    45,    46,    47,    48,    -1,    50,    51,
      29,    30,    31,    32,    33,    -1,     1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      -1,    50,    51,    18,    -1,    -1,    21,    -1,    -1,     1,
      25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    40,    18,    -1,    20,    21,
      45,    46,    47,    48,    -1,    50,    51,    29,    30,    31,
      32,    33,    -1,     1,    -1,    -1,    -1,    39,    40,    -1,
       1,    -1,    -1,    45,    46,    47,    48,    -1,    50,    51,
      18,    -1,    -1,    21,    -1,    -1,    24,    18,    26,    20,
      21,    -1,    -1,    -1,    -1,    26,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,     1,
      48,    49,    50,    51,    21,    22,    -1,    48,    -1,    50,
      51,    13,    14,    15,    16,    17,    -1,    -1,    -1,    36,
      22,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    54,    10,     0,    21,    55,    56,    12,    57,
      21,    64,     1,    13,    14,    15,    16,    17,    58,    59,
      61,    90,     1,    16,    65,    66,    70,    90,    91,    90,
      16,    90,    22,    59,    61,    52,    60,    55,     3,     4,
       6,     8,     9,    11,    22,    36,    52,    55,    82,    52,
      60,    90,    52,    25,    26,    25,    19,    73,    55,    80,
      19,    72,    34,    74,    35,    76,     1,    18,    19,    21,
      28,    37,    38,    48,    50,    51,    52,    79,    83,    87,
      88,    89,    52,    19,    27,    34,    35,    25,    25,    67,
      25,    52,    27,    52,    83,    25,     5,    25,    83,    25,
      75,    83,    25,    49,    77,    78,    83,    25,    83,    52,
      88,    21,    21,     1,    39,    40,    41,    43,    44,    45,
      46,    47,    84,    25,    29,    30,    31,    32,    33,    39,
      40,    45,    46,    47,    88,    63,    81,    88,    23,    71,
      83,    19,    27,    88,    20,    19,    20,    34,    34,    20,
      22,    52,    52,    88,    88,    89,    89,    52,    88,    88,
      88,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    45,    47,    86,    26,    20,    49,    63,    25,    68,
      69,    91,    23,    25,    55,    83,    55,    83,    78,    22,
      22,    42,    85,    21,    88,    25,    24,    24,    20,    26,
      52,    49,    62,    63,    20,     7,    88,    52,    69,    24,
      25,    24,    55,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    56,    55,    57,    57,    58,    58,    58,
      58,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    64,    64,    65,    67,    66,    66,    68,
      68,    68,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    72,    73,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    80,
      81,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     6,     4,     0,     2,     2,     1,
       1,     3,     4,     1,     3,     1,     6,     8,     2,     2,
       3,     1,     0,     2,     0,     3,     0,     6,     1,     3,
       1,     0,     2,     3,     5,     4,     4,     4,     4,     4,
       4,     6,     3,     0,     1,     3,     3,     4,     6,     4,
       2,     3,     1,     2,     3,     1,     1,     1,     1,     5,
       1,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     6,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     0,     1,     1,     1,
       2,     3,     4,     4,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 3: /* $@1: %empty  */
#line 120 "src/Sintact.y"
                               { TS_insertaMARCA() ; }
#line 1661 "src/y.tab.c"
    break;

  case 4: /* bloque: LLAVEIZQ $@1 declar_var_locales declar_funciones sentencias LLAVEDCH  */
#line 120 "src/Sintact.y"
                                                                                                               { TS_VaciarENTRADAS() ; }
#line 1667 "src/y.tab.c"
    break;

  case 14: /* nombres: nombres COMA ID  */
#line 138 "src/Sintact.y"
                                      { TS_insertaID(yyvsp[0]) ; }
#line 1673 "src/y.tab.c"
    break;

  case 15: /* nombres: ID  */
#line 139 "src/Sintact.y"
                         { TS_insertaID(yyvsp[0]) ; }
#line 1679 "src/y.tab.c"
    break;

  case 16: /* cuerpo_declar_const: TIPOCONST tipo_var_elem ID ASIGN exp_simple PYC  */
#line 141 "src/Sintact.y"
                                                                      { TS_insertaID(yyvsp[-3]) ; }
#line 1685 "src/y.tab.c"
    break;

  case 17: /* cuerpo_declar_const: TIPOCONST TIPOLISTA tipo_var_elem ID ASIGN CORIZQ asig_const_lista PYC  */
#line 142 "src/Sintact.y"
                                                                                             { TS_insertaID(yyvsp[-4]) ; }
#line 1691 "src/y.tab.c"
    break;

  case 26: /* $@2: %empty  */
#line 159 "src/Sintact.y"
                                  { TS_insertaFUNCION(yyvsp[0]) ; }
#line 1697 "src/y.tab.c"
    break;

  case 32: /* parametro: tipo_var ID  */
#line 166 "src/Sintact.y"
                                   { TS_insertaPARAMETRO(yyvsp[0]) ; }
#line 1703 "src/y.tab.c"
    break;

  case 34: /* sentencias: sentencias ID ASIGN sentencia_asig PYC  */
#line 173 "src/Sintact.y"
                                                             { comprobarEsTipo(buscarTipo(yyvsp[-3].lexema), yyvsp[-1].tipo) ; }
#line 1709 "src/y.tab.c"
    break;

  case 35: /* sentencias: sentencias IF sentencia_if PYC  */
#line 174 "src/Sintact.y"
                                                     { comprobarEsTipo(booleano, yyvsp[-1].tipo) ; }
#line 1715 "src/y.tab.c"
    break;

  case 36: /* sentencias: sentencias WHILE sentencia_while PYC  */
#line 175 "src/Sintact.y"
                                                           { comprobarEsTipo(booleano, yyvsp[-1].tipo) ; }
#line 1721 "src/y.tab.c"
    break;

  case 39: /* sentencias: sentencias RETURN sentencia_return PYC  */
#line 178 "src/Sintact.y"
                                                             { comprobarDevuelveTipoCorrecto(yyvsp[-1]) ; }
#line 1727 "src/y.tab.c"
    break;

  case 40: /* sentencias: sentencias DO sentencia_do_until PYC  */
#line 179 "src/Sintact.y"
                                                           { comprobarEsTipo(booleano, yyvsp[-1].tipo) ; }
#line 1733 "src/y.tab.c"
    break;

  case 41: /* sentencias: sentencias ID PARIZQ sentencia_funcion PARDCH PYC  */
#line 180 "src/Sintact.y"
                                                                        { yyval.tipo = buscarTipo(yyvsp[-4].lexema) ; }
#line 1739 "src/y.tab.c"
    break;

  case 44: /* sentencia_asig: exp  */
#line 184 "src/Sintact.y"
                          { yyval.tipo = yyvsp[0].tipo ; }
#line 1745 "src/y.tab.c"
    break;

  case 102: /* tipo_var_elem: TIPOVAR  */
#line 275 "src/Sintact.y"
                              { tipoTmp = yyvsp[0].tipo ; }
#line 1751 "src/y.tab.c"
    break;

  case 103: /* tipo_var_elem: TIPOCHAR  */
#line 276 "src/Sintact.y"
                               { tipoTmp = yyvsp[0].tipo ; }
#line 1757 "src/y.tab.c"
    break;

  case 104: /* tipo_var_elem: TIPOINT  */
#line 277 "src/Sintact.y"
                              { tipoTmp = yyvsp[0].tipo ; }
#line 1763 "src/y.tab.c"
    break;

  case 106: /* tipo_var: TIPOLISTA  */
#line 280 "src/Sintact.y"
                                { tipoTmp = yyvsp[0].tipo ; }
#line 1769 "src/y.tab.c"
    break;


#line 1773 "src/y.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 284 "src/Sintact.y"


#include "lex.yy.c"

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror( char *msg ){
	fprintf(stderr, "Line %d: %s\n", yylineno, msg) ;
}
