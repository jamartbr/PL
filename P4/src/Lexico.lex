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

letra [a-zA-Z]
digito [0-9]
entero {digito}+
real {entero}.{entero}

%%

[ \t\n]+      ;
"while"     { yylval.lexema = "while"; return WHILE; }
"do"        { yylval.lexema = "do"; return DO; }
"until"     { yylval.lexema = "until"; return UNTIL; }
"if"        { yylval.lexema = "if"; return IF; }
"else"      { yylval.lexema = "else"; return ELSE; }
"cin"       { yylval.lexema = "cin"; return CIN; }
"cout"      { yylval.lexema = "cout"; return COUT; }
"main"      { yylval.lexema = "main"; return MAIN; }
"return"    { yylval.lexema = "return"; return RETURN; }
"local"     { yylval.lexema = "local"; return LOCAL; }
"int"       { yylval.lexema = "int"; yylval.tipo = entero; return TIPOINT; }
"float"     { yylval.lexema = "float"; yylval.atrib = 0; yylval.tipo = real; return TIPOVAR; }
"bool"      { yylval.lexema = "bool"; yylval.atrib = 1; yylval.tipo = booleano; return TIPOVAR; }
"char"      { yylval.lexema = "char"; yylval.tipo = caracter; return TIPOCHAR; }
"list"      { yylval.lexema = "list"; yylval.tipo = lista; return TIPOLISTA; }
"const"     { yylval.lexema = "const"; return TIPOCONST; }
"FALSE"     { yylval.lexema = "FALSE"; yylval.atrib = 0; yylval.tipo = booleano; return VALBOOL; }
"TRUE"      { yylval.lexema = "TRUE"; yylval.atrib = 1;  yylval.tipo = booleano; return VALBOOL; }
"("         { yylval.lexema = "("; return PARIZQ; }
")"         { yylval.lexema = ")"; return PARDCH; }
"{"         { yylval.lexema = "{"; return LLAVEIZQ; }
"}"         { yylval.lexema = "}"; return LLAVEDCH; }
"["         { yylval.lexema = "["; return CORIZQ; }
"]"         { yylval.lexema = "]"; return CORDCH; }
";"         { yylval.lexema = ";"; return PYC; }
","         { yylval.lexema = ","; return COMA; }
"="         { yylval.lexema = "="; return ASIGN; }
"!"         { yylval.lexema = "!"; return OPEMON; }
"=="        { yylval.lexema = "=="; yylval.atrib = 0; return EQ; }
"!="        { yylval.lexema = "!="; yylval.atrib = 1; return EQ; }
"<"         { yylval.lexema = "<"; yylval.atrib = 0; return REL; }
">"         { yylval.lexema = ">"; yylval.atrib = 1; return REL; }
"<="        { yylval.lexema = "<="; yylval.atrib = 2; return REL; }
">="        { yylval.lexema = ">="; yylval.atrib = 3; return REL; }
"and"       { yylval.lexema = "and"; return AND; }
"or"        { yylval.lexema = "or"; return OR; }
"xor"       { yylval.lexema = "xor"; return XOR; }
">>"        { yylval.lexema = ">>"; return SIG; }
"<<"        { yylval.lexema = "<<"; return ANT; }
"$"         { yylval.lexema = "$"; return DOLLAR; }
"?"         { yylval.lexema = "?"; return INTERR; }
"#"         { yylval.lexema = "#"; return HASHTAG; }
"/"         { yylval.lexema = "/"; return DIV; }
"%"         { yylval.lexema = "%"; return MOD; }
"@"         { yylval.lexema = "@"; return AT; }
"++"        { yylval.lexema = "++"; return PLUSPLUS; }
"--"        { yylval.lexema = "--"; return MINUSMINUS; }
"**"        { yylval.lexema = "**"; return TIMESTIMES; }
"+"         { yylval.lexema = "+"; return PLUS; }
"-"         { yylval.lexema = "-"; return MINUS; }
"*"         { yylval.lexema = "*"; return TIMES; }
'[A-Za-z]'                          { yylval.lexema = strdup (yytext) ; yylval.tipo = caracter ; return CHAR; }
\"([^\"\n]|\\\")*\"                 { yylval.lexema = strdup (yytext) ; return CADENA; }
(\+|-)?([1-9][0-9]*|0)              { yylval.lexema = strdup (yytext) ; yylval.tipo = entero ;  return ENTERO; }
(\+|-)?([1-9][0-9]*|0)(\.[0-9]+)   { yylval.lexema = strdup (yytext) ; yylval.tipo = real ; return NUMERO; }
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

