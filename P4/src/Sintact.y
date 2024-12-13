%{
// ************************************************************
// ***
// *** Fichero : SINTACT.Y
// *** Función : Especificación BISON del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ************************************************************
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "estructuras.h"

// La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
// fuente de lex (prueba.l)
void yyerror(char * msg);

// La siguiente variable se usará para conocer el numero de la línea
// que se esta leyendo en cada momento. También es posible usar la variable
// ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
// invocar a flex con la opción ’-l’ (compatibilidad con lex).

//############
//#define YYDEBUG 1
//############

#define YYERROR_VERBOSE

%}

%define parse.error verbose

// ************* Definición de Tokens *************

%token WHILE
%token DO         
%token UNTIL      
%token IF         
%token ELSE       
%token CIN        
%token COUT       
%token MAIN       
%token RETURN     
%token LOCAL      
%token TIPOINT     
%token TIPOCHAR       
%token TIPOVAR    
%token TIPOLISTA  
%token TIPOCONST  
%token VALBOOL    

%token PARIZQ     
%token PARDCH     
%token LLAVEIZQ   
%token LLAVEDCH   
%token CORIZQ     
%token CORDCH     
%token PYC        
%token COMA       
%token ASIGN      
%token OPEMON 
%token OR
%token AND
%token XOR
%token EQ
%token REL
%token SIG        
%token ANT        
%token DOLLAR
%token HASHTAG
%token INTERR
%token DIV
%token MOD
%token AT         
%token PLUSPLUS   
%token MINUSMINUS 
%token TIMESTIMES 
%token PLUS       
%token MINUS      
%token TIMES      

%token CHAR       
%token CADENA     
%token NUMERO     
%token ENTERO
%token ID  


// ************* Definición de Precedencia y Asocitividad *************

%left OR
%left AND
%left XOR
%left EQ
%left REL
%left PLUS MINUS
%left TIMES MOD DIV
%right OPEMON
%left MINUSMINUS
%left PLUSPLUS
%left AT
%right HASHTAG
%right INTERR
%left CORIZQ CORDCH
%left PARIZQ PARDCH



%%

// ************* Producciones de la Gramática *************

// Programa

programa            : TIPOINT MAIN  bloque 
                    ;
bloque              : LLAVEIZQ { TS_insertaMARCA() ; } declar_var_locales declar_funciones sentencias LLAVEDCH { TS_VaciarENTRADAS() ; }
                    ;


// Declaración variables locales

declar_var_locales  : LOCAL LLAVEIZQ var_locales LLAVEDCH 
                    | 
                    ;
var_locales         : var_locales cuerpo_declar_var
                    | var_locales cuerpo_declar_const
                    | cuerpo_declar_var
                    | cuerpo_declar_const
                    ;
cuerpo_declar_var   : tipo_var_elem  {tipoTmp = $1.tipo ; } nombres PYC {tipoTmp = desconocido ; }
                    | TIPOLISTA tipo_var_elem { tipoTmp = $2.tipo ; } nombres_lista PYC {tipoTmp = desconocido ; }
                    | error
                    ;
nombres             : nombres COMA ID { TS_insertaID($3) ; }
                    | ID { TS_insertaID($1) ; }
                    ;
nombres_lista       : nombres_lista COMA ID { TS_insertaLISTA($3) ; }
                    | ID { TS_insertaLISTA($1) ; }
                    ;
cuerpo_declar_const : TIPOCONST tipo_var_elem { tipoTmp = $2.tipo ; } ID { TS_insertaID($4) ; } ASIGN exp_simple PYC { comprobarEsTipo($2.tipo, $7.tipo) ; tipoTmp = desconocido ; }
                    | TIPOCONST TIPOLISTA tipo_var_elem { tipoTmp = $3.tipo ; } ID { TS_insertaLISTA($5) ; } ASIGN CORIZQ asig_const_lista PYC { comprobarEsTipo($3.tipo, $9.tipo) ; tipoTmp = desconocido ; }
                    ;
asig_const_lista    : items CORDCH { $$.tipo = $1.tipo ; }
                    | CADENA CORDCH { $$.tipo = lista ; }
                    ;
items               : items COMA exp_simple { comprobarEsTipo($1.tipo, $3.tipo) ; $$ = $3 ; }
                    | exp_simple { $$ = $1 ; }
                    | 
                    ;


// Declaración subprogramas (funciones)
declar_funciones    : declar_funciones declar_funcion
                    |
                    ;
declar_funcion      : cabec_funcion bloque PYC
                    ;
cabec_funcion       : tipo_var { tipoTmp = $1.tipo ; } ID { TS_insertaFUNCION($3) ; } PARIZQ parametros PARDCH {tipoTmp = desconocido ; }
                    | error
                    ;
parametros          : parametros COMA parametro
                    | parametro
                    |
                    ;
parametro           : tipo_var { tipoTmp = $1.tipo ; } ID  { TS_insertaPARAMETRO($3) ; tipoTmp = desconocido ; }
                    ;


// Sentencias

sentencias          : sentencias bloque PYC 
                    | sentencias ID ASIGN sentencia_asig PYC { if (lista == buscarTipo($2.lexema)) comprobarEsTipo(buscarTipoContenido($2.lexema), $4.tipo) ; else comprobarEsTipo(buscarTipo($2.lexema), $4.tipo) ; }
                    | sentencias IF sentencia_if PYC { comprobarEsTipo(booleano, $3.tipo) ; }
                    | sentencias WHILE sentencia_while PYC { comprobarEsTipo(booleano, $3.tipo) ; }
                    | sentencias CIN sentencia_entrada PYC 
                    | sentencias COUT sentencia_salida PYC 
                    | sentencias RETURN sentencia_return PYC { comprobarDevuelveTipoCorrecto($3) ; }
                    | sentencias DO sentencia_do_until PYC
                    | sentencias sentencia_lista PYC 
                    |
                    ;
sentencia_asig      : exp { $$.tipo = $1.tipo ; }
                    | CORIZQ items CORDCH { $$.tipo = $2.tipo ; }
                    | CORIZQ CADENA CORDCH { $$.tipo = caracter ; }
                    | ID PARIZQ sentencia_funcion PARDCH { comprobarLlamadaFuncion($1) ; $$.tipo = buscarTipo($1.lexema) ; }
                    ;
sentencia_if        : PARIZQ exp PARDCH bloque { $$.tipo = $2.tipo ; }
                    | PARIZQ exp PARDCH bloque ELSE bloque { $$.tipo = $2.tipo ; }
                    ;
sentencia_while     : PARIZQ exp PARDCH bloque { $$.tipo = $2.tipo ; }
                    ;
sentencia_entrada   : SIG datos_entrada
                    ;
datos_entrada       : datos_entrada SIG exp
                    | exp
                    ;
sentencia_salida    : ANT datos_salida
                    ;
datos_salida        : datos_salida SIG dato_salida
                    | dato_salida
                    ;
dato_salida         : exp { $$.tipo = $1.tipo ; }
                    | CADENA {$$.tipo = $1.tipo ; }
                    ;
sentencia_return    : exp { $$.tipo = $1.tipo ; }
                    ;
sentencia_do_until  : bloque UNTIL PARIZQ exp PARDCH { comprobarEsTipo(booleano, $4.tipo) ; }
                    ;
sentencia_funcion   : sentencia_funcion COMA ID { comprobarParametro($-1, $3) ; nParamTmp++ ; }
                    | ID { comprobarParametro($-1, $1) ; nParamTmp++ ; }
                    ;
sentencia_lista     : ID SIG { comprobarEsTipo(lista, buscarTipo($1.lexema)) ; }
                    | ID ANT { comprobarEsTipo(lista, buscarTipo($1.lexema)) ; }
                    | DOLLAR ID { comprobarEsTipo(lista, buscarTipo($2.lexema)) ; }
                    ;


// Expresiones

exp                 : exp PLUS termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp MINUS termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp TIMES termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp OR termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp AND termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp XOR termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp REL termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp EQ termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp DIV termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp MOD termino { $$.tipo = comprobarOpBinario($1, $2, $3) ; }
                    | exp num aux LLAVEIZQ ID LLAVEDCH { comprobarEsTipo(lista,buscarTipo($5.lexema)) ; $$.tipo = $2.tipo ; }
                    | termino { $$.tipo = $1.tipo ; }
                    ;
exp_lista_ID        : AT ENTERO op_ternario { if ($3.tipo == desconocido) $$.tipo = entero ; else $$.tipo = buscarTipoContenido($-1.lexema) ; }
                    | MINUSMINUS ENTERO { comprobarEsTipo(lista, buscarTipo($0.lexema)) ; $$.tipo = buscarTipoContenido($0.lexema) ; }
                    | TIMESTIMES ID { comprobarEsTipo(lista, buscarTipo($0.lexema)) ;  $$.tipo = buscarTipoContenido($0.lexema) ; }
                    | PLUS num { comprobarEsTipo(lista, buscarTipo($0.lexema)) ;  $$.tipo = buscarTipoContenido($0.lexema) ; }
                    | MINUS num { comprobarEsTipo(lista, buscarTipo($0.lexema)) ;  $$.tipo = buscarTipoContenido($0.lexema) ; }
                    | TIMES num { comprobarEsTipo(lista, buscarTipo($0.lexema)) ;  $$.tipo = buscarTipoContenido($0.lexema) ; }
                    | DIV num { comprobarEsTipo(lista, buscarTipo($0.lexema)) ;  $$.tipo = buscarTipoContenido($0.lexema) ;  }
                    | MOD ENTERO { comprobarEsTipo(lista, buscarTipo($0.lexema)) ; $$.tipo = buscarTipoContenido($0.lexema) ;  }
                    | error
                    ;



// Operadores y radicales

op_ternario         : PLUSPLUS exp_simple { $$.tipo = $2.tipo ; }
                    | { $$.tipo = desconocido ; }
                    ;
aux                 : PLUS
                    | TIMES
                    ;

termino             : exp_simple { $$.tipo = $1.tipo ; }
                    | OPEMON exp_simple {$$.tipo = comprobarOpUnario($2);}
                    | PARIZQ exp PARDCH {$$.tipo = $2.tipo;}
                    | INTERR LLAVEIZQ ID LLAVEDCH { comprobarEsTipo(lista, buscarTipo($3.lexema)) ; $$.tipo = buscarTipoContenido($3.lexema) ; }
                    | HASHTAG LLAVEIZQ ID LLAVEDCH { comprobarEsTipo(lista, buscarTipo($3.lexema)) ; $$.tipo = entero ; }
                    | ID exp_lista_ID {comprobarEsTipo(lista, buscarTipo($1.lexema)) ; $$.tipo = $2.tipo ; }
                    ;
exp_simple          : num { $$.tipo = $1.tipo ; }
                    | CHAR {$$.tipo = $1.tipo ; }
                    | VALBOOL {$$.tipo = $1.tipo ; }
                    | LLAVEIZQ ID LLAVEDCH { if (lista == buscarTipo($2.lexema)) $$.tipo = buscarTipoContenido($2.lexema) ; else $$.tipo = buscarTipo($2.lexema) ; }
                    | error
                    ;
num                 : NUMERO {$$.tipo = $1.tipo ; }
                    | ENTERO {$$.tipo = $1.tipo ; }
                    ;


// Tipos de variables

tipo_var_elem       : TIPOVAR { $$.tipo = $1.tipo ; }
                    | TIPOCHAR { $$.tipo = $1.tipo ; }
                    | TIPOINT { $$.tipo = $1.tipo ; }
                    | error { $$.tipo = desconocido ; }
                    ;
tipo_var            : tipo_var_elem { $$.tipo = $1.tipo ; }
                    | TIPOLISTA { $$.tipo = $1.tipo ; }
                    ;


%%

#include "lex.yy.c"

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror( char *msg ){
	fprintf(stderr, "Line %d: %s\n", yylineno, msg) ;
}
