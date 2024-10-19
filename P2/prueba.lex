%{
// ***********************************************************
// **
// ** Fichero : PRUEBA. LEX
// ** Funcion : Pruebas de FLEX para prácticas de PL.
// **
// ***********************************************************

// La siguiente orden incluye la tabla de tokens obtenida en BISON
// y la declaración posterior indica que no se va a escribir la función 'yywrap '
// evita que se tenga que enlazar con -lfl , o que se tenga que escribir dicha
// función.

# include "Sintact.tab.h"



char* token;
int atributo = -1;

%}

%option noyywrap

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
TIPOINT     "int"
TIPOCHAR    "char"
TIPOVAR     ("float"|"bool")
TIPOLISTA   "list"
TIPOCONST   "const"
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
OPEMON      "!"
OPEBIN      ("=="|"!="|"<"|">"|"<="|">="|"and"|"or"|"xor")
SIG         ">>"
ANT         "<<"
DOLLAR      "$"
OPEMONLIST  ("#"|"?")
OPEBINLIST  ("/"|"%")
AT          "@"
PLUSPLUS    "++"
MINUSMINUS  "--"
TIMESTIMES  "**"
PLUS        "+"
MINUS       "-"
TIMES       "*"

CHAR        '[A-Za-z]'
CADENA      \"([^\"\n]|\\\")*\"
NUMERO      ([1-9][0-9]*|0)(\.[0-9]+)? 
ENTERO      ([1-9][0-9]*|0)

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
"int"       { token = "TIPOINT"; return TIPOINT; }
"float"     { token = "TIPOVAR"; atributo = 0; return TIPOVAR; }
"char"      { token = "TIPOCHAR"; return TIPOCHAR; }
"bool"      { token = "TIPOVAR"; atributo = 2; return TIPOVAR; }
"list"      { token = "TIPOLISTA"; return TIPOLISTA; }
"const"     { token = "TIPOCONST"; return TIPOCONST; }
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
"!"         { token = "OPEMON"; return OPEMON; }
"=="        { token = "OPEBIN"; atributo = 0; return OPEBIN; }
"!="        { token = "OPEBIN"; atributo = 1; return OPEBIN; }
"<"         { token = "OPEBIN"; atributo = 2; return OPEBIN; }
">"         { token = "OPEBIN"; atributo = 3; return OPEBIN; }
"<="        { token = "OPEBIN"; atributo = 4; return OPEBIN; }
">="        { token = "OPEBIN"; atributo = 5; return OPEBIN; }
"and"       { token = "OPEBIN"; atributo = 6; return OPEBIN; }
"or"        { token = "OPEBIN"; atributo = 7; return OPEBIN; }
"xor"       { token = "OPEBIN"; atributo = 8; return OPEBIN; }
">>"        { token = "SIG"; return SIG; }
"<<"        { token = "ANT"; return ANT; }
"$"         { token = "DOLLAR"; return DOLLAR; }
"?"         { token = "OPEMONLIST"; atributo = 0; return OPEMONLIST; }
"#"         { token = "OPEMONLIST"; atributo = 1; return OPEMONLIST; }
"/"         { token = "OPEBINLIST"; atributo = 2; return OPEBINLIST; }
"%"         { token = "OPEBINLIST"; atributo = 1; return OPEBINLIST; }
"@"         { token = "AT"; return AT; }
"++"        { token = "PLUSPLUS"; return PLUSPLUS; }
"--"        { token = "MINUSMINUS"; return MINUSMINUS; }
"**"        { token = "TIMESTIMES"; return TIMESTIMES; }
"+"         { token = "PLUS"; return PLUS; }
"-"         { token = "MINUS"; return MINUS; }
"*"         { token = "TIMES"; return TIMES; }

'[A-Za-z]?'                         { token = "CHAR"; atributo=-2; return CHAR; }
\"([^\"\n]|\\\")*\"                 { token = "CADENA"; atributo=-2; return CADENA; }
([1-9][0-9]*|0)                     { token = "ENTERO"; atributo=-2; return ENTERO; }
([1-9][0-9]*|0)(\.[0-9]+)?             { token = "NUMERO"; atributo=-2; return NUMERO; }
([A-Za-z])([A-Za-z]|[0-9]|_)*       { token = "ID"; atributo=-2; return ID; }

.                                   { printf ("\n[Línea %2d] *** Error léxico : %s\n\n", yylineno , yytext ); }

%%