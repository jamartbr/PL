%{
// ******************************************************
// ***
// *** Fichero : LEXICO.LEX
// *** Función : Especificación LEX del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ******************************************************

// Declaraciones

#include <stdlib.h>
#include <string.h>


%}

%option yylineno
%option noyywrap

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
"int"       { return TIPOINT;}
"float"     { yylval.atrib = 0; return TIPOVAR; }
"bool"      { yylval.atrib = 1; return TIPOVAR; }
"char"      { return TIPOCHAR; }
"list"      { return TIPOLISTA; }
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
'[A-Za-z]'                          { return CHAR; }
\"([^\"\n]|\\\")*\"                 { return CADENA; }
(\+|-)?([1-9][0-9]*|0)              { return ENTERO; }
(\+|-)?([1-9][0-9]*|0)(\.[0-9]+)?   { return NUMERO; }
([A-Za-z])([A-Za-z]|[0-9]|_)*       { yylval.lexema = strdup (yytext) ; return ID; }
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

