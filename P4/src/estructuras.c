// ************************************************************************
// ***
// *** Fichero : ESTRUCTURAS.C
// *** Funcion : Implementación de la Tabla de Símbolos para prácticas de PL
// ***
// ************************************************************************

#include "estructuras.h"

entradaTS TS[MAX_TS];
long int TOPE = 0;

dtipo tipoTmp = desconocido;




/***********************************/
/* Métodos de la tabla de símbolos */
/***********************************/

void TS_VaciarENTRADAS() {
    while (TS[TOPE].entrada != marca) {
        TOPE-- ;
    }
    TOPE-- ;
    TS_mostrar() ;
}

void TS_comprobarUnico(atributos atributo) {
    int i = TOPE-1 ;
    while (i >= 0 && TS[i].entrada != marca) {  // Busca en la TS
        if (strcmp(TS[i].nombre, atributo.lexema) == 0) {
            printf("Error: identificador %s ya declarado\n", atributo.lexema) ;
            exit(1) ;
        }
        i-- ;
    }
}

void TS_duplicaParametros() {
    int i = TOPE-2 ;
    while (i>0 && TS[i].entrada == parametro_formal) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(TS[i].nombre)+1) ;
        strcpy(TS[TOPE].nombre, TS[i].nombre) ;
        TS[TOPE].tipoDato = TS[i].tipoDato ;
        TOPE++ ;
        i-- ;
    }
}

void TS_insertaMARCA() {
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = marca ;
        TOPE++ ;
        TS_duplicaParametros() ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        exit(1) ;
    }
    TS_mostrar() ;
}

void TS_insertaID(atributos atributo) {
    TS_comprobarUnico(atributo) ;
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipoTmp ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        exit(1) ;
    }
    TS_mostrar() ;
}

void TS_insertaFUNCION(atributos atributo) {
    TS_comprobarUnico(atributo) ;
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = funcion ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipoTmp ;
        TS[TOPE].parametros = 0 ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        exit(1) ;
    }
    TS_mostrar() ;
}

void TS_aumentaPARAMETROS() {
    int topeTMP = TOPE-1 ;
    while (TS[topeTMP].entrada != funcion) {
        topeTMP-- ;
    }
    TS[topeTMP].parametros = TOPE - topeTMP ;
}

void TS_insertaPARAMETRO(atributos atributo) {
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = parametro_formal ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipoTmp ;
        TS_aumentaPARAMETROS() ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        exit(1) ;
    }
    TS_mostrar();
}

void TS_insertaIDENT(atributos atributo) {
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipoTmp ;
        TS[TOPE].parametros = 0 ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        exit(1) ;
    }
    TS_mostrar();
}

void TS_mostrar() {
    int i = 0 ;
    while (i < TOPE) {
        if (TS[i].entrada == marca) {
            printf("Marca\n") ;
        } else if (TS[i].entrada == funcion) {
            printf("Función: %s\n", TS[i].nombre) ;
        } else if (TS[i].entrada == variable) {
            printf("Variable: %s\n", TS[i].nombre) ;
        } else if (TS[i].entrada == parametro_formal) {
            printf("Parámetro: %s\n", TS[i].nombre) ;
        }
        i++ ;
    }
    printf("\n") ;
}