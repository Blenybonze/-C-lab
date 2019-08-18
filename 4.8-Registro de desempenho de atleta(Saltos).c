#include <stdio.h>
#include <stdlib.h>

/*
Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No final da série de saltos de cada atleta, o melhor e o pior
 resultados são eliminados. O seu resultado fica sendo a média dos três valores restantes. Você deve fazer um programa que receba o nome e
 as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe a média dos saltos conforme a descrição acima informada (retirar
o melhor e o pior salto e depois calcular a média). Faça uso de uma lista para armazenar os saltos. Os saltos são informados na ordem da execução,
portanto não são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta. A saída do programa deve ser conforme o exemplo abaixo:

Atleta: Rodrigo Curvêllo

Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m

Melhor salto:  6.5 m
Pior salto: 5.3 m
Média dos demais saltos: 5.9 m

Resultado final:
Rodrigo Curvêllo: 5.9 m

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
