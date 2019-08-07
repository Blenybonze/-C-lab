#include <stdio.h>
#include <stdlib.h>

/* Faça um Algoritmo que lê o nome e as 3 notas trimestrais de um aluno. Em Seguida o
algoritmo calcula e escreve a média obtida. */

int i;
float t1,t2,t3; //trimestres
float media,nota;
char nome[15];

int main()
{
    printf("Digite o nome do aluno: ");
    scanf(" %s",&nome);

    for(i=1;i<=3;i++)
    {
	printf("Digite a nota do %d trimestre: ",i);
	scanf(" %f",&nota);

        switch(i)
        {
            case 1:
                t1=nota;
                break;
            case 2:
                t2=nota;
                break;
            case 3:
                t3=nota;
                break;
	}
    }

    media=(t1+t2+t3)/3;

    printf("\nAluno: %s\n",nome);
    printf("A media do aluno e: %f",media);

    return 0;
}
