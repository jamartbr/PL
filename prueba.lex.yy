%{
// ******************************************************
// ***
// *** Fichero : Lexico .lex
// *** Funcion : Especificaci ón LEX del lenguaje
// ***
// *** Ultima modificaci ón: 18 -oct -2023
// ***
// ******************************************************

# include " tabla .h"
%}

%option noyywrap

ID [a-zA -Z_]
DIGITO [0 -9]
OTROS .

% %

[ \t\n]+ ;
<patron_token1 > { return TOKEN1 ; }
<patron_token2 > { return TOKEN2 ; }
...
<patron_tokenN > { return TOKENN ; }

. { printf ("\n[Lí nea %2d] *** Error lé xico : %s\n", yylineno , yytext ); }
% %

int main ( int argc , char ** argv )
{
int val ;

printf (" Analizador de Lé xico - Lenguaje C\n\n");
++ argv , --argc ; /* saltamos el nombre del ejecutable */
if ( argc > 0)
yyin = fopen ( argv [0] , "r");
else
yyin = stdin ;

val = yylex () ;
while ( val != 0)
{
printf (" %d \n", val );
val = yylex () ;
}
exit (0) ;
}
