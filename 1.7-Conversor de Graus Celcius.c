#include <stdio.h>
#include <stdlib.h>

/* faça um algoritmo para ler uma temperatura dada na escala fahrenheit e exibir o quivalente em celsius.
Sendo:
C=5/9(F-32)
*/

float far,c;

void main(void) 
{
    printf("temperatura em F: ");
    scanf("%f",&far);
	
    c=(float)5/9*(far-32);
    printf("A temperatura em graus Celsius e de: %f",c);
}
