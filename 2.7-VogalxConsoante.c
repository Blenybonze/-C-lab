#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que Identifique se a letra digitada � VOGAL ou CONSOANTE:
Fun��es para caracteres:
toupper = Mai�sculas
tolower  = Minusculas
*/

char letra;
void main(void) {
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	switch(tolower(letra))//Tolower � usado para converter letras digitadas mai�sculas para minusculas.
{
	case 'a':
//	case 'A':
	case 'e':
//	case 'E':
	case 'i':
//	case 'I':
	case 'o':
//	case 'O':
	case 'u':
//	case 'U':
		printf("VOGAL");
	break;
	default:
		printf("Consoante");
}
}
