#include <stdio.h>
#include <stdlib.h>

/*
Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões, o programa deve perguntar
ao aluno a resposta de cada questão e ao final comparar com o gabarito da prova e assim calcular o total de
acertos e a nota (atribuir 1 ponto por resposta certa). Após cada aluno utilizar o sistema deve ser feita uma
pergunta se outro aluno vai utilizar o sistema. Após todos os alunos terem respondido informar:

Maior e Menor Acerto;
Total de Alunos que utilizaram o sistema;
A Média das Notas da Turma.
Gabarito da Prova:

01 - A
02 - B
03 - C
04 - D
05 - E
06 - E
07 - D
08 - C
09 - B
10 - A

Após concluir isto você poderia incrementar o programa permitindo que o professor digite o gabarito da prova antes dos alunos usarem o programa.

*/

char q1,q2,q3,q4,q5,q6,q7,q8,q9,q10; //Questoes feitas pelo aluno de 1 a 10
char g1,g2,g3,g4,g5,g6,g7,g8,g9,g10; //gabarito escolhido pelo professor de 1 a 10

int i=1,acerto,reset,maioracerto,menoracerto,media,aluno=1;

int main()
{
    printf("Escolha o gabarito da prova de 1 a 10:\n");
    scanf(" %c %c %c %c %c %c %c %c %c %c",&g1,&g2,&g3,&g4,&g5,&g6,&g7,&g8,&g9,&g10);

    do
    {
        printf("\n01 ");
        scanf(" %c",&q1);

        printf("\n02-: ");
        scanf(" %c",&q2);

        printf("\n03:  ");
        scanf(" %c",&q3);

        printf("\n04: ");
        scanf(" %c",&q4);

        printf("\n05: ");
        scanf(" %c",&q5);

        printf("\n06: ");
        scanf(" %c",&q6);

        printf("\n07: ");
        scanf(" %c",&q7);

        printf("\n08: ");
        scanf(" %c",&q8);

        printf("\n09: ");
        scanf(" %c",&q9);

        printf("\n010: ");
        scanf(" %c",&q10);


        if(q1==g1)
            acerto=acerto+1;

        if(g2==q2)
            acerto=acerto+1;

        if(g3==q3)
            acerto=acerto+1;

        if(g4==q4)
            acerto=acerto+1;

        if(g5==q5)
            acerto=acerto+1;

        if(g6==q6)
            acerto=acerto+1;

        if(g7==q7)
            acerto=acerto+1;

        if(g8==q8)
            acerto=acerto+1;

        if(g9==q9)
            acerto=acerto+1;

        if(g10==q10)
            acerto=acerto+1;


        if(i==1)
            maioracerto=menoracerto=acerto;

        if(acerto>maioracerto) //Definindo maiores acertos
            maioracerto=acerto;

        if(acerto<menoracerto) //Definindo menores acertos
            menoracerto=acerto;

        media=media+acerto;  //Definindo media dos acertos

        printf("\nVoce acertou %d questoes\n",acerto);

        printf("\nDeseja repetir a prova?\n[1]-SIM     [2]-NAO\n");
        scanf("%d",&reset);

        switch(reset)
        {
            case 1:
                i=i+1;
                aluno=aluno+1;
                acerto=0;
                break;
            default:
                reset=0;
                break;
        }
    }

    while(reset>0);

    printf("\nO maior acerto foi de %d",maioracerto);
    printf("\nO menor acerto foi de %d",menoracerto);
    printf("\n%d alunos utilizaram o sistema.",aluno);
    printf("\nA media da nota dos alunos foi de: %d\n",media/i);

    return 0;
}
