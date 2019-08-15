#include <stdio.h>
#include <stdlib.h>

/*
O cardápio de uma lanchonete é o seguinte:

Especificação   Código  Preço
Cachorro Quente 100     R$ 1,20
Bauru Simples   101     R$ 1,30
Bauru com ovo   102     R$ 1,50
Hambúrguer      103     R$ 1,20
Cheeseburguer   104     R$ 1,30
Refrigerante    105     R$ 1,00

Faça um programa que leia o código dos itens pedidos e as quantidades desejadas. Calcule e mostre o valor a ser pago por item
(preço * quantidade) e o total geral do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/

float cq=1.20,bs=1.30,bco=1.50,hmb=1.20,chb=1.30,refri=1;
int codigo;
float total,totalpedido,quantidade,preco;

int main()
{
    printf("Digite o codigo dos itens pedidos e tecle ENTER. Apos isso digite a quantidade.\nTecle 0 na area do codigo para encerrar.\n\n");

    do
    {
        printf("\nCodigo: ");
        scanf("%d",&codigo);

        switch(codigo)
        {
            case 100:
                printf("Cachorro Quente\n");
                preco=cq;
                break;
            case 101:
                printf("Bauru Simples\n");
                preco=bs;
                break;
            case 102:
                printf("Bauru com ovo\n");
                preco=bco;
                break;
            case 103:
                printf("Hamburguer\n");
                preco=hmb;
                break;
            case 104:
                printf("Cheeseburguer\n");
                preco=chb;
                break;
            case 105:
                printf("Refrigerante\n");
                preco=refri;
                break;
        }

        if(codigo>=100&&codigo<=105)
        {
            printf("Quantidade: ");
            scanf("%f",&quantidade);
            total=preco*quantidade;
            printf("Total: %f",total);
            totalpedido=totalpedido+total;
        }

        if(codigo==0)
        printf("\nTotal da compra: R$%f",totalpedido);
    }

    while(codigo>99);

    return 0;
}
