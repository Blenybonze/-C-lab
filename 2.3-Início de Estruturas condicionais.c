#include <stdio.h>
#include <stdlib.h>

/* Estruturas condicionais são usadas em nosso dia a dia em tomadas de decisões, exemplo:

Exemplos usados na realidade:
EXP 1:-----------------------------------------------------------------------------------------------------------
Estrada a esquerda                                     \           Estrada a Direita.
você vai ser para sempre feliz                         \           você será rico.
para completar a estrada você levará 10 anos           \           para completar a estrada levará 1 ano.


EXP 2:------------------------------                   \EXP 3:----------------------------------
Se eu tiver dinheiro então                             \Se eu correr para atravessar a rua
    vou comprar meu carro dos sonhos                   \    consigo pegar o ônibus
Se não                                                 \Se não
    Continuarei com o meu carro atual                  \    não consigo pegar o ônibus
fimse                                                  \fimse


USANDO NA PROGRAMAÇÂO:
Se(Condição)então      =          If(Condição){
   Bloco               =              Bloco
FimSe                  =          }
Senão                  =          }else{

*/       

int numero;

void main(void) {
	printf("digite um numero inteiro: ");
	scanf("%d",&numero);
	
	if(numero>=10){
		printf("O numero digitado pelo usuario foi maior que 10");
	
	}else {
		printf("O numero digitado pelo usuario foi menor que 10");

	}
	
	
	

}









