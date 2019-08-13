#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será digitado pelo usuário, mas a tabuada não deve
necessariamente iniciar em 1 e terminar em 10, o valor inicial e final devem ser informados também pelo usuário, conforme exemplo
abaixo:

Montar a tabuada de: 5

Começar por: 4
Terminar em: 7

Vou montar a tabuada de 5 começando em 4 e terminando em 7:
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35*/

int tabuada,inicio,fim,reset;
int i,j;
int main()
{
    for(i=1;i>=1;i++)
    {
        printf("Montar a Tabuada de: ");
        scanf("%d",&tabuada);
        printf("Comecar em: ");
        scanf("%d",&inicio);
        printf("Terminar em: ");
        scanf("%d",&fim);

        if(inicio<fim)
        {
            for(j=inicio;j<=fim;j++) 
            {
                printf("%d X %d = %d\n",tabuada,j,tabuada*j);
            }

            printf("Fazer outra operação?:\n[1]-SIM    [2]-NAO\n");
            scanf("%d",&reset);

            switch(reset)
            {
                case 1:
                    i=1;
                    break;
                case 2:
                    i=2;
                    break;
            }
        }

        else
        {
            printf("Erro, numero de inicio maior que o numero de fim.");
            i=1;
        }
    }

    return 0;
}
