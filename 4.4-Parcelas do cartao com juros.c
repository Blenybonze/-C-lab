#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados: valor da dívida, valor dos juros,
quantidade de parcelas e valor da parcela.

Os juros e a quantidade de parcelas seguem a tabela abaixo:
Quantidade de Parcelas  % de Juros sobre o valor inicial da dívida
1       0
3       10
6       15
9       20
12      25

Exemplo de saída do programa:

Valor da Dívida Valor dos Juros Quantidade de Parcelas  Valor da Parcela
R$ 1.000,00     0               1                       R$  1.000,00
R$ 1.100,00     100             3                       R$    366,00
R$ 1.150,00     150             6                       R$    191,67
*/

float valoriten,juros,prestacoes,valorjuros,valordivida;
int parcelas;

int main()
{
    printf("Escolha o meio de pagamento do celular, cuja valo foi: ");
    scanf("%f",&valoriten);

    printf("\n|Quantidade de Parcelas|    |porcentagem de juros sobre o valor inicial|\n1                              0\n3                              10\n6                              15\n9                              20\n12                             25\n\n");

    printf("Em quantas parcelas deseja pagar?: ");
    scanf("%d",&parcelas);

    switch(parcelas)
    {
        case 1:
            juros=0;
            break;
        case 3:
            juros=10;
            break;
        case 6:
            juros=15;
            break;
        case 9:
            juros=20;
            break;
        case 12:
            juros=25;
            break;
        default:
            printf("Parcela invalida.");
            break;
    }

    juros=juros/100;
    prestacoes=valoriten/parcelas;
    valorjuros=valoriten*juros;
    valordivida=valoriten+valorjuros;

    printf("\n\n|Valor da Divida|   |Valor do juros|   |Quantidade de parcelas|    |Valor da Parcelas|");
    printf("\nR$%.f                 %f           %d                          %f\n\n",valordivida,valorjuros,parcelas,prestacoes+prestacoes*juros);

    return 0;
}
