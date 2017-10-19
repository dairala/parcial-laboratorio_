#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validar.h"

#define MAX_INPUT 1000

void myFgets(char* buffer, int limite ,FILE* archivo)
{
    int i=0;
    fgets(buffer, limite ,archivo);
    buffer[limite-1] = '\0';
    while(buffer[i] != '\0')
    {
        if(buffer[i] == 10)
        {
            buffer[i] = '\0';
            break;
        }
        i++;
    }
}
int val_getNombre(char* destino, char* msj,char* msjError,int intentos,int limite)
{
    int retorno = -1;
    char buffer[MAX_INPUT];

    if(destino != NULL && limite > 0 && limite < MAX_INPUT)
    {
        printf(msj);
        for( ;intentos>0;intentos--)
        {

            myFgets(buffer, limite ,stdin);

            if(val_validarNombre(buffer) == -1)
            {
                printf(msjError);
                continue;
            }
            else
            {
                strncpy(destino,buffer,limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}

int val_validarNombre(char* buffer)
{
    int i=0;
    int retorno = 0;
    while(buffer[i] != '\0')
    {
        if((buffer[i] < 'a' || buffer[i] > 'z') && (buffer[i] < 'A' || buffer[i] > 'Z'))
        {
            retorno = -1;
            break;
        }
        i++;
    }
    return retorno;
}

int val_getFloat(char* destino, char* msj,char* msjError,int intentos,int limite)
{
    int retorno = -1;
    char buffer[MAX_INPUT];

    if(destino != NULL && limite > 0 && limite < MAX_INPUT)
    {
        printf(msj);
        for( ;intentos>0;intentos--)
        {

            myFgets(buffer, limite ,stdin);

            if(val_validarFloat(buffer) == -1)
            {
                printf(msjError);
                continue;
            }
            else
            {
                strncpy(destino,buffer,limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}

int val_validarFloat(char* buffer)
{
    int i=0;
    int retorno = 0;
    while(buffer[i] != '\0')
    {
        if((buffer[i] < '0' || buffer[i] > '9') && buffer[i] == '-')
        {
            retorno = -1;
            break;
        }
        i++;
    }
    return retorno;
}

int val_getDireccion(char* destino, char* msj,char* msjError,int intentos,int limite)
{
    int retorno = -1;
    char buffer[MAX_INPUT];

    if(destino != NULL && limite > 0 && limite < MAX_INPUT)
    {
        printf(msj);
        for( ;intentos>0;intentos--)
        {

            myFgets(buffer, limite ,stdin);

            if(val_validarDireccion(buffer) == -1)
            {
                printf(msjError);
                continue;
            }
            else
            {
                strncpy(destino,buffer,limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}
int val_validarDireccion(char* buffer)
{
    int i=0;
    int retorno = 0;
    while(buffer[i] != '\0')
    {
        if((buffer[i] < 'a' || buffer[i] > 'z') && (buffer[i] < 'A' || buffer[i] > 'Z'))
        {
            if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i]!=32)
            {
                retorno = -1;
                break;
            }
        }
     i++;
    }
    return retorno;
}

char getChar(char mensaje[])
{
    char caracter;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&caracter);
    return caracter;
}

int val_getInt(int* destino, char* msj,char* msjError,int intentos,int limite)
{
    int retorno = -1;
    int buffer;

    if(destino != NULL && limite > 0 && limite < MAX_INPUT)
    {
        printf(msj);
        for( ;intentos>0;intentos--)
        {

            scanf("%d",&buffer);

            if(val_validarInt(buffer) == -1)
            {
                printf(msjError);
                continue;
            }
            else
            {
                *destino=buffer;
                //strncpy(destino,buffer,limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}

int val_validarInt(int* buffer)
{
    int i=0;
    int retorno = 0;


        if((buffer[i] > '0' || buffer[i] < '9') && buffer[i] != '-')
        {
            retorno = -1;

        }


    return retorno;
}

