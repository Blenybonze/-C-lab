#include <stdio.h>
#include <stdlib.h>

/*O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha, que já é um sucesso
na sua loja de 1,99. Você foi contratado para desenvolver o programa que monta a tabela de preços de pães, de 1 até 50 pães,
a partir do preço do pão informado pelo usuário:

Preço do pão: R$ 0.18
*/

int i=0,reiniciar;
float itens=0,preco=0.18,total,troco;

int main()
{

    do
    {
        printf("----Panificadora Pao de Ontem - Tabela de preços----\n");

        printf("Quantidade de paes comprados: ");
        scanf("%f",&itens);

	    total=itens*preco;
	    printf("\nTotal: %f",total);

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
