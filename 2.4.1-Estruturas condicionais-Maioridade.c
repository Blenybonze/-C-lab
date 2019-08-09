#include <stdio.h>
#include <stdlib.h>

/* Crie um algoritmo capaz de identificar a idade de alguem Apenas pelo ano nascido */

int atual,nascimento,idade;
void main(void) 
{
	printf("Qual o ano atual: ");
	scanf("%d",&atual);
	printf("Qual o ano do seu nascimento: ");
	scanf("%d",&nascimento);
	
	idade=atual-nascimento;
	
	if(idade>17)
	    printf("O usuario e maior de idade, tendo: %d anos",idade);
        else
            printf("o usuario e menor de idade, tendo %d anos",idade);
}


