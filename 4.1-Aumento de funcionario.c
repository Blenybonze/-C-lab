#include <stdio.h>
#include <stdlib.h>

/*Um funcion�rio de uma empresa recebe aumento salarial anualmente: Sabe-se que:
Esse funcion�rio foi contratado em 1995, com sal�rio inicial de R$ 1.000,00;

Em 1996 recebeu aumento de 1,5% sobre seu sal�rio inicial;

A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro do percentual do ano anterior.

Fa�a um programa que determine o sal�rio atual desse funcion�rio. Ap�s concluir isto, altere o programa permitindo
que o usu�rio digite o sal�rio inicial do funcion�rio.
  */

float salario=1000,aumento;
int i=1997;

int main()
{
    printf("Salario em 1995 = %f",salario);
    aumento=salario*0.015;
    printf("\nAumento em 1996: %f",aumento+salario);

    do
    {
        aumento=aumento*2;
        printf("\nSalario em %d: R$%f",i,salario+aumento);
        i=i+1;
    }

    while(i<=2019);

return 0;
}
