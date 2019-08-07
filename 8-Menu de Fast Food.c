#include <stdio.h>
#include <stdlib.h>

/* 
Faça um Algoritmo que leia o nome de um cliente de Fast Food
e a quantidade de cada item do menu. Mostre o nome do cliente e o total da Compra.
Menu:
Hot-Dog             1.00
Hamburguer          1.30
Cheeseburguer       1.50
Refrigerante lata   1.00
batata frita        0.80
*/

float hot=1.00,ham=1.30,che=1.50,refri=1.00,batt=0.80,total;
char nome[15];
int menu,i;

int main()
{

	printf("Digite o seu Nome: ");
	scanf("%s",&nome);

	printf("\nQuais itens Comprados?:\n1=[HotDog-R$1.00]\n2=[Hamburguer-R$1.30]\n3=[Cheeseburguer-R$1.50]\n4=[Refrigerante Lata-R$1.00]\n5=[Batata Frita-R$0.80]\n0=[Finalizar operacao]\n\n");

	for(i=0;i<=2;i++)
	{
	    scanf("%d",&menu);
	    switch(menu)
	    {
            case 1:
                printf("registrado\n");
                total=total+hot;
                i=0;
                break;
            case 2:
                printf("registrado\n");
                total=total+ham;
                i=0;
                break;
            case 3:
                printf("registrado\n");
                total=total+che;
                i=0;
                break;
            case 4:
                printf("registrado\n");
               total=total+refri;
                i=0;
                break;
            case 5:
                printf("registrado\n");
                total=total+batt;
                i=0;
               break;
            default:
                printf("---Finalizado---\n");
                i=3;
	    }
	}

	printf("\nCliente: %s, Obrigado por comprar conosco\n",nome);
	printf("Total do seu Pedido: R$%f\n\n",total);

	return 0;
}
