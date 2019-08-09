#include <stdio.h>
#include <stdlib.h>

// exercicio utilizando Do While:
//Fazer uma tabuada de multiplicação de 1 a 10 uma embaixo da outra, e após isso, modificar para ficar uma do lado da outra.

int n1=1,n2=1;
int main()
{
    do
    {
        printf("%d x %d = %d   ",n1,n2,n1*n2);
        n2=n2+1;
        if(n2>=11)
        {
            printf("\n");
	    n2=1;
            n1=n1+1;
        }
    }
    
    while(n1<=10);

return 0;
}



/* Exercicio 2 utilizando FOR
//criar tabuada de 1 a 10 de multiplicação utilizando apenas FOR aninhado:

int i,j;
int main()
{
    for(i=1;i<10;i++)
    {
    for(j=1;j<=10;j++)
    {
        printf("%d x %d = %d\n",i,j,i*j);
    }
        printf("\n");
    }

    return 0;
}
*/
