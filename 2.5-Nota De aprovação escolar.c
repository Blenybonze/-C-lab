#include <stdio.h>
#include <stdlib.h>

/* Crie um Programa que receba uma nota(entre 0.0 e 10,0) e checa se voc� passou direto,
ficou de recupera��o ou foi reprovado na mat�ria: 

SENDO:

7 ou mais ------- Passou direto
Entre 4 e 7 ----- Recupera��o
Abaixo de 4 ----- Reprovado Direto

*/


float n1;

void main(void) {
	
	printf("Digite a sua nota: ");
	scanf("%f",&n1);
	
	
	if(n1>=7&&n1<=10){
		printf("passou direto");
	}
	else if(n1>=4&&n1<7){
		printf("Gra�as a Deus, ficou de recuperacao");
	}
	else{
		printf("voce foi reprovado");
	
	}
	

	
	
}
