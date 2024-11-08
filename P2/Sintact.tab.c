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
#line 1 "Sintact.y"

// ************************************************************
// ***
// *** Fichero : SINTACT.Y
// *** Función : Especificación BISON del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ************************************************************

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int yylex ();
void yyerror ( const char *);


#line 90 "Sintact.tab.c"

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

#include "Sintact.tab.h"
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
  YYSYMBOL_SALTO = 53,                     /* SALTO  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_programa = 55,                  /* programa  */
  YYSYMBOL_bloque = 56,                    /* bloque  */
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
  YYSYMBOL_parametros = 67,                /* parametros  */
  YYSYMBOL_parametro = 68,                 /* parametro  */
  YYSYMBOL_sentencias = 69,                /* sentencias  */
  YYSYMBOL_sentencia_asig = 70,            /* sentencia_asig  */
  YYSYMBOL_sentencia_if = 71,              /* sentencia_if  */
  YYSYMBOL_sentencia_while = 72,           /* sentencia_while  */
  YYSYMBOL_sentencia_entrada = 73,         /* sentencia_entrada  */
  YYSYMBOL_datos_entrada = 74,             /* datos_entrada  */
  YYSYMBOL_sentencia_salida = 75,          /* sentencia_salida  */
  YYSYMBOL_datos_salida = 76,              /* datos_salida  */
  YYSYMBOL_dato_salida = 77,               /* dato_salida  */
  YYSYMBOL_sentencia_return = 78,          /* sentencia_return  */
  YYSYMBOL_sentencia_do_until = 79,        /* sentencia_do_until  */
  YYSYMBOL_sentencia_funcion = 80,         /* sentencia_funcion  */
  YYSYMBOL_sentencia_lista = 81,           /* sentencia_lista  */
  YYSYMBOL_exp = 82,                       /* exp  */
  YYSYMBOL_exp_lista_ID = 83,              /* exp_lista_ID  */
  YYSYMBOL_op_ternario = 84,               /* op_ternario  */
  YYSYMBOL_aux = 85,                       /* aux  */
  YYSYMBOL_termino = 86,                   /* termino  */
  YYSYMBOL_exp_simple = 87,                /* exp_simple  */
  YYSYMBOL_num = 88,                       /* num  */
  YYSYMBOL_tipo_var_elem = 89,             /* tipo_var_elem  */
  YYSYMBOL_tipo_var = 90,                  /* tipo_var  */
  YYSYMBOL_salto_llave = 91,               /* salto_llave  */
  YYSYMBOL_salto_pyc = 92                  /* salto_pyc  */
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
#define YYLAST   577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   111,   117,   118,   120,   121,   122,   123,
     125,   126,   127,   129,   130,   132,   133,   135,   136,   138,
     139,   140,   145,   146,   148,   150,   151,   153,   154,   155,
     157,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   175,   176,   177,   179,   180,   182,   184,   186,
     187,   189,   191,   192,   194,   195,   197,   199,   201,   203,
     204,   205,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   239,   240,   242,   243,   246,   247,   248,
     249,   250,   251,   253,   254,   255,   256,   257,   259,   260,
     266,   267,   268,   270,   271,   274,   275,   276,   278
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
  "NUMERO", "ENTERO", "ID", "SALTO", "$accept", "programa", "bloque",
  "declar_var_locales", "var_locales", "cuerpo_declar_var", "nombres",
  "cuerpo_declar_const", "asig_const_lista", "items", "declar_funciones",
  "declar_funcion", "cabec_funcion", "parametros", "parametro",
  "sentencias", "sentencia_asig", "sentencia_if", "sentencia_while",
  "sentencia_entrada", "datos_entrada", "sentencia_salida", "datos_salida",
  "dato_salida", "sentencia_return", "sentencia_do_until",
  "sentencia_funcion", "sentencia_lista", "exp", "exp_lista_ID",
  "op_ternario", "aux", "termino", "exp_simple", "num", "tipo_var_elem",
  "tipo_var", "salto_llave", "salto_pyc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,    -2,    32,    31,  -141,     1,  -141,  -141,  -141,    -6,
      34,  -141,  -141,     1,    73,    55,  -141,  -141,  -141,  -141,
    -141,  -141,    31,   525,  -141,    -7,  -141,    78,   183,    97,
    -141,    48,     5,    48,    56,    31,    59,    46,    61,   165,
    -141,    45,    -9,    48,    48,    83,     5,    78,    64,     1,
    -141,    48,     1,  -141,  -141,    -5,  -141,   165,    48,   112,
      48,   165,    48,   165,    48,   122,    48,  -141,  -141,   165,
      66,   144,    99,   100,  -141,  -141,  -141,    60,    48,   291,
    -141,  -141,  -141,  -141,   476,   130,  -141,  -141,  -141,  -141,
     217,   101,    77,   107,    89,  -141,    89,  -141,    92,   314,
    -141,   127,  -141,   348,  -141,   118,   189,  -141,  -141,   121,
    -141,   223,  -141,   371,   135,  -141,   111,   117,  -141,   144,
     144,   -23,   -23,   123,   144,   144,   144,  -141,  -141,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   -38,
     138,   141,  -141,   462,    48,   405,    -3,  -141,   124,   150,
     144,  -141,    31,   165,    31,   165,   122,  -141,  -141,   157,
     163,  -141,  -141,   146,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   168,   144,    48,   167,    14,  -141,  -141,   217,  -141,
     177,  -141,  -141,   428,   194,   257,  -141,  -141,  -141,   144,
    -141,   152,  -141,  -141,  -141,  -141,  -141,   469,  -141,    31,
    -141,   184,   181,  -141,    24,  -141,  -141,  -141,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,   107,   106,     5,
       0,   105,    23,     0,     0,     0,    26,   102,   101,   100,
     104,    22,     0,     0,   103,     0,    12,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     9,    14,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    95,     0,
       0,     0,     0,     0,    94,    98,    99,     0,     0,     0,
      73,    87,    93,    61,     0,     0,    59,    60,    31,    40,
      29,    11,     0,     0,     4,     7,   108,    10,     0,     0,
      34,     0,    38,     0,    33,    48,     0,    35,    55,    51,
      53,     0,    36,     0,     0,    88,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    20,     0,     0,     0,     0,    28,     0,     0,
       0,    13,     0,     0,     0,     0,     0,    89,    96,     0,
       0,    80,    81,    84,    75,    76,    77,    78,    79,    65,
      66,    67,    69,    68,    70,    71,    62,    63,    64,    85,
      86,     0,     0,     0,     0,     0,    32,    25,     0,    30,
       0,    15,    47,     0,    45,     0,    52,    91,    90,     0,
      74,     0,    19,    39,    44,    43,    27,     0,    57,     0,
      83,     0,     0,    16,     0,    46,    72,    18,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,   -22,  -141,  -141,   179,   166,   180,  -141,  -140,
    -141,  -141,  -141,  -141,    23,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,    69,  -141,  -141,  -141,  -141,   -27,  -141,
    -141,  -141,   419,   -60,   -59,   109,   212,    -8,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,    12,    29,    30,    55,    31,   213,   140,
      14,    21,    22,   146,   147,    23,   144,    62,    58,    64,
     105,    66,   109,   110,    78,    60,   141,    44,   111,   127,
     200,   181,    80,    81,    82,    24,   148,     9,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    43,     7,   185,    56,    15,    10,   179,     3,   180,
      84,   115,    79,    59,    88,    89,     1,   187,    85,   139,
      97,    98,    95,   188,   142,    86,    87,    75,    76,   100,
      99,   102,     4,   104,   103,   107,   106,   112,   205,   139,
     182,    94,   113,   139,    96,    45,   139,    11,   218,   128,
     182,   139,     5,   139,     8,    13,    26,    54,   145,   161,
     162,   118,   163,   164,   166,   167,   168,   214,    17,    18,
      19,    27,    28,    52,    16,    57,   -41,   -41,    61,   -41,
      63,   -41,   -41,   142,   -41,   139,    17,    18,    19,    20,
     191,    17,    18,    19,   -41,   -41,    65,    83,    26,   119,
     120,   121,    90,   122,   123,   124,   125,   126,    11,   -41,
      17,    18,    19,    27,    28,   186,    93,   101,   114,    49,
     116,   117,   202,    67,    32,   -41,   193,    98,   195,   149,
     192,    67,   194,   139,   150,   139,    46,    48,    32,   210,
      68,    69,    11,    70,   151,    67,   153,   142,    68,    69,
      71,    70,   155,   143,   203,   156,    92,   158,    71,    72,
      73,   183,    68,   159,   182,    70,    67,    72,    73,   160,
      74,   108,    75,    76,    77,   165,   189,   190,    74,   197,
      75,    76,    77,    68,    69,   198,    70,   215,   199,   201,
      67,   204,    74,    71,    75,    76,    17,    18,    19,    47,
     207,   209,    72,    73,   211,   217,   216,    68,    50,    51,
      70,   206,    91,    74,   -50,    75,    76,    77,   129,   130,
     131,   132,   133,   -50,    67,   196,    25,     0,   134,   135,
      17,    18,    19,    20,   136,   137,   138,    74,     0,    75,
      76,    68,     0,     0,    70,     0,     0,     0,   -54,     0,
       0,     0,   129,   130,   131,   132,   133,   -54,    67,     0,
       0,     0,   134,   135,     0,     0,     0,     0,   136,   137,
     138,    74,     0,    75,    76,    68,     0,     0,    70,     0,
       0,     0,   -49,     0,     0,     0,   129,   130,   131,   132,
     133,   -49,    67,     0,     0,     0,   134,   135,     0,     0,
       0,     0,   136,   137,   138,    74,     0,    75,    76,    68,
       0,     0,    70,     0,     0,    67,   -56,     0,     0,     0,
     129,   130,   131,   132,   133,     0,     0,     0,     0,     0,
     134,   135,    68,     0,   152,    70,   136,   137,   138,    74,
       0,    75,    76,   129,   130,   131,   132,   133,     0,    67,
       0,     0,     0,   134,   135,     0,     0,     0,     0,   136,
     137,   138,    74,     0,    75,    76,    68,     0,   154,    70,
       0,     0,    67,     0,     0,     0,     0,   129,   130,   131,
     132,   133,     0,     0,     0,     0,     0,   134,   135,    68,
       0,   157,    70,   136,   137,   138,    74,     0,    75,    76,
     129,   130,   131,   132,   133,     0,    67,     0,     0,     0,
     134,   135,     0,     0,     0,     0,   136,   137,   138,    74,
       0,    75,    76,    68,     0,     0,    70,     0,     0,    67,
     -42,     0,     0,     0,   129,   130,   131,   132,   133,     0,
       0,     0,     0,     0,   134,   135,    68,     0,   208,    70,
     136,   137,   138,    74,     0,    75,    76,   129,   130,   131,
     132,   133,     0,    67,     0,     0,     0,   134,   135,     0,
      67,     0,     0,   136,   137,   138,    74,    67,    75,    76,
      68,     0,     0,    70,     0,     0,   -21,    68,   -21,     0,
      70,     0,     0,   -21,    68,   -21,   -21,    70,     0,     0,
       0,     0,   -21,     0,     0,     0,     0,     0,     0,     0,
      74,   184,    75,    76,     0,     0,     0,    74,   212,    75,
      76,     0,     0,     0,    74,     0,    75,    76,    34,    35,
       0,    36,     0,    37,    38,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    40,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42
};

static const yytype_int16 yycheck[] =
{
      22,    23,     1,   143,    33,    13,    12,    45,    10,    47,
      19,    71,    39,    35,    43,    44,    13,    20,    27,    79,
      25,    26,    51,    26,    84,    34,    35,    50,    51,    58,
      57,    60,     0,    62,    61,    64,    63,    66,    24,    99,
      26,    49,    69,   103,    52,    52,   106,    53,    24,    78,
      26,   111,    21,   113,    53,    21,     1,    52,    85,   119,
     120,     1,   121,   122,   124,   125,   126,   207,    13,    14,
      15,    16,    17,    25,     1,    19,     3,     4,    19,     6,
      34,     8,     9,   143,    11,   145,    13,    14,    15,    16,
     150,    13,    14,    15,    21,    22,    35,    52,     1,    39,
      40,    41,    19,    43,    44,    45,    46,    47,    53,    36,
      13,    14,    15,    16,    17,   144,    52,     5,    52,    22,
      21,    21,   182,     1,    15,    52,   153,    26,   155,    52,
     152,     1,   154,   193,    27,   195,    27,    28,    29,   199,
      18,    19,    53,    21,    52,     1,    19,   207,    18,    19,
      28,    21,    34,    23,   183,    34,    47,    22,    28,    37,
      38,    20,    18,    52,    26,    21,     1,    37,    38,    52,
      48,    49,    50,    51,    52,    52,    52,    27,    48,    22,
      50,    51,    52,    18,    19,    22,    21,   209,    42,    21,
       1,    24,    48,    28,    50,    51,    13,    14,    15,    16,
      23,     7,    37,    38,    52,    24,    22,    18,    29,    29,
      21,   188,    46,    48,    25,    50,    51,    52,    29,    30,
      31,    32,    33,    34,     1,   156,    14,    -1,    39,    40,
      13,    14,    15,    16,    45,    46,    47,    48,    -1,    50,
      51,    18,    -1,    -1,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,     1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    18,    -1,    -1,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,     1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    -1,    50,    51,    18,
      -1,    -1,    21,    -1,    -1,     1,    25,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
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
       1,    -1,    -1,    45,    46,    47,    48,     1,    50,    51,
      18,    -1,    -1,    21,    -1,    -1,    24,    18,    26,    -1,
      21,    -1,    -1,    24,    18,    26,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    48,    -1,    50,    51,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    55,    10,     0,    21,    56,     1,    53,    91,
      12,    53,    57,    21,    64,    91,     1,    13,    14,    15,
      16,    65,    66,    69,    89,    90,     1,    16,    17,    58,
      59,    61,    89,    56,     3,     4,     6,     8,     9,    11,
      22,    36,    52,    56,    81,    52,    89,    16,    89,    22,
      59,    61,    25,    92,    52,    60,    92,    19,    72,    56,
      79,    19,    71,    34,    73,    35,    75,     1,    18,    19,
      21,    28,    37,    38,    48,    50,    51,    52,    78,    82,
      86,    87,    88,    52,    19,    27,    34,    35,    92,    92,
      19,    60,    89,    52,    91,    92,    91,    25,    26,    82,
      92,     5,    92,    82,    92,    74,    82,    92,    49,    76,
      77,    82,    92,    82,    52,    87,    21,    21,     1,    39,
      40,    41,    43,    44,    45,    46,    47,    83,    92,    29,
      30,    31,    32,    33,    39,    40,    45,    46,    47,    87,
      63,    80,    87,    23,    70,    82,    67,    68,    90,    52,
      27,    52,    20,    19,    20,    34,    34,    20,    22,    52,
      52,    87,    87,    88,    88,    52,    87,    87,    87,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    45,
      47,    85,    26,    20,    49,    63,    92,    20,    26,    52,
      27,    87,    56,    82,    56,    82,    77,    22,    22,    42,
      84,    21,    87,    92,    24,    24,    68,    23,    20,     7,
      87,    52,    49,    62,    63,    56,    22,    24,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    64,    64,    65,    66,    66,    67,    67,    67,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    73,    74,
      74,    75,    76,    76,    77,    77,    78,    79,    80,    81,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    89,    90,    90,    91,    91,    91,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     6,     0,     2,     3,     1,     2,
       3,     3,     1,     3,     1,     5,     7,     2,     2,     3,
       1,     0,     2,     0,     3,     5,     1,     3,     1,     0,
       2,     3,     5,     4,     4,     4,     4,     4,     4,     6,
       3,     0,     1,     3,     3,     4,     6,     4,     2,     3,
       1,     2,     3,     1,     1,     1,     1,     5,     1,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     6,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     0,     1,     1,     1,     2,     3,
       4,     4,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2
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

#line 1656 "Sintact.tab.c"

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

#line 282 "Sintact.y"
