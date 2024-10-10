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
COMA        ","
ASING       "="
SUMREST     ("+"|"-")
OPEMON      ("!"|"?"|"#")
OPEBIN      ("*"|"/"|"%"|"=="|"!="|"<"|">"|"<="|">="|"@"|"%"|"++"|"--"|"**"|"and"|"or"|"xor")
AVANZAR     ">>"
RETROCEDER  "<<"
INICIO      "$"

NUMERO      (\+|\-)?([1-9][0-9]*|0)(\.[0-9]+)? 

ID          ([A-Za-z])([A-Za-z]|[0-9]|_)*

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
"!"         { token = "OPEMON"; atributo = 0; return OPEMON; }
"?"         { token = "OPEMON"; atributo = 1; return OPEMON; }
"#"         { token = "OPEMON"; atributo = 2; return OPEMON; }
"*"         { token = "OPEBIN"; atributo = 0; return OPEBIN; }
"/"         { token = "OPEBIN"; atributo = 1; return OPEBIN; }
"%"         { token = "OPEBIN"; atributo = 2; return OPEBIN; }
"=="        { token = "OPEBIN"; atributo = 3; return OPEBIN; }
"!="        { token = "OPEBIN"; atributo = 4; return OPEBIN; }
"<"         { token = "OPEBIN"; atributo = 5; return OPEBIN; }
">"         { token = "OPEBIN"; atributo = 6; return OPEBIN; }
"<="        { token = "OPEBIN"; atributo = 7; return OPEBIN; }
">="        { token = "OPEBIN"; atributo = 8; return OPEBIN; }
"@"         { token = "OPEBIN"; atributo = 9; return OPEBIN; }
"%"         { token = "OPEBIN"; atributo = 10; return OPEBIN; }
"++"        { token = "OPEBIN"; atributo = 11; return OPEBIN; }
"--"        { token = "OPEBIN"; atributo = 12; return OPEBIN; }
"**"        { token = "OPEBIN"; atributo = 13; return OPEBIN; }
"and"       { token = "OPEBIN"; atributo = 14; return OPEBIN; }
"or"        { token = "OPEBIN"; atributo = 15; return OPEBIN; }
"xor"       { token = "OPEBIN"; atributo = 16; return OPEBIN; }
">>"        { token = "AVANZAR"; return AVANZAR; }
"<<"        { token = "RETROCEDER"; return RETROCEDER; }
"$"         { token = "INICIO"; return INICIO; }

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
            printf ("[%15s] :: %s \n", yytext, token);
        else
            printf ("[%15s] :: %s \t :: atrib=%d (%s)\n", yytext, token, atributo, yytext);

        atributo = -1;
        codigo = yylex();
    }
    exit(0);
}
