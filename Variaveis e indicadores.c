#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Neste exerc�cio vemo os tipos de vari�veis mais usadas na programa��o em C, elas s�o:
/*
Tipo de V�riavel       identificador
float                       %f
int                         %d
char                        %c
char[]                      %s
*/
char nome[5]="bleny";//% char com [] na frente da vari�vel criada possibilita colocar mais de um caractere, por exemplo um nome.: pedro, bleny,manoelly.
char sexo='m';//char sem [] na frente da vari�vel criada possibilita apenas colocar uma caractere para tal vari�vel e deve estar dentro de aspas simples:'a','b','f','m'.
float nota =10;// float possibilita a adi��o de um n�mero real/quebrado.: 2.5,3.45,etc.
int idade=22;// int possibilita a adi��o de n�meros inteiros.:2,5,6,2,43,85.

void main(void) {
	printf("o meu nome e %s\n",nome);
    printf("o meu sexo e %c\n",sexo);
	printf("a minha idade e %d\n", idade);
	printf("a minha nota e %f\n",nota);	
}
