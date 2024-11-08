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
int atributo = -1;

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

SALTO       [\n]+

OTROS       .

%%

[ \t]+      ;
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
"="         { token = "ASIGN"; return ASIGN; }
"!"         { token = "OPEMON"; return OPEMON; }
"=="        { token = "EQ"; atributo = 0; return EQ; }
"!="        { token = "EQ"; atributo = 1; return EQ; }
"<"         { token = "REL"; atributo = 0; return REL; }
">"         { token = "REL"; atributo = 1; return REL; }
"<="        { token = "REL"; atributo = 2; return REL; }
">="        { token = "REL"; atributo = 3; return REL; }
"and"       { token = "AND"; return AND; }
"or"        { token = "OR"; return OR; }
"xor"       { token = "XOR"; return XOR; }
">>"        { token = "SIG"; return SIG; }
"<<"        { token = "ANT"; return ANT; }
"$"         { token = "DOLLAR"; return DOLLAR; }
"?"         { token = "INTERR"; return INTERR; }
"#"         { token = "HASHTAG"; return HASHTAG; }
"/"         { token = "DIV"; return DIV; }
"%"         { token = "MOD"; return MOD; }
"@"         { token = "AT"; return AT; }
"++"        { token = "PLUSPLUS"; return PLUSPLUS; }
"--"        { token = "MINUSMINUS"; return MINUSMINUS; }
"**"        { token = "TIMESTIMES"; return TIMESTIMES; }
"+"         { token = "PLUS"; return PLUS; }
"-"         { token = "MINUS"; return MINUS; }
"*"         { token = "TIMES"; return TIMES; }

'[A-Za-z]?'                         { token = "CHAR"; atributo=-2; return CHAR; }
\"([^\"\n]|\\\")*\"                 { token = "CADENA"; atributo=-2; return CADENA; }
(\+|-)?([1-9][0-9]*|0)                     { token = "ENTERO"; atributo=-2; return ENTERO; }
(\+|-)?([1-9][0-9]*|0)(\.[0-9]+)?          { token = "NUMERO"; atributo=-2; return NUMERO; }
([A-Za-z])([A-Za-z]|[0-9]|_)*       { token = "ID"; atributo=-2; return ID; }

\n[\t\n ]*                                 {token = "SALTO"; return SALTO;}

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
//         if (atributo == -1)
//             printf ("[%15s] :: %s \n", yytext, token);
//         else if (atributo == -2)
//             printf ("[%15s] :: %s \t :: lexema = %s\n", yytext, token, yytext);
//         else
//             printf ("[%15s] :: %s \t :: atrib = %d (%s)\n", yytext, token, atributo, yytext);

//         atributo = -1;
//         codigo = yylex();
//     }
//     exit(0);
// }
