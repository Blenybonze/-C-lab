#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int atual,nascimento,idade;
void main(void) {
	printf("Qual o ano atual: ");
	scanf("%d",&atual);
	printf("Qual o ano do seu nascimento: ");
	scanf("%d",&nascimento);
	
	idade=atual-nascimento;
	
	if(idade>17){
	printf("O usuario e maior de idade, tendo: %d anos",idade);
}else{
    printf("o usuario e menor de idade, tendo %d anos",idade);
}

}
