#include <stdio.h>
#include <stdlib.h>

//Neste exercício vemo os tipos de variáveis mais usadas na programação em C, elas são:
/*
Tipo de Váriavel       identificador
float                       %f
int                         %d
char                        %c
char[]                      %s
*/
char nome[5]="Bleny";//% char com [] na frente da variável criada possibilita colocar mais de um caractere, por exemplo um nome: Pedro, Bleny, Manoelly, etc.
char sexo='m';//char sem [] na frente da variável criada possibilita apenas colocar um caractere para tal variável e deve estar dentro de aspas simples:'a','b','f','m'.
float nota =10.5;// float possibilita a adição de um número real/quebrado.: 2.5,3.45,etc.
int idade=22;// int possibilita a adição de números inteiros.:2,5,6,2,43,85.

void main(void)
{
    printf("o meu nome e %s\n",nome);
    printf("o meu sexo e %c\n",sexo);
    printf("a minha idade e %d\n", idade);
    printf("a minha nota e %f\n",nota);
}
