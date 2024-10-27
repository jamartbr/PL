%{
// ************************************************************
// ***
// *** Fichero : SINTACT.Y
// *** Función : Especificación BISON del lenguaje
// ***
// *** Ultima modificación: 25-oct-2024
// ***
// ************************************************************

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int yylex ();
void yyerror ( const char *);

%}

%define parse.error verbose

%start programa


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
%token ASING      
%token OPEMON     
%token OPEBIN     
%token SIG        
%token ANT        
%token DOLLAR
%token OPEMONLIST 
%token OPEBINLIST 
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



%%

// ************* Producciones de la Gramática *************

// Programa

programa            : TIPOINT MAIN bloque
                    ;
bloque              : LLAVEIZQ declar_var_locales declar_funciones sentencias LLAVEDCH
                    ;


// Declaración variables locales

declar_var_locales  : LOCAL LLAVEIZQ var_locales LLAVEDCH
                    | 
                    ;
var_locales         : var_locales cuerpo_declar_var PYC
                    | var_locales cuerpo_declar_const PYC
                    | cuerpo_declar_var PYC
                    | cuerpo_declar_const PYC
                    ;
cuerpo_declar_var   : tipo_var_elem nombres
                    | TIPOLISTA tipo_var_elem nombres
                    ;
nombres             : nombres COMA ID
                    | ID
                    ;
cuerpo_declar_const : TIPOCONST tipo_var_elem ID ASING exp_simple
                    | TIPOCONST TIPOLISTA tipo_var_elem ID ASING CORIZQ asig_const_lista
                    ;
asig_const_lista    : items CORDCH
                    | CADENA CORDCH
                    ;
items               : items COMA exp_simple
                    | exp_simple
                    |
                    ;


// Declaración subprogramas (funciones)
declar_funciones    : declar_funciones declar_funcion
                    |
                    ;
declar_funcion      : cabec_funcion bloque
                    ;
cabec_funcion       : tipo_var ID PARIZQ parametros PARDCH
                    ;
parametros          : parametros COMA parametro 
                    | parametro
                    |
                    ;
parametro           : tipo_var ID
                    ;


// Sentencias

sentencias          : sentencias bloque PYC 
                    | sentencias ID ASING sentencia_asig PYC 
                    | sentencias IF sentencia_if PYC 
                    | sentencias WHILE sentencia_while PYC 
                    | sentencias CIN sentencia_entrada PYC 
                    | sentencias COUT sentencia_salida PYC 
                    | sentencias RETURN sentencia_return PYC 
                    | sentencias DO sentencia_do_until PYC 
                    | sentencias ID PARIZQ sentencia_funcion PARDCH PYC 
                    | sentencias sentencia_lista PYC 
                    |
                    ;
sentencia_asig      : exp
                    | CORIZQ items CORDCH
                    | CORIZQ CADENA CORDCH
                    ;
sentencia_if        : PARIZQ exp PARDCH bloque
                    | PARIZQ exp PARDCH bloque ELSE bloque
                    ;
sentencia_while     : PARIZQ exp PARDCH bloque
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
dato_salida         : exp
                    | CADENA
                    ;
sentencia_return    : exp
                    ;
sentencia_do_until  : bloque UNTIL PARIZQ exp PARDCH
                    ;
sentencia_funcion   : items
                    ;
sentencia_lista     : ID SIG
                    | ID ANT
                    | DOLLAR ID
                    ;


// Expresiones

exp                 : exp PLUS termino
                    | exp MINUS termino
                    | exp TIMES termino
                    | exp OPEBIN termino
                    | exp OPEBINLIST termino
                    | termino
                    | exp ID exp_lista_ID
                    | exp DOLLAR ID
                    | exp OPEMONLIST ID
                    | exp exp_simple aux ID
                    ;
exp_lista_ID        : SIG
                    | ANT
                    | AT num op_ternario
                    | MINUSMINUS num
                    | TIMESTIMES ID
                    | PLUS exp_simple
                    | MINUS exp_simple
                    | TIMES exp_simple
                    | OPEBINLIST exp_simple
                    ;



// Operadores y radicales

op_signo            : PLUS
                    | MINUS
                    ;
op_ternario         : PLUSPLUS exp_simple
                    |
                    ;
aux                 : PLUS
                    | TIMES
                    ;

termino             : exp_simple
                    | OPEMON exp_simple
                    ;
exp_simple          : op_signo num
                    | CHAR
                    | VALBOOL
                    | LLAVEIZQ ID LLAVEDCH
                    ;
num                 : NUMERO
                    | ENTERO
                    ;


// Tipos de variables

tipo_var_elem       : TIPOVAR
                    | TIPOCHAR
                    | TIPOINT
                    ;
tipo_var            : tipo_var_elem
                    | TIPOLISTA tipo_var_elem
                    ;


// Tratamiento de errores



%%