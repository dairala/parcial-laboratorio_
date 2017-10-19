#include <stdio.h>
#include <stdlib.h>


   //int pedirNumero(float* a)
    //{
      //  float x;
        //int retorno=0;
       // printf("Ingrese el primer numero:");
       // scanf("%f",&x);
       // retorno=-1;
        //  if(x<100||x>0)
         // {
          //  printf("ERROR,Fuera del rango:\n");
           // return retorno;
          //}
          //else
          //{
            //*a=x;
           // return 0;
          //}
          //return retorno;
      //}
     int pedirNumero2(char msg[],float* x, float maximo, float minimo)
     {
         float aux;
         int retorno=-1;
         printf("%s\n",msg);
         scanf("%f",&aux);
         if(aux<maximo && aux>minimo)
         {
             *x=aux;
             retorno=0;
             return retorno;
         }
         return retorno;
     }

    //float pedirNumero(float y)
    //{
    //   printf("Ingrese el segundo numero : \n");
   //    scanf("%f",&y);
    //   return y;
   // }
