#ifndef CONTRATACION_H_INCLUDED
#define CONTRATACION_H_INCLUDED
typedef struct
{
    int cuit;
    int id;
    int diasPublicacion;
    char nombreVideo[50];
    unsigned char estado;


}eContratacion;
#endif // FUNCIONES_H_INCLUDED
#define CONTRATACION_H_INCLUDED
#define LUGAR_LIBRE 0
#define LUGAR_OCUPADO 1
#define LONG_PANTALLA 100

int func_obtenerEspacioLibreContratacion(eContratacion* contratacion, int longitud, int index);
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int func_buscarPorCuit(eContratacion* contratacion, int cuit, int longitud);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int func_contratarPublicidad (eContratacion* contratacion, int index);
/**
 * Carga los datos obtenidos en sus campos orrespondientes
 * @param lista el array se pasa como parametro.
 * @param se pasa indice de los lugaes libres para cargar y pone el flag en OCUPADO.
 * @return devuelve -1
 */
int func_initContrataion (eContratacion* contratacion, int longitud);
/**
 * Recorre todo el array inicializando el flag estado LUAR LIBRE
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @return devuelve 1
 */
int func_printContratacion (eContratacion* contratacion, int longitud);
/**
 * Imprime lista ordenado por nombre delarray en donde el flag estado este OCUPADO
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @return devuelve -1
 */
void func_eliminarContratacion(eContratacion* contratacion, int longitud, int index);
/**
 * Elimina persona por DNI
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @param se pasa indice del DNI a eliminar.
 * @return no devuelve nada
 */
//int func_modificaContratacion (eContratacion* contratacion, int longitud,int index);


int func_cargaDiasPublicacion (eContratacion* contratacion,int cuit, char mensaje[],char msjError[],int longitud);

int func_modificarContratacion(eContratacion* contratacion, int longitud,int index);

