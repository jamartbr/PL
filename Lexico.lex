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



char* token;
int atributo = -1;

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
VALBOOL     ("FALSE"|"TRUE")

PARIZQ      "("
PARDCH      ")"
LLAVEIZQ    "\{"
LLAVEDCH    "\}"
CORIZQ      "\["
CORDCH      "\]"
PYC         ";"
/*PUNTO       "."*/
COMA        ","
ASING       "="
SUMREST     ("+"|"-")
OPEMON      "!"
OPEBIN      ("*"|"/"|"%"|"=="|"!="|"<"|">"|"<="|">="|"&"|"$")
SEPENT      ">>"
SEPSAL      "<<"


ID          ([A-Za-z])([A-Za-z]|[0-9]|_)*

NUMERO      (\+|\-)?([1-9][0-9]*|0)(\.[0-9]+)? 

OTROS       .

%%

[ \t\n]+    ;
"while"     { token = "WHILE"; return WHILE; }
"do"        { token = "DO"; return DO; }
"until"     { token = "UNTIL"; return UNTIL; }
"if"        { token = "IF"; return IF; }
"else"      { token = "ELSE"; return ELSE; }
"cin"       { token = "CIN"; return CIN; }
"cout"      { token = "COUT"; return COUT; }
"main"      { token = "MAIN"; return MAIN; }
"return"    { token = "RETURN"; return RETURN; }
"local"     { token = "LOCAL"; return LOCAL; }
"int"       { token = "INT"; return INT; }
"float"     { token = "TIPOVAR"; atributo = 0; return TIPOVAR; }
"char"      { token = "TIPOVAR"; atributo = 1; return TIPOVAR; }
"bool"      { token = "TIPOVAR"; atributo = 2; return TIPOVAR; }
"list"      { token = "TIPOLISTA"; return TIPOLISTA; }
"TRUE"      { token = "VALBOOL"; atributo = 1; return VALBOOL; }
"FALSE"     { token = "VALBOOL"; atributo = 0; return VALBOOL; }
"("         { token = "PARIZQ"; return PARIZQ; }
")"         { token = "PARDCH"; return PARDCH; }
"{"         { token = "LLAVEIZQ"; return LLAVEIZQ; }
"}"         { token = "LLAVEDCH"; return LLAVEDCH; }
"["         { token = "CORIZQ"; return CORIZQ; }
"]"         { token = "CORDCH"; return CORDCH; }
";"         { token = "PYC"; return PYC; }
","         { token = "COMA"; return COMA; }
"="         { token = "ASING"; return ASING; }
"+"         { token = "SUMREST"; atributo = 0; return SUMREST; }
"-"         { token = "SUMREST"; atributo = 1; return SUMREST; }
"!"         { token = "OPEMON"; return OPEMON; }
"*"         { token = "OPEBIN"; atributo = 0; return OPEBIN; }
"/"         { token = "OPEBIN"; atributo = 1; return OPEBIN; }
"%"         { token = "OPEBIN"; atributo = 2; return OPEBIN; }
"=="        { token = "OPEBIN"; atributo = 3; return OPEBIN; }
"!="        { token = "OPEBIN"; atributo = 4; return OPEBIN; }
"<"         { token = "OPEBIN"; atributo = 5; return OPEBIN; }
">"         { token = "OPEBIN"; atributo = 6; return OPEBIN; }
"<="        { token = "OPEBIN"; atributo = 7; return OPEBIN; }
">="        { token = "OPEBIN"; atributo = 8; return OPEBIN; }
"&"         { token = "OPEBIN"; atributo = 9; return OPEBIN; }
"$"         { token = "OPEBIN"; atributo = 10; return OPEBIN; }
">>"        { token = "SEPENT"; return SEPENT; }
"<<"        { token = "SEPSAL"; return SEPSAL; }

(\+|\-)?([1-9][0-9]*|0)(\.[0-9]+)?  { token = "NUMERO"; return NUMERO;}

([A-Za-z])([A-Za-z]|[0-9]|_)*       { token = "ID"; return ID; }

.           { printf ("\n[Línea %2d] *** Error léxico : %s\n\n", yylineno , yytext ); }

%%

int main ( int argc, char ** argv )
{
    int codigo;

    printf ("Analizador de Léxico - Lenguaje C\n\n");
    ++argv, --argc; /* saltamos el nombre del ejecutable */
    if ( argc > 0)
        yyin = fopen(argv [0], "r");
    else
        yyin = stdin;

    codigo = yylex();
    while (codigo != 0)
    {
        if (atributo == -1)
            printf ("[\t%s\t] :: %s \n", yytext, token);
        else
            printf ("[\t%s\t] :: %s \t :: atrib=%d (%s)\n", yytext, token, atributo, yytext);
            
        atributo = -1;
        codigo = yylex();
    }
    exit(0);
}
