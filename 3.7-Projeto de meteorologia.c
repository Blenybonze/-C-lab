#include <stdio.h>
#include <stdlib.h>



 /*O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um conjunto
  indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas, bem como a média das temperaturas.*/

int numtemp, i,j,reset;
float temperatura, tempmaior, tempmenor, media;

int main()
{
    for(i=1;i<2;i++)
    {
        numtemp=0,temperatura=0,media=0,tempmaior=0,tempmenor=0;
        printf("--------------------------\n\nQuantas Temperaturas deseja inserir no programa?: ");
        scanf("%d",&numtemp);


        for(j=1;j<=numtemp;j++)
        {
            printf("Digite a temperatura %d: ",j);
            scanf("%f",&temperatura);
            media=media+temperatura;

            if(j==1)
                tempmaior=tempmenor=temperatura;

            else if(temperatura>tempmaior)
                tempmaior=temperatura;

            else if(temperatura<tempmenor)
                tempmenor=temperatura;
        }

        printf("\nA maior temperatura digitada foi: %f",tempmaior);
        printf("\nA menor temperatura digitada foi: %f",tempmenor);
        printf("\n\n A media de todas as temperaturas digitadas e de: %f\n\n",media/numtemp);

        printf("Deseja calcular Reiniciar o programa?:\n[1]-SIM     [2]-NAO\n");
        scanf("%d",&reset);

        switch(reset)
        {
            case 1:
                i=0;
                break;
            case 2:
                i=2;
                printf("\n\n--------------------------\nPROGRAMA ENCERRADO\n\n");
                break;
        }

    }







    return 0;
}
