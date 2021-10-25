#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float aplicarAumento(int precio); //que devuelva aumento del %5

int reemplazarCaracter(char char1[], char char2, char 3);

int main()
{
    int num = 18;
    float aumento;


    aumento = aplicarAumento(num);

    printf("%.2f", aumento);

    return 0;
}

float aplicarAumento(int precio)
{
    float resultado;


    resultado = (float)precio + (precio*5/100);

    return resultado;
}

int reemplazarCaracter(char char1[], char char2, char 3)
{



    return
}
