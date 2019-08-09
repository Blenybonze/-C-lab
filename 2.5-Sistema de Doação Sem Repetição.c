#include <stdio.h>
#include <stdlib.h>

/* Switch case é recomendado para fazer menu's
já o IF Else é mais complexo. */

int doacao,valor;

void main(void) {
	printf("Ola, abaixo temos uma tabela para os doadores:\n");
	printf("[1]-DOAR R$10,00.\n[2]-DOAR R$25,00.\n[3]-DOAR R$50,00.\n[4]-DOAR OUTROS VALORES.\n[5]-CANCELAR.\n");
    printf("--------------------------");
	printf("\nDisque o numero referente a opcao desejada: ");
	scanf("%d",&doacao);
	printf("--------------------------");
	
    switch(doacao){
	
    case 1:
    	valor=10;
    break;
    case 2:
    	valor=25;
    break;
    case 3:
    	valor=50;
    break;
    case 4:
    	printf("\nQual Valor deseja Doar?:");
    	scanf("%d",&valor);
    break;
    default:
    	valor=0;
    }
    printf("\nSua doacao foi de: R$%d",valor);
    printf("\nMuito Obrigado por colaborar");
}
