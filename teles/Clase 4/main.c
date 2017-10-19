#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
#include "Consola.h"

int main()
{
    float rSuma,rResta,rMulti,rDivision,y,x;
    //printf("Ingrese el primer numero :\n");
    //scanf("%f",&x);
    if(pedirNumero2("Ingrese primer numero",&x,100,-10)==-1)
    {
        printf("eRROR");
    }
     if(pedirNumero2("Ingrese segundo numero",&y,100,-10)==-1)
    {
        printf("eRROR");
    }
    //printf("Ingrese el segundo numero : \n");
   // scanf("%f",&y);

    if(calculadora(&rDivision,&rSuma,&rResta,&rMulti,x,y)== -1)
    {
        printf("Error");
    }
    else
    {
        printf("La division es : %.2f",rDivision);
    }
    printf("\nLa suma es: %.2f", rSuma);
    printf("\nLa resta es: %.2f",rResta);
    printf("\nLa multiplicacion es %.2f", rMulti);
    return 0;
}
