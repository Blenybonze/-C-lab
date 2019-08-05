#include <stdio.h>
#include <stdlib.h>

/* Dados Pessoais e interação do usuário com o sistema */


char Nome[15]; //podendo digitar até 15 caracteres;
char sexo;  // Podendo Digita apenas um Caractere sendo M ou F;
int Idade; //Numeros Reais
float salario; //numeros Inteiros(quebrados);

void main(void)
{

//coleta de dados do usuario(Entrada)
	printf("digite o seu nome: ");
	scanf("%s",&Nome);
	printf("Qual seu Sexo: ");
	scanf(" %c",&sexo);
	printf("Digite a sua Idade: ");
	scanf("%d",&Idade);
	printf("Qual o seu salario atual: ");
	scanf("%f",&salario);
//entrega de dados coletados(Saída)
	printf("\nO seu nome %s\n",Nome);//comando \n para pular uma linha
	printf("A sua idade e %d\n",Idade);
	printf("O seu sexo e %c\n",sexo);
	printf("O seu salario atual e de: %f\n",salario);

}
