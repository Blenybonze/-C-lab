#include <stdio.h>
#include <stdlib.h>

/* O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99, com cerca de 10 caixas. Para agilizar o cálculo de
quanto cada cliente deve pagar ele desenvolveu um tabela que contém o número de itens que o cliente comprou e ao lado o
valor da conta. Desta forma a atendente do caixa precisa apenas contar quantos itens o cliente está levando e olhar na 
tabela de preços. Você foi contratado para desenvolver o programa que monta esta tabela de preços. 

Lojas Quase Dois - Tabela de preços
1 - R$ 1.99
2 - R$ 3.98
...
50 - R$ 99.50
*/

/*Edit: Aproveitei e fiz melhor do que pedia, em vez de repetir até 50 itens de 1.99 dei a opção do funcionário colocar a quantidade apenas
e o programaja calcula o total, solicitando o valor dado pelo cliente e calculando o troco a ser devolvido.*/

int i=0,reiniciar;
float itens=0,preco=1.99,total,troco;

int main()
{

    do
    {
	printf
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
