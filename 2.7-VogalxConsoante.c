#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que Identifique se a letra digitada é VOGAL ou CONSOANTE:
Funções para caracteres:
toupper = Maiúsculas
tolower  = Minusculas
*/

char letra;
void main(void)
{
    printf("Digite uma letra: ");
    scanf("%c",&letra);

    switch(tolower(letra))//Tolower é usado para converter letras digitadas maiúsculas para minusculas.
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
            printf("VOGAL");
	    break;
	default:
            printf("Consoante");
    }
}
