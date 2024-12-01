// ************************************************************************
// ***
// *** Fichero : ESTRUCTURAS.H
// *** Funcion : Declaración de la Tabla de Símbolos para prácticas de PL
// ***
// ************************************************************************

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
    marca , // marca comienzo bloque
    funcion , // si es subprograma
    variable , // si es variable
    parametro_formal  // si es parámetro formal
} tipoEntrada ;

typedef enum {
    entero ,
    real ,
    caracter ,
    booleano ,
    lista ,
    desconocido 
} dtipo ;

typedef struct {
    tipoEntrada     entrada ;
    char            *nombre ;
    dtipo           tipoDato ;
    unsigned int    parametros ;
    unsigned int    dimension ;
} entradaTS ;

typedef struct {
    int atrib ; // Atributo del símbolo (si tiene )
    char *lexema ; // Nombre del lexema
    dtipo tipo ; // Tipo del símbolo
} atributos ;

#define YYSTYPE atributos
#define MAX_TS 500

extern long int TOPE;

extern entradaTS TS[MAX_TS];

// Variable global que almacena el tipo en las declaraciones
extern dtipo tipoTmp;


/***********************************/
/* Métodos de la tabla de símbolos */
/***********************************/

void TS_VaciarENTRADAS() ;

void TS_comprobarUnico(atributos atributo) ;

void TS_duplicaParametros() ;

void TS_insertaMARCA() ;

void TS_insertaID(atributos atributo) ;

void TS_insertaPARAMETRO(atributos atributo) ;

void TS_insertaIDENT(atributos atributo) ;

void TS_insertaFUNCION(atributos atributo) ;

void TS_aumentaPARAMETROS() ;

void TS_mostrar() ;