%{
// ******************************************************
// ***
// *** Fichero : LEXICO.LEX
// *** Función : Especificación LEX del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ******************************************************

// La declaración posterior indica que no se va a escribir la función 'yywrap '
// evita que se tenga que enlazar con -lfl , o que se tenga que escribir dicha
// función.

# include "Sintact.tab.h"



char* token;
int atrib = -1;

// La siguiente orden incluye la tabla de tokens obtenida en BISON

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
LLAVEIZQ    "{"
LLAVEDCH    "}"
CORIZQ      "["
CORDCH      "]"
PYC         ";"
COMA        ","
ASIGN       "="
OPEMON      "!"
OR          "or"
AND         "and"
XOR         "xor"
EQ          ("=="|"!=")
REL         ("<"|">"|"<="|">=")
SIG         ">>"
ANT         "<<"
DOLLAR      "$"
HASHTAG     "#"
INTERR      "?"
DIV         "/"
MOD         "%"
AT          "@"
PLUSPLUS    "++"
MINUSMINUS  "--"
TIMESTIMES  "**"
PLUS        "+"
MINUS       "-"
TIMES       "*"

CHAR        '[A-Za-z]'
CADENA      \"([^\"\n]|\\\")*\"
NUMERO      (\+|-)?([1-9][0-9]*|0)(\.[0-9]+)? 
ENTERO      (\+|-)?([1-9][0-9]*|0)

ID          ([A-Za-z])([A-Za-z]|[0-9]|_)*

OTROS       .

%%

[ \t\n]+      ;
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
"int"       { yylval.dtipo = entero; return TIPOINT; }
"float"     { yylval.atrib = 0; yylval.dtipo = real; return TIPOVAR; }
"bool"      { yylval.atrib = 1; yylval.dtipo = booleano; return TIPOVAR; }
"char"      { yylval.dtipo = caracter; return TIPOCHAR; }
"list"      { yylval.dtipo = lista; return TIPOLISTA; }
"const"     { return TIPOCONST; }
"FALSE"     { yylval.atrib = 0; return VALBOOL; }
"TRUE"      { yylval.atrib = 1; return VALBOOL; }
"("         { return PARIZQ; }
")"         { return PARDCH; }
"{"         { return LLAVEIZQ; }
"}"         { return LLAVEDCH; }
"["         { return CORIZQ; }
"]"         { return CORDCH; }
";"         { return PYC; }
","         { return COMA; }
"="         { return ASIGN; }
"!"         { return OPEMON; }
"=="        { yylval.atrib = 0; return EQ; }
"!="        { yylval.atrib = 1; return EQ; }
"<"         { yylval.atrib = 0; return REL; }
">"         { yylval.atrib = 1; return REL; }
"<="        { yylval.atrib = 2; return REL; }
">="        { yylval.atrib = 3; return REL; }
"and"       { return AND; }
"or"        { return OR; }
"xor"       { return XOR; }
">>"        { return SIG; }
"<<"        { return ANT; }
"$"         { return DOLLAR; }
"?"         { return INTERR; }
"#"         { return HASHTAG; }
"/"         { return DIV; }
"%"         { return MOD; }
"@"         { return AT; }
"++"        { return PLUSPLUS; }
"--"        { return MINUSMINUS; }
"**"        { return TIMESTIMES; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return TIMES; }
'[A-Za-z]?'                         { yylval.atrib=-2; yylval.dtipo = caracter; return CHAR; }
\"([^\"\n]|\\\")*\"                 { yylval.atrib=-2; yylval.dtipo = lista; return CADENA; }
(\+|-)?([1-9][0-9]*|0)                     { yylval.atrib=-2; yylval.dtipo = entero; return ENTERO; }
(\+|-)?([1-9][0-9]*|0)(\.[0-9]+)?          { yylval.atrib=-2; yylval.dtipo = real; return NUMERO; }
([A-Za-z])([A-Za-z]|[0-9]|_)*       { yylval.atrib=-2; yylval.lexema = strdup(yytext); return ID; }
.                                   { printf ("\n[Línea %2d] *** Error léxico : %s\n\n", yylineno , yytext ); }

%%

// int main ( int argc, char ** argv )
// {
//     int codigo;

//     printf ("Analizador de Léxico - Lenguaje C\n\n");
//     ++argv, --argc; /* saltamos el nombre del ejecutable */
//     if ( argc > 0)
//         yyin = fopen(argv [0], "r");
//     else
//         yyin = stdin;

//     codigo = yylex();
//     while (codigo != 0)
//     {
//         printf("\n");
//         if (atrib == -1)
//             printf ("[%15s] :: %s \n", yytext, token);
//         else if (atrib == -2)
//             printf ("[%15s] :: %s \t :: lexema = %s\n", yytext, token, yytext);
//         else
//             printf ("[%15s] :: %s \t :: atrib = %d (%s)\n", yytext, token, atrib, yytext);

//         atrib = -1;
//         codigo = yylex();
//     }
//     exit(0);
// }
