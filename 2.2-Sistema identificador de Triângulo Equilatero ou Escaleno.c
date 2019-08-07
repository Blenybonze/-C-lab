#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia três lados de um triângulo e mostre se ele é Equilatero ou Escaleno.
O equilatero tem tres lados iguals, ja o escaleno tem os lados diferentes.
*/


float lado1,lado2,lado3;

int main()
{
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f",&lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f",&lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f",&lado3);

    if(lado1==lado2&&lado2==lado3)
        printf("\nTriangulo Equilatero\n\n");

    else
        printf("\nTriangulo Escaleno\n\n");

    return 0;
}
