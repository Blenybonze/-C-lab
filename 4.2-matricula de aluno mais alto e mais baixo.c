#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o
segundo representando a sua altura em centímetros.Encontre o aluno mais alto e o mais baixo. Mostre o
número do aluno mais alto e o número do aluno mais baixo, junto com suas alturas.
*/

int i=1,matricula,altura,maisalto,maisbaixo,matriculaalto,matriculabaixo;

int main()
{
    do
    {
        printf("\nEntre com o codigo de matricula: ");
        scanf("%d",&matricula);
        printf("Qual sua altura em cm?: ");
        scanf("%d",&altura);

        if(i==1)
        {
            maisalto=maisbaixo=altura;
            matriculaalto=matriculabaixo=matricula;
        }

        else if(altura>maisalto)
        {
            maisalto=altura;
            matriculaalto=matricula;
        }

        else if(altura<maisbaixo)
        {
            maisbaixo=altura;
            matriculabaixo=matricula;
        }

        i=i+1;
    }

    while(i<=10);

    printf("\n\nAluno: %d e Mais alto: %d",matriculaalto,maisalto);
    printf("\nAluno: %d e Mais baixo: %d",matriculabaixo,maisbaixo);


    return 0;
}
