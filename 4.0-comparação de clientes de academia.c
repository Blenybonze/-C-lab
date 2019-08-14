#include <stdio.h>
#include <stdlib.h>

/*Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo, a mais gordo e o mais magro,
 para isto você deve fazer um programa que pergunte a cada um dos clientes da academia seu código, sua altura e seu peso.
 O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero) no campo código. Ao encerrar o programa também
 deve ser informados os códigos e valores do clente mais alto, do mais baixo, do mais gordo e do mais magro, além da média das
  alturas e dos pesos dos clientes
  */

int i=0,codigo=0;
float altura=0, peso=0,mt,kg,mediaaltura,alturaalta,alturabaixa,mediapeso,pesogordo,pesomagro;

int main()
{
    for(i=1;i<=10;i++)
    {
        printf("\nDigite Seu Codigo: ");
        scanf("%d",&codigo);
        mt=i-1;
        kg=i-1;

        if(codigo>0)
        {
            printf("Digite sua altura em metros: ");
            scanf("%f",&altura);
            printf("Digite o seu peso em kilogramas: ");
            scanf("%f",&peso);
            mediapeso=mediapeso+peso;
            mediaaltura=mediaaltura+altura;
        }

        if(i==1)
        {
            alturaalta=alturabaixa=altura;
            pesogordo=pesomagro=peso;
        }

        else if(altura>alturaalta||peso>pesogordo)
        {
            alturaalta=altura;
            pesogordo=peso;
        }
        else if(altura<alturabaixa||peso<pesomagro)
        {
            alturabaixa=altura;
            pesomagro=peso;
        }

        else if(codigo==0)
        {
            i=11;
            printf("\nA pessoa mais pesada tem: %fkg\n",pesogordo);
            printf("A pessoa mais magra tem %fkg\n\n",pesomagro);
            printf("A pessoa mais alta tem %fm\n",alturaalta);
            printf("A pessoa mais baixa tem %fm",alturabaixa);
            printf("\nA media da altura dos clientes da academia e de: %fm",mediaaltura/mt);
            printf("\nA media do peso dos clientes da academia e de: %fkg",mediapeso/kg);
        }
    }

return 0;
}
