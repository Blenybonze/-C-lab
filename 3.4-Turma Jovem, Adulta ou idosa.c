#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que peça para N pessoas a sua idade, ao final o programa devera verificar se
 a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então,
dizer se a turma é jovem, adulta ou idosa, conforme a média calculada. */

int i,idade; //Idade digitada pelo usuario
int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10; //Alunos
float media,idadetotal; //variaveis responsaveis para armazenamento de numeros digitados
int reset; //variavel responsavel por dar opção ao usuario de reiniciar o programa

int main()
{
    for(i=1;i<=10;i++)//10 alunos
    {
	printf("Idade do Aluno: ");
	scanf("%d",&idade);

	idadetotal=idadetotal+idade;

	if(i==10)
        {
	    media=idadetotal/10;
            printf("\nMedia de idade da turma: %f\n",media);

            if(media>0&&media<=25)
	        printf("\nOs alunos desta turma sao Jovens.");

            else if(media>=26&&media<=60)
                printf("\nOs alunos desta turma sao Adultos.");

            else if(media>60)
                printf("\nOs alunos desta turma sao Idosos.");


            printf("\nDeseja tirar a media de uma nova turma?\n[1]-SIM   [2]-NAO\n");
            scanf("%d",&reset);

            switch(reset)
            {
                case 1:
                    printf("\n---------------------\nReiniciando\n---------------------\n");
                    i=1;
                    break;
                default:
                    printf("Programa Encerrado.\n---------------------\n");
            }
        }
    }
    return 0;
}
