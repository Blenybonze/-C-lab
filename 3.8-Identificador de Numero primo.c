#include <stdio.h>
#include <stdlib.h>

/*Os números primos possuem várias aplicações dentro da Computação, por exemplo na Criptografia.
 Um número primo é aquele que é divisível apenas por um e por ele mesmo. Faça um programa que peça
 um número inteiro e determine se ele é ou não um número primo.
*/
int i,j,numero,primo=0;
int main()
{
    printf("Digite um numero inteiro e direi se ele e primo ou nao: ");
    scanf("%d",&numero);

    for(i=1;i<=numero;i++)
    {
        if(numero%numero==0&&numero%1==0&&numero%i==0)
        {
            primo=primo+1;
            printf("divisivel %d\n",i);
        }
    }

    if(primo>2)
        printf("\nNao e primo\n");
    else
        printf("Primo\n");

    return 0;
}
