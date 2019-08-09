#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar 
de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:

Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50 */

int main() {
int n1,con=1;	
	printf("Digite o numero para ver sua tabuada de multiplicação de 1 a 10: ");
	scanf("%d",&n1);
	printf("\nTabuada de %d: \n",n1);
	do
{
	printf("\n%d x %d = %d",n1,n1,con,n1*con);
	con=con+1;
}
    while(con<=10);
	
	return 0;
}
