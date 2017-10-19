#ifndef PANTALLAS_H_INCLUDED
#define PANTALLAS_H_INCLUDED
typedef struct
{
    int id;
    char nombre[50];
    char direccion[60];
    int precio;
    unsigned char estado;

}ePantalla;
#endif // FUNCIONES_H_INCLUDED
#define PANTALLAS_H_INCLUDED
#define LUGAR_LIBRE 0
#define LUGAR_OCUPADO 1

int func_obtenerEspacioLibrePantalla(ePantalla* pantalla, int longitud);
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int func_buscarPorId(ePantalla* pantalla, int index, int longitud);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int func_cargarPantalla (ePantalla* pantalla, int index);
/**
 * Carga los datos obtenidos en sus campos orrespondientes
 * @param lista el array se pasa como parametro.
 * @param se pasa indice de los lugaes libres para cargar y pone el flag en OCUPADO.
 * @return devuelve -1
 */
int func_initPantalla (ePantalla* pantalla, int longitud);
/**
 * Recorre todo el array inicializando el flag estado LUAR LIBRE
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @return devuelve 1
 */
int func_printPantalla (ePantalla* pantalla, int longitud);
/**
 * Imprime lista ordenado por nombre delarray en donde el flag estado este OCUPADO
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @return devuelve -1
 */
void func_eliminarPantalla(ePantalla* pantalla, int longitud, int index);
/**
 * Elimina persona por DNI
 * @param lista el array se pasa como parametro.
 * @param se pasa tamaño del array.
 * @param se pasa indice del DNI a eliminar.
 * @return no devuelve nada
 */

int func_generaId(ePantalla* pantalla, int index, int longitud);
int func_modificaPantalla (ePantalla* pantalla, int longitud, int index);
