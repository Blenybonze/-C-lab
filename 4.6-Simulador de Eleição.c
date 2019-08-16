#include <stdio.h>
#include <stdlib.h>

/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são:

1 , 2, 3, 4  - Votos para os respectivos candidatos
(você deve montar a tabela ex: 1 - Jose/ 2- João/etc)
5 - Voto Nulo
6 - Voto em Branco

Faça um programa que calcule e mostre:
O total de votos para cada candidato;
O total de votos nulos;
O total de votos em branco;
A percentagem de votos nulos sobre o total de votos;
A percentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos tem-se o valor zero.

*/

int i,numcandidato;
float fulano,joao,pessoa,seila,nulo,branco,porcentagemnulo,porcentagembranco,totalvotos;
int main()
{
    do
    {
        printf("\nEscolha um Candidato ou Tecle 0 para Encerrar a operacao.\n[1]-Fulano               [2]-Joao da silva\n[3]-Pessoa sei que la    [4]-Sei la o que\n[5]-Voto Nulo            [6]-Voto em Branco\n\nTecle o numero que corresponde ao candidato desejado: ");
        scanf("%d",&numcandidato);
        switch(numcandidato)
        {
            case 1:
                printf("Voce elegeu Fulano.\n");
                fulano=fulano+1;
                break;
            case 2:
                printf("Voce elegeu joao.\n");
                joao=joao+1;
                break;
            case 3:
                printf("Voce elegeu pessoa.\n");
                pessoa=pessoa+1;
                break;
            case 4:
                printf("Voce elegeu sei la.\n");
                seila=seila+1;
                break;
            case 5:
                printf("Voce votou nulo.\n");
                nulo=nulo+1;
                break;
            case 6:
                printf("Voce votou em branco.\n");
                branco=branco+1;
                break;
        }
    }

    while(numcandidato>0);

    totalvotos=fulano+joao+pessoa+seila+nulo+branco;

    porcentagemnulo=100/totalvotos;porcentagemnulo=porcentagemnulo*nulo;
    porcentagembranco=100/totalvotos;porcentagembranco=porcentagembranco*branco;

    printf("\n\nO total de votos geral foi de: %.f\n\nO total de votos para Fulano foi de: %.f\nO total de votos para Joao foi de %.f\nO total de votos para Pessoa foi de: %.f\nO total de votos para Sei La foi de: %.f\n O total de votos nulos foi de: %.f\nO total de votos em Branco foi de %.f\n",totalvotos,fulano,joao,pessoa,seila,nulo,branco);
    printf("\n\nA porcentagem de votos nulos sobre o total de votos e de: %.f por cento\nA porcentagem de votos brancos sobre o total de votos e de: %.f por cento\n",porcentagemnulo,porcentagembranco);

    return 0;
}
