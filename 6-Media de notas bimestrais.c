#include <stdio.h>
#include <stdlib.h>

/* Faça um Algoritmo que lê o nome e as 4 notas bimestrais de um aluno. Em Seguida o 
algoritmo calcula e escreve a média obtida. */

float a,b,c,d,T;
char nome[15];
void main(void) {
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	printf("Digite a primeira nota: ");
	scanf("%f",&a);
	printf("Digite a segunda nota: ");
	scanf("%f",&b);
	printf("Digite a terceira nota: ");
	scanf("%f",&c);
	printf("Digite a quarta nota: ");
	scanf("%f",&d);
	
	T=(a+b+c+d)/4;
	
	printf("Aluno: %s\n",nome);
	printf("A media do aluno e: %f",T);
	getch();
	
}
