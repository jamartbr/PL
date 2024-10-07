%{
// ******************************************************
// ***
// *** Fichero : Lexico.lex
// *** Funcion : Especificación LEX del lenguaje
// ***
// *** Ultima modificación: 7-oct-2024
// ***
// ******************************************************

# include "tabla.h"
%}

%option noyywrap

/* ESTO HAY QUE ORDENARLO DE MENOR A MAYOR GENERALIDAD: palabras reservadas -> constantes -> identificador */

WHILE       "while"
DO          "do"
UNTIL       "until"
IF          "if"
ELSE        "else"
CIN         "cin"
COUT        "cout"
MAIN        "main"
RETURN      "return"
LOCAL       "local"
INT         "int"
TIPOVAR     ("float"|"char"|"bool")
TIPOLISTA   "list"
VALBOOL     ("TRUE"|"FALSE")
NUMERO      [0-9]+

PARIZQ      "("
PARDCH      ")"
LLAVEIZQ    "\{"
LLAVEDCH    "\}"
CORIZQ      "\["
CORDCH      "\]"
PYC         ";"
PUNTO       "."
COMA        ","
ASING       "="
SUMREST     ("+"|"-")
OPEMON      "!"
OPEBIN      (”*”|”/”|”%”|”==”|”!=”|”<”|”>”|”<=”|”>=”|”&”|”$”)
SEPENT      ">>"
SEPSAL      "<<"

ID          ([A-Z]|[a-z])([A-Z]|[a-z]|[0..9]|_)*

OTROS       .

%%

[ \t\n]+    ;
"while"     { return WHILE; }
"do"        { return DO; }
"until"     { return UNTIL; }
"if"        { return IF; }
"else"      { return ELSE; }
"cin"       { return CIN; }
"cout"      { return COUT; }
"main"      { return MAIN; }
"return"    { return RETURN; }
"local"     { return LOCAL; }
"int"       { return INT; }
"float"     { return TIPOVAR; }
"char"      { return TIPOVAR; }
"bool"      { return TIPOVAR; }
"list"      { return TIPOLISTA; }
"TRUE"      { return VALBOOL; }
"FALSE"     { return VALBOOL; }
[0-9]+      { return NUMERO; }
"("         { return PARIZQ; }
")"         { return PARDCH; }
"{"         { return LLAVEIZQ; }
"}"         { return LLAVEDCH; }
"["         { return CORIZQ; }
"]"         { return CORDCH; }
";"         { return PYC; }
"."         { return PUNTO; }
","         { return COMA; }
"="         { return ASING; }
"+"         { return SUMREST; }
"-"         { return SUMREST; }
"!"         { return OPEMON; }
"*"         { return OPEBIN; }
"/"         { return OPEBIN; }
"%"         { return OPEBIN; }
"=="        { return OPEBIN; }
"!="        { return OPEBIN; }
"<"         { return OPEBIN; }
">"         { return OPEBIN; }
"<="        { return OPEBIN; }
">="        { return OPEBIN; }
"&"         { return OPEBIN; }
"$"         { return OPEBIN; }
">>"        { return SEPENT; }
"<<"        { return SEPSAL; }

([A-Z]|[a-z])([A-Z]|[a-z]|[0..9]|_)*   { return ID; }

.           { printf ("\n[Línea %2d] *** Error léxico : %s\n", yylineno , yytext ); }

%%

int main ( int argc, char ** argv )
{
    int val ;

    printf ("Analizador de Léxico - Lenguaje C\n\n");
    ++argv, --argc; /* saltamos el nombre del ejecutable */
    if ( argc > 0)
        yyin = fopen(argv [0], "r");
    else
        yyin = stdin ;

    val = yylex() ;
    while (val != 0)
    {
        printf (" %d \n", val);
        val = yylex() ;
    }
    exit(0);
}
