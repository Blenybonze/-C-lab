#include <stdio.h>
#include <stdlib.h>

/* 
Exercicio usando for.
1 - Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a 
população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o 
número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.

2- Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada 
e permita repetir a operação. */

int i,anos=1;
int A,B;
float pa,pb;

int main() 
{
    printf("Este programa foi criado para\nCalcular quanto tempo levaria para a cidade A alcancar o numero populacional da Cidade B\n----------------------------------------------\n");
    printf("Qual o numero populacional da Cidade A e quantos %(de 1 a 100) ela cresce ao ano: ");
    scanf("%d%f",&A,&pa);
    printf("Qual o numero populacional da Cidade B e quantos %(de 1 a 100) ela cresce ao ano: ");
    scanf("%d%f",&B,&pb);

    pa=pa/100;
    pb=pb/100;

    for(i=0;i<=10;i++)
    {
        A=A+A*pa;
        B=B+B*pb;
	anos=anos+1;	
	
	if(A>=B)
	{
            printf("A quantidade de anos para Cidade A igualar a população da cidade B e:%d",anos);
            i=10;
        }
        else
	{
            printf(".\n");
            i=0;
        }
    }
}
