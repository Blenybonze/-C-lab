#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um Algoritmo que leia um n�mero e imprima na tela se ele � IMPAR ou PAR 

6    \2
     \__
0     3
Resto 
Ou seja, se o numero for dividido por 2 e o resto for 0 ele � PAR
         J� se o numero for dividido por 2 e o resto for 1 ele � IMPAR
 
*/



int n1;
void main(void) {
	printf("Digite um numero e direi se ele e Par ou Impar: ");
	scanf("%d",&n1);
	
	if(n1%2==0){
	printf("O numero e PAR");
	}
    else{
	printf("O numero e IMPAR");
}
}
