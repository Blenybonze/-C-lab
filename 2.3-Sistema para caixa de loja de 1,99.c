#include <stdio.h>
#include <stdlib.h>

/* Crie um algoritmo de caixa de supermercado de uma loja de R$1,99 */

int i=0,reiniciar;
float itens=0,preco=1.99,total,troco;

int main()
{

    do
    {
        printf("Quantidade de Itens comprados: ");
        scanf("%f",&itens);

	total=itens*preco;
	printf("\nTotal da compra: %f",total);

	printf("\nValor pago pelo cliente: ");
        scanf("%f",&troco);
	printf("\nTroco: %f",troco-total);

        printf("\n\nReiniciar?\n[1]-SIM    [2]-Nao\n");
        scanf("%d",&reiniciar);

	switch(reiniciar)
	{
	    case 1:
                i=0;
            	printf("\n-------------------------------------------\n");
             	break;
            case 2:
            	i=10;
            	printf("Programa Encerrado.");
            	break;
        }
    }
    while(i<=1);

return 0;
}
