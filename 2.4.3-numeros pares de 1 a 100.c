#include <stdio.h>
#include <stdlib.h>

/* mostre a ordem de 1 a 100 para o usuario e diga qual é impar e qual é par
  */

int i;
void main(void) {
	
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		printf("   %d e par\n",i);
		else
		printf("%d e impar",i);
	}
}
