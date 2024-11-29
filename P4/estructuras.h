// ************************************************************************
// ***
// *** Fichero : ESTRUCTURAS.H
// *** Funcion : Declaración de la Tabla de Símbolos para prácticas de PL
// ***
// ************************************************************************


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
    int atrib ; // Atributo del símbolo (si tiene )
    char *lexema ; // Nombre del lexema
    dtipo tipo ; // Tipo del símbolo
} atributos ;

# define YYSTYPE atributos  // A partir de ahora , cada símbolo tiene una estructura de tipo atributos


/**************************************/
/* Definición de la tabla de símbolos */
/**************************************/

# define MAX_TS 500

unsigned int TOPE = 0 ; // Tope de la pila
unsigned int Subprog ; // Indicador de comienzo de bloque de un subprog

typedef struct {
    tipoEntrada     entrada ;
    char            *nombre ;
    dtipo           tipoDato ;
    unsigned int    parametros ;
    unsigned int    dimension ;
} entradaTS ;

entradaTS TS[MAX_TS] ; // Pila de la tabla de símbolos

dtipo tipoTmp ; // Variable global para almacenar el tipo de los identificadores


/***********************************/
/* Métodos de la tabla de símbolos */
/***********************************/

void TS_VaciarENTRADAS() ;

void TS_comprobarUnico(char *lexema) ;

void TS_duplicaParametros() ;

void TS_insertaMARCA() ;

void TS_insertaID(char *lexema) ;

void TS_insertaPARAMETRO(char *lexema) ;

void TS_insertaIDENT(char *lexema) ;

void TS_insertaFUNCION(char *lexema) ;

void TS_aumentaPARAMETROS() ;

void TS_mostrar() ;

