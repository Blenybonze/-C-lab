#include <stdio.h>
#include <stdlib.h>

/* Faça um Algoritmo que leia o nome de um cliente de Fast Food
e a quantidade de cada item do menu. Mostre o nome do cliente e o total da Compra.

Menu:
Hot-Dog             1.00
Hamburguer          1.30
Cheeseburguer       1.50
Refrigerante lata   1.00
batata frita        0.80 
*/

float hot,ham,che,refri,batt;
char nome[15];
void main(void) {
	printf("Digite o seu Nome: ");
	scanf("%s",&nome);
	printf("valor do pedido 1: ");
	scanf("%f",&hot);
	printf("valor do pedido 2: ");
	scanf("%f",&ham);
	printf("valor do pedido 3: ");
	scanf("%f",&che);
	printf("valor do pedido 4: ");
	scanf("%f",&refri);
	printf("valor do pedido 5: ");
	scanf("%f",&batt);
	
	printf("Cliente: %s\n",nome);
	printf("Total: %f",hot+ham+che+refri+batt);
	getch();
}
