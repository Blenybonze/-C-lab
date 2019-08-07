#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia quatro números inteiros, calcule o quadado
de cada um, some todos e finalmente mostre o resultado. */


int n1,n2,n3,n4;
int main()
{

	printf("1 numero: ");
	scanf("%d",&n1);
	printf("2 numero: ");
	scanf("%d",&n2);
	printf("3 numero: ");
	scanf("%d",&n3);
	printf("4 numero: ");
	scanf("%d",&n4);

	n1=n1*n1;
	n2=n2*n2;
	n3=n3*n3;
	n4=n4*n4;

	printf("\nResultado do quadrado sera para: \n1=%d\n2=%d\n3=%d\n4=%d\n",n1,n2,n3,n4);
	printf("\nSoma dos quadrados: %d\n-------------",n1+n2+n3+n4);

return 0;
}
