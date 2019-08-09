#include <stdio.h>
#include <stdlib.h>

/*r Faça um programa que, dado um conjunto de N números,
 determine o menor valor, o maior valor e a soma dos valores. */

 int i=1,numero,maior=1,menor=1;
int main()
{
    do
    {
        printf("Digite um numero de 1 a 1000: ");
        scanf("%d",&numero);

        if(i<2)
            menor=maior=numero;

        if(numero>maior)
           maior=numero;

        if(numero<menor)
            menor=numero;

        else if(numero>1000)
        {
            printf("Numero invalido.\nDigite Novamente ...\n");
            i=0;
        }

        i=i+1;
    }
    
    while(i<=3);

    printf("Numero maior: %d\n",maior);
    printf("Numero menor: %d\n",menor);
    printf("%d + %d = %d",maior,menor,maior+menor);

    return 0;
}
