#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validar.h"
#include "contratacion.h"
#define  LONG_CONTRATACION 1000

int func_obtenerEspacioLibreContratacion(eContratacion* contratacion, int longitud, int index)
{
    int retorno = -1;
    int i;
    if(contratacion != NULL && longitud > 0)
    {
        for(i=index; i<longitud ; i++)
        {
            if(contratacion[i].estado == LUGAR_LIBRE)
            {
                retorno =  i;
                break;
            }
        }

    }
    return retorno;
}

int func_contratarPublicidad (eContratacion* contratacion, int index)
{
    int retorno = -1;
    char bCuit[51];
    char bDiasPublicacion[51];
    char bNombreVideo[51];
    //char bId[51];
    char buffer[51];

    if(contratacion != NULL && index-1 >= 0)
    {
        if(val_getFloat(buffer,"","",3,51)==0)
        {
             if(val_getFloat(bCuit,"\n Ingrese Cuit\n","\nError: Ingrese Cuit valida\n",3,51)==0)
             {
                if(val_getFloat(bDiasPublicacion,"\n Ingrese dias de la publicacion\n","\nError: Ingrese dia valido\n",3,51)==0)
                {
                    if(val_getNombre(bNombreVideo,"\n Ingrese Nombre del video\n","\nError ingrese un nombre valido:\n",3,51)==0)
                    {
                        //contratacion[index-1].id = atoi(bId);
                        contratacion[index-1].cuit = atoi(bCuit);
                        contratacion[index-1].diasPublicacion = atoi(bDiasPublicacion);
                        strncpy(contratacion[index-1].nombreVideo,bNombreVideo,51);
                        contratacion[index-1].estado = LUGAR_OCUPADO;

                    }
                }
             }
        }

    }
    return retorno;
}

int func_initContrataion (eContratacion* contratacion, int longitud)
{
    int retorno = -1;
    int i;
    if(contratacion != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            contratacion[i].estado = LUGAR_LIBRE;
        }

    }
    return retorno;
}

int func_printContratacion (eContratacion* contratacion, int longitud)
{
    int retorno = -1;
    int i;
    if(contratacion != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(contratacion[i].estado == LUGAR_OCUPADO)
            {
                printf("\n Cuit: %d - Dias Publicacion: %d - Nombre Video: %s - ID: %d\n\n",contratacion[i].cuit,contratacion[i].diasPublicacion,contratacion[i].nombreVideo,i);
            }
        }

    }
    return retorno;
}

void func_eliminarContratacion(eContratacion* contratacion, int longitud, int index)
{
    int i;

    for(i= index; i<longitud-1; i++)
    {
        contratacion[i]= contratacion[i+1];
    }
    longitud--;
}

int func_buscarPorCuit(eContratacion* contratacion, int cuit, int longitud)
{
    int retorno = -1;
    int i;
    if(contratacion != NULL && longitud > 0 && cuit >= 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(contratacion[i].cuit == cuit)
            {
                retorno =  i;
                break;
            }
        }

    }
    return retorno;
}


/*int func_modificaContratacion (eContratacion* contratacion, int longitud,int index)
{
    int retorno;
    char bCuit[51];
    char bDiasPublicacion[51];
    char bNombreVideo[51];
    char buffer[51];
    char opcion='s';



    printf("Elija el ID a modificar:%d\n\n");
    printf("Desea seguir? s o n\n\n");
    scanf("%s",&opcion);

    if(opcion=='s')
    {
        if(contratacion != NULL && index >= 0)
        {
            if(val_getFloat(buffer,"","",3,51)==0)
            {
                if(val_getFloat(bCuit,"\n Ingrese Cuit\n","\nError: Ingrese Cuit valida\n",3,51)==0)
                {
                    if(val_getFloat(bDiasPublicacion,"\n Ingrese dias de la publicacion\n","\nError: Ingrese dia valido\n",3,51)==0)
                    {
                        if(val_getNombre(bNombreVideo,"\n Ingrese Nombre del Video\n","\nError ingrese un nombre valido:\n",3,51)==0)
                        {
                            contratacion[index].cuit = atoi(bCuit);
                            contratacion[index].diasPublicacion = atoi(bDiasPublicacion);
                            strncpy(contratacion[index].nombreVideo,bNombreVideo,51);
                            contratacion[index].estado = LUGAR_OCUPADO;
                            retorno = i;
                        }
                    }
                }
            }

        }
    }

    return retorno;
}*/

int func_modificarContratacion(eContratacion* contratacion, int longitud,int index)
{
    int retorno;
    int i;
    //char opcion;
    //int intentos=3;
    int cuit;
    int buffer;



        printf("\nElija la publicidad para modificar:\n");
        for(i=0; i<longitud; i++)
        {
            if(contratacion[i].estado == LUGAR_OCUPADO)
            {
                printf("\n|ID%d- Dias de publicidad: %d\n Nombre del Video %s\n",i,contratacion[i].diasPublicacion,contratacion[i].nombreVideo);
                break;
            }

        }
            system("cls");
            val_getInt(&cuit,"Ingrese cuit del cliente", "A ingresado una opcion no valida",3,1);
            if(contratacion[i].cuit== cuit)
            {
                    val_getInt(&buffer,"Ingrese dias a modificar", "Ingreso una opcio no valida", 3, 3);
                    //pantalla[index].precio = atoi(bPrecio);
                    contratacion[i].diasPublicacion=buffer;
                    retorno = i;
                    printf("\nModificacion exitosa!");

            }

            retorno=cuit;
            //scanf("%d",&indexx);
        /*if(contratacion[indexx].estado == LUGAR_OCUPADO)
        {
            system("cls");
            val_getInt(&cuit,"Ingrese cuit del cliente", "A ingresado una opcion no valida",3,1);

            retorno=cuit;
            //printf("\nEsta a punto de modificar %d\nPresione la tecla S para continuar:",contratacion[index].diasPublicacion);
            //val_getNombre(&opcion,"Ingrese S para seguir", "A ingresado una opcion no valida",3,1);
        }*/


            //system("cls");
            //val_getInt(&cuit,"Ingrese cuit del cliente", "A ingresado una opcion no valida",3,1);
            //retorno=cuit;
            //func_cargaDiasPublicacion(contratacion, cuit,"Ingrese la cantidad de dias de prublicacion", "Cantidad de dias no validos",LONG_CONTRATACION);


    return retorno;
}

int func_cargaDiasPublicacion (eContratacion* contratacion,int cuit, char mensaje[],char msjError[],int longitud)
{
    int buffer=0;
    int retorno;
    int i;

       for(i=0;i<longitud;i++)
        {


            //retorno=buffer;
            if(contratacion[i].cuit== cuit)
            {
                    val_getInt(&buffer,mensaje, msjError, 3, 3);
                    //pantalla[index].precio = atoi(bPrecio);
                    contratacion[i].diasPublicacion=buffer;
                    retorno = i;
                    printf("\nModificacion exitosa!");

            }
        }

        return retorno;

}
