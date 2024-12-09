// ************************************************************************
// ***
// *** Fichero : ESTRUCTURAS.C
// *** Funcion : Implementación de la Tabla de Símbolos para prácticas de PL
// ***
// ************************************************************************

#include "estructuras.h"

entradaTS TS[MAX_TS];
long int TOPE = 0;
paramDuplicados = 1;

dtipo tipoTmp = desconocido;


/***********************************/
/* Métodos de la tabla de símbolos */
/***********************************/

void TS_VaciarENTRADAS() {
    while (TS[TOPE-1].entrada != marca) {
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
    paramDuplicados = 1 ;
}

void TS_insertaMARCA() {
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = marca ;
        TOPE++ ;
        if(paramDuplicados==0){
            TS_duplicaParametros() ;
        }
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
    paramDuplicados = 0 ;
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
    if (TOPE == 0) {
        printf("Tabla de símbolos vacía\n") ;
        return ;
    }
    else{
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
}


/***************************************************/
/* Funciones auxiliares para el análisis semántico */
/***************************************************/

dtipo buscarTipo(char *nombre) {
    int pos = TOPE-1 ;
    entradaTS entrada = {desconocido, NULL, desconocido, 0, 0} ;
    while (pos >= 0 && TS[pos].entrada != marca) {
        if (strcmp(TS[pos].nombre, nombre) == 0) {
            entrada = TS[pos] ;
            break ;
        }
        pos-- ;
    }
    return entrada.tipoDato ;
}

void comprobarDevuelveTipoCorrecto(atributos atrib) {
    int pos = TOPE-1 ;
    while (pos >= 0 && TS[pos].entrada != funcion) {
        pos-- ;
    }
    if (TS[pos].entrada == funcion) {
        if (atrib.tipo != TS[pos].tipoDato) {
            printf("Error: tipo de retorno incorrecto\n") ;
            exit(1) ;
        }
    } else {
        printf("Error: se ha intentado devolver un valor sin estar dentro de un bloque\n") ;
        exit(1) ;
    }
}

void comprobarEsTipo(dtipo tipo, dtipo tipo2) {
    if (tipo != tipo2) {
        printf("Error: tipos incompatibles\n") ;
        exit(1) ;
    }
}

dtipo comprobarOpBinario(atributos izq, atributos operador, atributos der) {
}

dtipo comprobarOpBinarioMenos(atributos izq, atributos der) {
}

dtipo comprobarEsEnteroReal (atributos atrib){
}

dtipo comprobarOpUnarios( atributos exp ){
}