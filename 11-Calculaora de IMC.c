#include <stdio.h>
#include <stdlib.h>

/*
Calculadora de IMC: Crie um algorismo que solicite o nome, altura em metros e peso em quilogramas.
Em seguida Calcule o IMC e após isto, imprima qual o estado atual do IMC da pessoa
(Muito abaixo/abaixo do peso, peso ideal, sobre peso, obesidade, obesidade severa, obesidade morbida)
*/

float peso, altura,imc;
char nome[15];

void main(void)
{
	printf("Digite o nome: ");
	scanf("%s",&nome);
	printf("Digite a altura em metros: ");
	scanf("%f",&altura);
	printf("Digite o peso em quilogramas: ");
	scanf("%f",&peso);

	imc=peso/(altura*altura);

	printf("\nResultado do IMC do %s",nome);
	printf(" e de: %f\n",imc);

	if(imc<17)
            printf("Muito abaixo do peso\n");

	else if((imc>=17)&&(imc<18.5))
	    printf("Abaixo do peso\n");

	else if((imc>=18.5)&&(imc<25))
	    printf("Peso Ideal\n");

        else if((imc>=25)&&(imc<30))
	    printf("Sobrepeso\n");

	else if((imc>=30)&&(imc<35))
	    printf("Obesidade\n");

	else if((imc>=35)&&(imc<40))
	    printf("Obesidade severa\n");

	else
            printf("Obesidade Morbida");

}
