#include <stdio.h>
#include <stdlib.h>

/* O Sr. Manoel Joaquim expandiu seus neg�cios para al�m dos neg�cios de 1,99 e agora possui uma loja de conveni�ncias.
Fa�a um programa que implemente uma caixa registradora rudimentar. O programa dever� receber um n�mero desconhecido de
valores referentes aos pre�os das mercadorias. Um valor zero deve ser informado pelo operador para indicar o final da compra.
O programa deve ent�o mostrar o total da compra e perguntar o valor em dinheiro que o cliente forneceu, para ent�o calcular
e mostrar o valor do troco. Ap�s esta opera��o, o programa dever� voltar ao ponto inicial, para registrar a pr�xima compra.
A sa�da deve ser conforme o exemplo abaixo:

Lojas Tabajara
Produto 1: R$ 2.20
Produto 2: R$ 5.80
Produto 3: R$ 0
Total: R$ 8.00
Dinheiro: R$ 20.00
Troco: R$ 12.00
...
*/

int numero=1,reiniciar;
float preco,total,troco;

int main()
{

	do
	{
	    if(numero==1)
        {
            printf("---Lojas Tabajara---\n");
        }

        printf("Produto %d:",numero);
        scanf("%f",&preco);
        numero=numero+1;
        total=total+preco;

        if(preco==0)
        {
            printf("\nTotal da compra: %f",total);
            printf("\nValor pago pelo cliente: ");
            scanf("%f",&troco);
            printf("\nTroco: %f",troco-total);

            printf("\n\nReiniciar?\n[1]-SIM    [2]-Nao\n");
            scanf("%d",&reiniciar);

            switch(reiniciar)
            {
		        case 1:
                	preco=1;
            	    printf("\n-------------------------------------------\n");
            	    numero=1;
             	    break;
                case 2:
                    preco=0;
            	    printf("Programa Encerrado.");
            	    break;
            }
        }
    }

    while(preco>0);

return 0;
}
