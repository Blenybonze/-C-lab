#include <stdio.h>
#include <stdlib.h>

/* 
Exercicio usando for.
1 - Supondo que a popula��o de um pa�s A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a popula��o de B seja 200000 habitantes
com uma taxa de crescimento de 1.5%. Fa�a um programa que calcule e escreva o 
n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B, mantidas as taxas de crescimento.

2- Altere o programa anterior permitindo ao usu�rio informar as popula��es e as taxas de crescimento iniciais. Valide a entrada e permita repetir a opera��o. */

int main() {
int i,anos=1;
int A,B;
float pa,pb;
printf("Este programa foi criado para\nCalcular quanto tempo levaria para a cidade A alcancar o numero populacional da Cidade B\n----------------------------------------------\n");
printf("Qual o numero populacional da Cidade A e quantos %(de 1 a 100) ela cresce ao ano: ");
scanf("%d%f",&A,&pa);
printf("Qual o numero populacional da Cidade B e quantos %(de 1 a 100) ela cresce ao ano: ");
scanf("%d%f",&B,&pb);

pa=pa/100;
pb=pb/100;

    for(i=0;i<=10;i++){
    A=A+A*pa;
    B=B+B*pb;
	anos=anos+1;	
	if(A>=B){
    printf("A quantidade de anos para Cidade A igualar a popula��o da cidade B e:%d",anos);
    i=10;
}
    else{
    printf(".\n");
    i=0;
}
}}
