#include <stdio.h>
#include <stdlib.h>

/*Os n�meros primos possuem v�rias aplica��es dentro da Computa��o, por exemplo na Criptografia.
 Um n�mero primo � aquele que � divis�vel apenas por um e por ele mesmo. Fa�a um programa que pe�a
 um n�mero inteiro e determine se ele � ou n�o um n�mero primo.
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
