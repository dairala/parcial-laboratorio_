#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pantallas.h"
#include "validar.h"


int func_obtenerEspacioLibrePantalla(ePantalla* pantalla, int longitud)
{
    int retorno = -1;
    int i;
    if(pantalla != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(pantalla[i].estado == LUGAR_LIBRE)
            {
                //pantalla[i].id = pantalla[i+1]
                retorno =  i;
                break;
            }
        }

    }
    return retorno;
}

int func_cargarPantalla (ePantalla* pantalla, int index)
{
    int retorno = -1;
    char bNombre[51];
    char bDireccion[51];
    char bPrecio[51];
    char buffer[51];

    if(pantalla != NULL && index >= 0)
    {
        if(val_getFloat(buffer,"","",3,51)==0)
        {
             if(val_getNombre(bNombre,"\n Ingrese Nombre\n","\nError: Ingrese un nombre valida\n",3,51)==0)
             {
                if(val_getFloat(bPrecio,"\n Ingrese Precio\n","\nError: Ingrese un precio valido\n",3,51)==0)
                {
                    if(val_getDireccion(bDireccion,"\n Ingrese Direccion\n","\nError ingrese una direccion valido:\n",3,51)==0)
                    {
                        strncpy(pantalla[index].nombre,bNombre,51);
                        pantalla[index].precio = atoi(bPrecio);
                        strncpy(pantalla[index].direccion,bDireccion,51);
                        pantalla[index].estado = LUGAR_OCUPADO;
                    }
                }
             }
        }

    }
    return retorno;
}

int func_initPantalla (ePantalla* pantalla, int longitud)
{
    int retorno = -1;
    int i;
    if(pantalla != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            pantalla[i].estado = LUGAR_LIBRE;
        }

    }
    return retorno;
}

int func_printPantalla (ePantalla* pantalla, int longitud)
{
    int retorno = -1;
    int i;
    if(pantalla != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(pantalla[i].estado == LUGAR_OCUPADO)
            {
                printf("\n |ID: %d\t Nombre:%s\t Precio:%d\t Direccion:%s\n\n",i+1,pantalla[i].nombre,pantalla[i].precio,pantalla[i].direccion);
            }
        }

    }
    return retorno;
}

void func_eliminarPantalla(ePantalla* pantalla, int longitud, int index)
{
    int i;

    for(i= index-1; i<longitud-1; i++)
    {
        pantalla[i]= pantalla[i+1];
    }
    longitud--;
}

int func_buscarPorId(ePantalla* pantalla, int index, int longitud)
{
    int retorno = -1;
    int i;
    if(pantalla != NULL && longitud > 0 && index >= 0)
    {
        for(i=0; i<longitud ; i++)
        {
            retorno =  i;
            if(i+1 == index)
            {
                retorno =  i;
                break;
            }
        }

    }
    return retorno;
}


/*int func_obtenerIndiceEdad(ePantalla* pantalla, int longitud)
{
    int retorno = -1;
    int i;
    if(pantalla != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(pantalla[i].estado == LUGAR_OCUPADO)
            {
                retorno =  i;
                break;
            }
        }

    }
    return retorno;
}*/
int func_generaId(ePantalla* pantalla, int index, int longitud)
{
    int retorno = -1;
    int i;
    int num;
    if(pantalla != NULL && longitud > 0 && index >= 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(i == index)
            {
                srand(time(NULL));
                num = rand()%101;
                retorno =  num;
                break;
            }
        }

    }
    return retorno;
}

int func_modificaPantalla (ePantalla* pantalla, int longitud,int index)
{
    int retorno = -1;
    char bNombre[51];
    char bDireccion[51];
    char bPrecio[51];
    char buffer[51];
    char opcion='s';

    printf("Usted esta por modificar el ID:%d\n\n",index);
    printf("Desea seguir? s o n\n\n");
    scanf("%s",&opcion);

    if(opcion=='s')
    {


            if(pantalla != NULL && longitud >= 0)
            {
                if(val_getFloat(buffer,"","",3,51)==0)
                {
                    if(val_getNombre(bNombre,"\n Ingrese Nombre\n","\nError: Ingrese un nombre valida\n",3,51)==0)
                    {
                        if(val_getFloat(bPrecio,"\n Ingrese Precio\n","\nError: Ingrese un precio valido\n",3,51)==0)
                        {
                            if(val_getDireccion(bDireccion,"\n Ingrese Direccion\n","\nError ingrese una direccion valido:\n",3,51)==0)
                            {
                                strncpy(pantalla[index].nombre,bNombre,51);
                                pantalla[index].precio = atoi(bPrecio);
                                strncpy(pantalla[index].direccion,bDireccion,51);
                                pantalla[index].estado = LUGAR_OCUPADO;
                            }
                        }
                    }
                }
            }

    }
    return retorno;
}
