#include <stdio.h>
#include <stdlib.h>

/* Estruturas condicionais s�o usadas em nosso dia a dia em tomadas de decis�es, exemplo:

Exemplos usados na realidade:
EXP 1:-----------------------------------------------------------------------------------------------------------
Estrada a esquerda                                     \           Estrada a Direita.
voc� vai ser para sempre feliz                         \           voc� ser� rico.
para completar a estrada voc� levar� 10 anos           \           para completar a estrada levar� 1 ano.


EXP 2:------------------------------                   \EXP 3:----------------------------------
Se eu tiver dinheiro ent�o                             \Se eu correr para atravessar a rua
    vou comprar meu carro dos sonhos                   \    consigo pegar o �nibus
Se n�o                                                 \Se n�o
    Continuarei com o meu carro atual                  \    n�o consigo pegar o �nibus
fimse                                                  \fimse


USANDO NA PROGRAMA��O:
Se(Condi��o)ent�o      =          If(Condi��o){
   Bloco               =              Bloco
FimSe                  =          }
Sen�o                  =          }else{

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









