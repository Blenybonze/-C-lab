#include <stdio.h>
#include <stdlib.h>

/* fa�a um algoritmo que l� dois valores inteiros e mostre o resultado trocado
desses valores.
EX.: A=10   mostre    A=5
     B=5    mostre    B=10
 */
    
int A,B;
void main(void) {
	printf("valor A: ");
	scanf("%d",&A);
	printf("Valor B: ");
	scanf("%d",&B);
	
	B=B+A;
	A=B-A;
	B=B-A;
	
	
	printf("Valor da letra A: %d\n",A);
	printf("Valor da letra B: %d\n",B);
	
	
}
