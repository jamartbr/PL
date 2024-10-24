%{
// ************************************************************
// ***
// *** Fichero : SINTACT.Y
// *** Funcion : Pruebas de BISON para prácticas de PL
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

%%



programa            : TIPOINT MAIN bloque
                    ;
bloque              : LLAVEIZQ declar_var_locales declar_funcion sentencia LLAVEDCH PYC
                    ;
declar_var_locales  : LOCAL LLAVEIZQ var_locales LLAVEDCH
                    | 
                    ;
var_locales         : cuerpo_declar_var var_locales
                    | cuerpo_declar_const var_locales
                    | cuerpo_declar_var
                    | cuerpo_declar_const
                    ;
cuerpo_declar_var   : tipo_var_elem nombres PYC
                    | TIPOLISTA tipo_var_elem nombres PYC
                    ;
nombres             : ID COMA nombres
                    | ID
                    ;
cuerpo_declar_const : TIPOCONST tipo_var_elem ID ASING exp_no_lista PYC
                    | TIPOCONST TIPOLISTA tipo_var_elem ID ASING CORIZQ items CORDCH PYC
                    | TIPOCONST TIPOLISTA TIPOCHAR ID ASING CORIZQ CADENA CORDCH PYC
                    ;
items               : exp COMA items
                    | exp
                    |
                    ;
declar_funciones    : declar_funcion declar_funciones
                    |
                    ;
declar_funcion      : cabec_funcion bloque
                    |
                    ;
cabec_funcion       : tipo_var ID PARIZQ parametros PARDCH
                    ;
parametros          : parametro COMA parametros 
                    | parametro
                    |
                    ;
parametro           : tipo_var ID
                    ;




sentencias          : sentencia sentencias PYC
                    | sentencia PYC
                    |
                    ;
sentencia           : bloque
                    | sentencia_asig
                    | sentencia_if
                    | sentencia_while
                    | sentencia_entrada
                    | sentencia_salida
                    | sentencia_return
                    | sentencia_do_until
                    | sentencia_funcion
                    | sentencia_lista
                    ;
sentencia_asig      : ID ASING exp
                    | ID ASING CORIZQ items CORDCH
                    | ID ASING CORIZQ CADENA CORDCH
                    ;
sentencia_if        : IF PARIZQ exp PARDCH bloque
                    | IF PARIZQ exp PARDCH bloque ELSE bloque
                    ;
sentencia_while     : WHILE PARIZQ exp PARDCH bloque
                    ;
sentencia_entrada   : CIN SIG datos_entrada
                    ;
datos_entrada       : exp SIG datos_entrada
                    | exp
                    ;
sentencia_salida    : COUT ANT datos_salida
                    ;
datos_salida        : dato_salida SIG datos_salida
                    | dato_salida
                    ;
dato_salida         : exp
                    | CADENA
                    ;
sentencia_return    : RETURN exp
                    ;
sentencia_do_until  : DO bloque UNTIL PARIZQ exp PARDCH
                    ;
sentencia_funcion   : ID PARIZQ items PARDCH
                    ;
sentencia_lista     : ID SIG
                    | ID ANT
                    | DOLLAR ID
                    ;



exp_simple          : NUMERO
                    | CHAR
                    | VALBOOL
                    | ID
                    ;
exp                 : exp_no_lista
                    | exp_lista
                    ;
exp_no_lista        : op_monario exp
                    | exp op_binario exp
                    | PARIZQ exp PARDCH
                    | exp_simple
                    ;
exp_lista           : op_monario_lista ID
                    | ID op_binario_lista ENTERO
                    | ENTERO PLUS ID
                    | ENTERO TIMES ID
                    | ID AT exp
                    | ID PLUSPLUS ENTERO AT exp
                    | ID TIMESTIMES ID
                    ;



op_monario          : OPEMON
                    | PLUS
                    | MINUS
                    ;
op_binario          : PLUS
                    | MINUS
                    | TIMES
                    | OPEBINLIST
                    | OPEBIN
                    ;



op_monario_lista    : OPEMONLIST
                    ;
op_binario_lista    : OPEBINLIST
                    | MINUSMINUS
                    | PLUS
                    | MINUS
                    | TIMES



tipo_var_elem       : TIPOVAR
                    | TIPOCHAR
                    | TIPOINT
                    ;
tipo_var            : tipo_var_elem
                    | TIPOLISTA tipo_var_elem
                    ;

%%