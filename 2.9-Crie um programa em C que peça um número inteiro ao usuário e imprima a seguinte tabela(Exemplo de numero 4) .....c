#include <stdio.h>
#include <stdlib.h>

/*
Exercicio for:
 Crie um programa em C que peça um número inteiro ao usuário,
 e imprima a seguinte tabela de acordo com o numero digitado,
exemplo caso o numero digitado seja 4:

1
2 4
3 6 9
4 8 12 16*/



int main() {
int i,j,n1;	
    printf("Digite um numero: ");
    scanf("%d",&n1);
    
    for(i=1;i<=n1;i++){
    for(j=1;j<=i;j++){
    printf("%d ",j*i);
}
    printf("\n");
}
	return 0;
}

