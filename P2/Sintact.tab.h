/* A Bison parser, made by GNU Bison 3.8.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTACT_TAB_H_INCLUDED
# define YY_YY_SINTACT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    WHILE = 258,                   /* WHILE  */
    DO = 259,                      /* DO  */
    UNTIL = 260,                   /* UNTIL  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    CIN = 263,                     /* CIN  */
    COUT = 264,                    /* COUT  */
    MAIN = 265,                    /* MAIN  */
    RETURN = 266,                  /* RETURN  */
    LOCAL = 267,                   /* LOCAL  */
    TIPOINT = 268,                 /* TIPOINT  */
    TIPOCHAR = 269,                /* TIPOCHAR  */
    TIPOVAR = 270,                 /* TIPOVAR  */
    TIPOLISTA = 271,               /* TIPOLISTA  */
    TIPOCONST = 272,               /* TIPOCONST  */
    VALBOOL = 273,                 /* VALBOOL  */
    PARIZQ = 274,                  /* PARIZQ  */
    PARDCH = 275,                  /* PARDCH  */
    LLAVEIZQ = 276,                /* LLAVEIZQ  */
    LLAVEDCH = 277,                /* LLAVEDCH  */
    CORIZQ = 278,                  /* CORIZQ  */
    CORDCH = 279,                  /* CORDCH  */
    PYC = 280,                     /* PYC  */
    COMA = 281,                    /* COMA  */
    ASIGN = 282,                   /* ASIGN  */
    OPEMON = 283,                  /* OPEMON  */
    OPEBIN = 284,                  /* OPEBIN  */
    SIG = 285,                     /* SIG  */
    ANT = 286,                     /* ANT  */
    DOLLAR = 287,                  /* DOLLAR  */
    OPEMONLIST = 288,              /* OPEMONLIST  */
    OPEBINLIST = 289,              /* OPEBINLIST  */
    AT = 290,                      /* AT  */
    PLUSPLUS = 291,                /* PLUSPLUS  */
    MINUSMINUS = 292,              /* MINUSMINUS  */
    TIMESTIMES = 293,              /* TIMESTIMES  */
    PLUS = 294,                    /* PLUS  */
    MINUS = 295,                   /* MINUS  */
    TIMES = 296,                   /* TIMES  */
    CHAR = 297,                    /* CHAR  */
    CADENA = 298,                  /* CADENA  */
    NUMERO = 299,                  /* NUMERO  */
    ENTERO = 300,                  /* ENTERO  */
    ID = 301                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINTACT_TAB_H_INCLUDED  */
