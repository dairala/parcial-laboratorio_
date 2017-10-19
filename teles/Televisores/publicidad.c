#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validar.h"
#include "pantallas.h"
#include "contratacion.h"



#define  LONG_PANTALLA 100
#define  LONG_CONTRATACION 1000

//int func_modificaPublicidad (eContratacion* contratacion, int longitud,int index)
//{
//    ePantalla pantalla[LONG_PANTALLA];
//    int retorno = 0;
//    char opcion='s';
//    int id;
//
//
//    func_printPantalla(pantalla, LONG_PANTALLA);
//
//    printf("Elija el ID a modificar:\n\n");
//    printf("Desea seguir? s o n\n\n");
//    scanf("%d",&id);
//
//    func_modificaPantalla(pantalla, LONG_PANTALLA, id);
//
//    return retorno;
//
//}
//
//int func_modificaPantalla (ePantalla* pantalla, int longitud,int index)
//{
//    int retorno = -1;
//    char bNombre[51];
//    char bDireccion[51];
//    char bPrecio[51];
//    char buffer[51];
//    char opcion='s';
//
//    printf("Usted esta por modificar el ID:%d\n\n",index);
//    printf("Desea seguir? s o n\n\n");
//    scanf("%s",&opcion);
//
//    if(opcion=='s')
//    {
//
//
//            if(pantalla != NULL && longitud >= 0)
//            {
//                if(val_getFloat(buffer,"","",3,51)==0)
//                {
//                    if(val_getNombre(bNombre,"\n Ingrese Nombre\n","\nError: Ingrese un nombre valida\n",3,51)==0)
//                    {
//                        if(val_getFloat(bPrecio,"\n Ingrese Precio\n","\nError: Ingrese un precio valido\n",3,51)==0)
//                        {
//                            if(val_getDireccion(bDireccion,"\n Ingrese Direccion\n","\nError ingrese una direccion valido:\n",3,51)==0)
//                            {
//                                strncpy(pantalla[index].nombre,bNombre,51);
//                                pantalla[index].precio = atoi(bPrecio);
//                                strncpy(pantalla[index].direccion,bDireccion,51);
//                                pantalla[index].estado = LUGAR_OCUPADO;
//                            }
//                        }
//                    }
//                }
//            }
//
//    }
//    return retorno;
//}

//int func_printPantalla (ePantalla* pantalla, int longitud)
//{
//    int retorno = -1;
//    int i;
//    if(pantalla != NULL && longitud > 0)
//    {
//        for(i=0; i<longitud ; i++)
//        {
//            if(pantalla[i].estado == LUGAR_OCUPADO)
//            {
//                printf("\n |ID: %d\t Nombre:%s\t Precio:%d\t Direccion:%s\n\n",i,pantalla[i].nombre,pantalla[i].precio,pantalla[i].direccion);
//            }
//        }
//
//    }
//    return retorno;
//}
