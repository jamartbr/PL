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
int nParamTmp = 0;


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
    while (i > 0 && TS[i].entrada != marca) {  // Busca en la TS
        if (strcmp(TS[i].nombre, atributo.lexema) == 0) {
            printf("Error semántico: identificador %s ya declarado\n", atributo.lexema) ;
            
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
        
    }
    TS_mostrar() ;
}
void TS_insertaID(atributos atributo) {
    if (tipoTmp == desconocido) {
        printf("Error semántico: no se puede asignar el tipo a la variable %s\n", atributo.lexema);
    }
    TS_comprobarUnico(atributo) ;
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipoTmp ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        
    }
    TS_mostrar() ;
}

void TS_insertaID2(atributos atributo, dtipo tipo) {
    TS_comprobarUnico(atributo) ;
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = tipo ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        
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
        
    }
    TS_mostrar();
}

void TS_insertaLISTA(atributos atributo) {
    if (TOPE < MAX_TS) {
        TS[TOPE].entrada = variable ;
        TS[TOPE].nombre = (char *) malloc(strlen(atributo.lexema)+1) ;
        strcpy(TS[TOPE].nombre, atributo.lexema) ;
        TS[TOPE].tipoDato = lista ;
        TS[TOPE].tipoContenido = tipoTmp ;
        TOPE++ ;
    } else {
        printf("Error: desbordamiento de la pila\n") ;
        
    }
    TS_mostrar();
}

void TS_mostrar() {
    // if (TOPE == 0) {
    //     printf("Tabla de símbolos vacía\n") ;
    //     return ;
    // }
    // else{
    //     int i = 0 ;
    //     while (i < TOPE) {
    //         if (TS[i].entrada == marca) {
    //             printf("Marca\n") ;
    //         } else if (TS[i].entrada == funcion) {
    //             printf("Función: %s, NParam: %d, Tipo: %d\n", TS[i].nombre, TS[i].parametros, TS[i].tipoDato) ;
    //         } else if (TS[i].entrada == variable) {
    //             printf("Variable: %s, Tipo: %d", TS[i].nombre, TS[i].tipoDato) ;
    //             if (TS[i].tipoDato == lista) {
    //                 printf(" de %d\n", TS[i].tipoContenido) ;
    //             } else {
    //                 printf("\n") ;
    //             }
    //         } else if (TS[i].entrada == parametro_formal) {
    //             printf("Parámetro: %s, Tipo: %d\n", TS[i].nombre, TS[i].tipoDato) ;
    //         }
    //         i++ ;
    //     }
    //     printf("\n") ;
    // }
}


/***************************************************/
/* Funciones auxiliares para el análisis semántico */
/***************************************************/

dtipo buscarTipo(char *nombre) {
    int pos = TOPE-1 ;
    entradaTS entrada = {desconocido, NULL, desconocido, 0, 0} ;
    while (pos > 0) {
        if (strcmp(TS[pos].nombre, nombre) == 0) {
            entrada = TS[pos] ;
            break ;
        }
        pos-- ;
    }
    if (entrada.nombre == NULL) {
        printf("Error semántico: identificador %s no declarado\n", nombre) ;
        
    }
    return entrada.tipoDato ;
}

dtipo buscarTipoContenido(char *nombre) {
    int pos = TOPE-1 ;
    entradaTS entrada = {desconocido, NULL, desconocido, 0, 0} ;
    while (pos > 0 && TS[pos].entrada != marca) {
        if (strcmp(TS[pos].nombre, nombre) == 0) {
            entrada = TS[pos] ;
            break ;
        }
        pos-- ;
    }
    return entrada.tipoContenido ;
}

void comprobarDevuelveTipoCorrecto(atributos atrib) {
    int pos = TOPE-1 ;
    while (pos > 0 && TS[pos].entrada != marca) {
        pos-- ;
    }
    while (pos > 0 && TS[pos].entrada != funcion) {
        pos-- ;
    }
    if (atrib.tipo != TS[pos].tipoDato) {
        printf("Error: tipo de retorno incorrecto; se ha intentado devolver %d y se esperaba %d\n", atrib.tipo, TS[pos].tipoDato) ;
        
    } else if (pos==0) {
        if (atrib.tipo != entero) {
            printf("Error: tipo de retorno incorrecto; se ha intentado devolver %d y se esperaba %d\n", atrib.tipo, entero) ;
            
        }
    }
}

void comprobarEsTipo(dtipo tipo, dtipo tipo2) {
    if (tipo == desconocido || tipo2 == desconocido) {
        printf("Error semantico: tipo desconocido\n") ;
    }
    if (tipo != tipo2) {
        printf("Error semantico: son tipos distintos: %d y %d\n", tipo, tipo2) ;
        
    }
}

void comprobarNoEsTipo(dtipo tipo, dtipo tipo2) {
    if (tipo == tipo2) {
        printf("Error semantico: son el mismo tipo: %d\n", tipo) ;
        
    }
}



dtipo comprobarOpBinario(atributos izq, atributos operador, atributos der) {

    if (strcmp(operador.lexema, "+") == 0 || strcmp(operador.lexema, "*") == 0) {

        if (izq.tipo == lista) {
            if (der.tipo == lista) {
                printf("Error semantico: Operador no aplicable entre dos listas\n");
            }
            if (der.tipo != entero && der.tipo != real) {
                printf("Error semantico: Operador solo aplicable a enteros o reales\n");
            }
        }
        else if (der.tipo == lista) {
            if (izq.tipo != entero && izq.tipo != real) {
                printf("Error semantico: Operador solo aplicable a enteros o reales\n");
            }
        }
        else {
            if ((izq.tipo != entero && izq.tipo != real) || (der.tipo != entero && der.tipo != real)) {
                printf("Error semantico: Operador solo aplicable a enteros o reales\n");
            }
            else {
                comprobarEsTipo(izq.tipo, der.tipo);
            }
        }
    }

    else if (strcmp(operador.lexema, "-") == 0 || strcmp(operador.lexema, "/") == 0 || strcmp(operador.lexema, ">") == 0 ||
             strcmp(operador.lexema, "<") == 0 || strcmp(operador.lexema, ">=") == 0 || strcmp(operador.lexema, "<=") == 0) {

        if (izq.tipo == lista) {
            if (der.tipo == lista) {
                printf("Error semantico: Operador no aplicable entre dos listas\n");
            }
            if (der.tipo != entero && der.tipo != real) {
                printf("Error semantico: Operador solo aplicable a enteros o reales\n");
            }
        }
        else {
            if ((izq.tipo != entero && izq.tipo != real) || (der.tipo != entero && der.tipo != real)) {
                printf("Error semantico: Operador solo aplicable a enteros o reales\n");
            }
            else {
                comprobarEsTipo(izq.tipo, der.tipo);
            }
        }
    }

    else if (strcmp(operador.lexema, "==") == 0 || strcmp(operador.lexema, "!=") == 0) {
        comprobarEsTipo(izq.tipo, der.tipo);
    }

    else if (strcmp(operador.lexema, "and") == 0 || strcmp(operador.lexema, "or") == 0 || strcmp(operador.lexema, "xor") == 0) {
        if (izq.tipo != booleano || der.tipo != booleano) {
            printf("Error semantico: Operador solo aplicable a booleanos\n");
        }
    }

    else if (strcmp(operador.lexema, "--") == 0 || strcmp(operador.lexema, "%") == 0 || strcmp(operador.lexema, "@") == 0) {
        if (izq.tipo != lista || der.tipo != entero) {
            printf("Error semantico: El operador debe ir precedido de una lista y sucedido de un entero\n");
        }
    }

    else if (strcmp(operador.lexema, "**") == 0) {
        if (izq.tipo != lista || der.tipo != lista) {
            printf("Error semantico: El operador debe ir precedido y sucedido de una lista\n");
        }
    }

    if (strcmp(operador.lexema, "+") == 0 || strcmp(operador.lexema, "-") == 0 || strcmp(operador.lexema, "*") == 0 || strcmp(operador.lexema, "/") == 0 ||
        strcmp(operador.lexema, "--") == 0 || strcmp(operador.lexema, "&") == 0 || strcmp(operador.lexema, "**") == 0) {
        return izq.tipo;
    }
    else if (strcmp(operador.lexema, "@") == 0) {
        return der.tipo;
    }
    else {
        return booleano;
    }
}

dtipo comprobarEsEnteroReal (atributos atrib){
}

dtipo comprobarOpUnario( atributos exp ){

    comprobarEsTipo(booleano, exp.tipo);
    return booleano;
}

dtipo comprobarOpUnarioLista(atributos exp){

    comprobarEsTipo(exp.tipo, lista);
    return lista;
}

void comprobarLlamadaFuncion(atributos atrib) {
    int pos = TOPE-1 ;
    while (pos >= 0 && strcmp(TS[pos].nombre, atrib.lexema)!=0) {
        pos-- ;
    }
    if (pos < 0) {
        printf("Error: función no declarada\n") ;
        
    }
    else if (TS[pos].entrada != funcion) {
        printf("Error: %s no es una función\n", atrib.lexema) ;
        
    }
    else if (TS[pos].parametros != nParamTmp) {
        printf("Error semántico: número de parámetros incorrecto en la llamada a %s\n", atrib.lexema) ;
        
    }
    
    nParamTmp = 0 ;
}

void comprobarParametro(atributos funcion, atributos param) {
    dtipo tipo_param = buscarTipo(param.lexema) ;
    if (tipo_param!=desconocido) {
        int pos = TOPE - 1;
        while (pos>0 && strcmp(TS[pos].nombre, funcion.lexema)!=0) {
            pos --;
        }
        // if (nParamTmp>TS[]) {
        //     printf("Error semántico: número de parámetros incorrecto\n");
        // }
        // printf("pos: %d, %d\n", pos, nParamTmp) ;
        // printf("tipo: %d, %d\n", TS[pos+nParamTmp+1].tipoDato, param.tipo) ;
        if (nParamTmp<TS[pos].parametros && TS[pos+nParamTmp+1].tipoDato != tipo_param) {
            printf("Error semántico: Tipo de parámetro incorrecto, se esperaba %d y es %d\n", TS[pos+nParamTmp].tipoDato, tipo_param) ;
        }
    } else {
        printf("Error semántico: Parámetro %s no declarado o no tiene tipo asignado\n", param.lexema) ;
    }
}

