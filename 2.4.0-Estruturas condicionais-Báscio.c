#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que peça dois números inteiros ao usuario e mostre qual o maior e qual o menor.*/

int n1,n2;
void main(void)
{
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d",&n2);

	if(n1>n2)
		printf("O primeiro numero inteiro e maior: %d",n1);

	else
		printf("O segundo numero inteiro e maior: %d",n2);

}

	




