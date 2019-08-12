#include <stdio.h>
#include <stdlib.h>

/*Encontrar números primos é uma tarefa difícil. Faça um programa
que gera uma lista dos números primos existentes entre 1 e um número
inteiro informado pelo usuário.
*/
int i,numero;
int main()
{
    printf("Digite um numero inteiro e direi se ele e primo ou nao: ");
    scanf("%d",&numero);

    for(i=1;i<=numero;i++)
    {
        if(i%i==0&&i%1==0&&i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i%11!=0)
            printf("%d e Primo\n",i);

        else if(i==1||i==2||i==3||i==5||i==7||i==11)
            printf("%d e Primo\n",i);
    }

    return 0;
}
