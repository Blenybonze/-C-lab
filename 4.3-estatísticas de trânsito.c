#include <stdio.h>
#include <stdlib.h>

/*
Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:

Código da cidade;
Número de veículos de passeio (em 1999);
Número de acidentes de trânsito com vítimas (em 1999). Deseja-se saber:
Qual o maior e menor índice de acidentes de transito e a que cidade pertence;
Qual a média de veículos nas cinco cidades juntas;
Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
*/

int codigo,codigomaior,codigomenor,acidentes,acidentesmaior,acidentesmenor,veiculos=0,acidentes;
float i=1,contador=1,mediaveiculos=0,mediaacidentes=0;

int main()
{
    do
    {
        printf("\nCodigo da cidade: ");
        scanf("%d",&codigo);
        printf("Numero de veiculos de passeio: ");
        scanf("%d",&veiculos);
        printf("Numero de acidentes de transito: ");
        scanf("%d",&acidentes);

        mediaveiculos=mediaveiculos+veiculos;

        if(i==1)
        {
            codigomaior=codigomenor=codigo;
            acidentesmaior=acidentesmenor=acidentes;
        }

        else if(acidentes>acidentesmaior)
        {
            acidentesmaior=acidentes;
            codigomaior=codigo;
        }

        else if(acidentes<acidentesmenor)
        {
            acidentesmenor=acidentes;
            codigomenor=codigo;
        }

        if(veiculos<2000)
        {
            contador=contador+1;
            mediaacidentes=mediaacidentes+acidentes;
        }

        i=i+1;
    }

    while(i<=3);

    i=i-1;
    contador=contador-1;

    printf("---------------------------------------\nA media de veiculos das cidades declaradas e de: %.f",mediaveiculos/i);
    printf("\nA media de acidentes nas cidades com menos de 2000 veiculos e de: %.f",mediaacidentes/contador);
    printf("\n\nO maior indice de acidentes de transito e da cidade %d com %d de acidentes.\n",codigomaior,acidentesmaior);
    printf("O menor indice de acidentes de transito e o da cidade %d com %d de acidentes.\n\n",codigomenor,acidentesmenor);

    return 0;
}
