#include <stdio.h>
#include <stdlib.h>

/*
o pre�o de um automovel e calculado pela soma do pre�o de fabrica com o pre�o dos impostos
(45% do pre�o de fabrica) e a percentagem do revendedor(28% do pre�o de fabrica). Fa�a um algoritmo
que leia o nome do automovel e o pre�o de fabrica e imprima o nome do automovel e o pre�o final.
*/

float preco_fabrica,preco_final;
char nome[15];

void main(void)
{
	printf("Nome do veiculo: ");
	scanf("%s",&nome);
	printf("Valor de fabrica do automovel: ");
	scanf("%f",&preco_fabrica);

	//Divide a porcentagem por 100 e multiplique pelo valor para saber o resultado.
	preco_final=preco_fabrica+0.45*preco_fabrica+0.28*preco_fabrica;

	printf("o valor final do automovel %s",nome);
	printf(" e de %f",preco_final);
	getch();
}
