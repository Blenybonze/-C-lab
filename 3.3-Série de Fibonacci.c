#include <stdio.h>
#include <stdlib.h>

/* resumindo.. um programa que pede uma posi��o, e tu diz qual o valor 
de fibo nessa posi��o
se digitar 7, tem que dizer que o valor de fibo na posi��o 7 � 8.
0  1  1  2  3  5  8  13  21...
 */

int main() {
int num,n1=0,n2=1,i,j,fib;

	printf("Digite um numero que corresponde a posi��o na tabela: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{	
	for(j=1;j<i;j++)
	fib=n2+n1;
	n1=n2;
	n2=fib;
	printf("%d ",fib);
	}
	return 0;
}


 /*printf("Digite o numero: ");
 scanf("%d",&num);
 
 for(i=1;i<=num;i++)
 {
 for(j=1;j<i;j++)
	fib=n2+n1;
	n1=n2;
	n2=fib;
    printf("%d ",fib);
 }
 */
