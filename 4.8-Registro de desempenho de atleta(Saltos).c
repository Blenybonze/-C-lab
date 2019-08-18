#include <stdio.h>
#include <stdlib.h>

/*
Em uma competi��o de salto em dist�ncia cada atleta tem direito a cinco saltos. No final da s�rie de saltos de cada atleta, o melhor e o pior
 resultados s�o eliminados. O seu resultado fica sendo a m�dia dos tr�s valores restantes. Voc� deve fazer um programa que receba o nome e
 as cinco dist�ncias alcan�adas pelo atleta em seus saltos e depois informe a m�dia dos saltos conforme a descri��o acima informada (retirar
o melhor e o pior salto e depois calcular a m�dia). Fa�a uso de uma lista para armazenar os saltos. Os saltos s�o informados na ordem da execu��o,
portanto n�o s�o ordenados. O programa deve ser encerrado quando n�o for informado o nome do atleta. A sa�da do programa deve ser conforme o exemplo abaixo:

Atleta: Rodrigo Curv�llo

Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m

Melhor salto:  6.5 m
Pior salto: 5.3 m
M�dia dos demais saltos: 5.9 m

Resultado final:
Rodrigo Curv�llo: 5.9 m

*/

char nome[15];
float salto,mediasalto,melhorsalto,piorsalto,resultadofinal;
int i;

int main()
{
    do
    {
        printf("Atleta: ");
        scanf(" %s",&nome);

        for(i=1;i<=5;i++)
        {
            printf("Salto %d: ",i);
            scanf("%f",&salto);

            if(i==1)
                melhorsalto=piorsalto=salto;

            if(salto>melhorsalto)
                melhorsalto=salto;

            if(salto<piorsalto)
                piorsalto=salto;

            mediasalto=mediasalto+salto;
        }

        resultadofinal=(mediasalto-melhorsalto-piorsalto)/3;

        printf("\n\nMelhor Salto: %f",melhorsalto);
        printf("\nPior Salto: %f",piorsalto);
        printf("\nMedia dos Demais Saltos: %f",resultadofinal);
        printf("\n\nResultado final:\n %s: %f\n\n",nome,resultadofinal);
    }

    while(nome);

    return 0;
}
