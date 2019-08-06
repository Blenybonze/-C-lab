#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para ler a base e a altura de um triangulo. E em seguida, calcule a área do mesmo. */

int base,altura;
float area;

int main()
{
    printf("Digite a base do triangulo: ");
    scanf("%d",&base);
    printf("Digite a altura do triangulo: ");
    scanf("%d",&altura);
    
    area=(base*altura)/2;
    
    printf("A area do triangulo e de: %f",area);
    
    getch();
	
}
