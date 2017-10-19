#include <stdio.h>
#include <stdlib.h>
#include "pantallas.h"
#include "contratacion.h"
#include "publicidad.h"


#define  LONG_PANTALLA 100
#define  LONG_CONTRATACION 1000


int main()
{
    char seguir='s';
    int opcion;
    int index;
    ePantalla pantalla[LONG_PANTALLA];
    eContratacion contratacion[LONG_CONTRATACION];
    func_initPantalla(pantalla,LONG_PANTALLA);
    func_initContrataion (contratacion,LONG_CONTRATACION);

    while(seguir=='s')
    {
        printf("1- Alta de Pantalla\n\n");
        printf("2- Modificar datos de pantalla\n\n");
        printf("3- Baja de pantalla\n\n");
        printf("4- Contratar una publicidad\n\n");
        printf("5- Modificar contratacion de publicacion\n\n");
        printf("6- Cancelar contratacion\n\n");
        printf("7- Consulta de facturacion\n\n");
        printf("8- Listar contratacion\n\n");
        printf("9- Listar pantallas\n\n");
        printf("10- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                func_cargarPantalla(pantalla,func_obtenerEspacioLibrePantalla(pantalla,LONG_PANTALLA));
                break;
            case 2:
                printf("\nIngrese ID de la pantalla a modificar:\n ");
                scanf("%d", &index-1);
                func_modificaPantalla(pantalla, LONG_PANTALLA, index);
                break;
            case 3:
                printf("\nIngrese ID de la pantalla a eliminar:\n ");
                scanf("%d", &index);
                func_eliminarPantalla(pantalla, LONG_PANTALLA, index);
                break;
            case 4:
                func_printPantalla(pantalla,LONG_PANTALLA);
                printf("\nIngrese ID de la pantalla para agregar la publicidad:\n ");
                scanf("%d", &index);
                func_contratarPublicidad(contratacion,func_obtenerEspacioLibreContratacion(contratacion, LONG_CONTRATACION,index));
                //func_modificarContratacion(contratacion,LONG_CONTRATACION,index);
                //func_cargaDiasPublicacion(contratacion,func_modificarContratacion(contratacion,LONG_CONTRATACION,index),"Ingrese la cantidad de dias de prublicacion", "Cantidad de dias no validos", LONG_CONTRATACION);
                //func_contratarPublicidad(contratacion,index);
                break;
            case 5:
                //func_printPantalla(pantalla,LONG_PANTALLA);
                //printf("\nIngrese ID de la pantalla para agregar la publicidad:\n ");
                //scanf("%d", &index-1);
                //func_modificarContratacion(contratacion,LONG_CONTRATACION,index);
                //func_cargaDiasPublicacion(contratacion,func_modificarContratacion(contratacion,LONG_CONTRATACION,index),"Ingrese la cantidad de dias de prublicacion", "Cantidad de dias no validos", LONG_CONTRATACION);
                //func_contratarPublicidad(contratacion,index);


                printf("\nIngrese el CUIT del cliente para modificar la publicidad:\n ");
                scanf("%d", &index);
                 func_cargaDiasPublicacion(contratacion,func_modificarContratacion(contratacion,LONG_CONTRATACION,index),"Ingrese la cantidad de dias de prublicacion", "Cantidad de dias no validos", LONG_CONTRATACION);
                //func_modificaContratacion(contratacion, LONG_CONTRATACION, index);
                //func_modificaPublicacio(contratacion,LONG_CONTRATACION,index);
                //func_modificaContratacion (contratacion, LONG_CONTRATACION,func_buscarPorCuit(contratacion,index, LONG_CONTRATACION));

                break;
            case 6:
                printf("\nIngrese ID de la publicidad a eliminar:\n ");
                scanf("%d", &index);
                func_eliminarContratacion(contratacion, LONG_CONTRATACION, func_buscarPorCuit(contratacion,index,LONG_CONTRATACION));
                break;
            case 7:

                break;
            case 8:
                func_printContratacion(contratacion,LONG_CONTRATACION);
                break;
            case 9:
                func_printPantalla(pantalla,LONG_PANTALLA);
                break;
            case 10:
                seguir = 'n';
                break;
            default:
                printf("\nIngreso una opcion no valida:\n ");
        }
    }
    return 0;
}
