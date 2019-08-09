#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que pergunte o dia, mês, ano do aniversário e dizer se o ano é ou não bissexto.
 Diga se a data é válida ou não. Caso não seja, diga o motivo. */

int dia,mes,ano,idade;
int main() 
{
    printf("Digite sua Data de nascimento(dd mm aaaa): ");
    scanf("%d%d%d",&dia,&mes,&ano);
	
    if(ano>=1950&&ano<=2019)
    {       
        printf("Ano valido.\n");

        if(mes>=1&&mes<=12)
        {      
             printf("Mes Valido.\n");
	
             if((dia>=1&&dia<=28)&&(mes==2))
                  printf("Data valida.Nao bissexto\n");	
                  
             else if((dia>=1&&dia<=29)&&(mes==2)&&(ano%400==0||(ano%4==0&&ano%100!=0)))
                  printf("Data Valida, voce nasceu em um ano bissexto\n");
                  
             else if((dia>=1&&dia<=30)&&(mes==4||mes==6||mes==9||mes==11))
                  printf("Data Valida.Nao bissexto\n");
                  
             else if((dia>=1&&dia<=31)&&(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12))
                  printf("Data Valida.Nao bissexto\n");
                  
             else
                  printf("Data Invalida.\n");

        }
        else
            printf("Mes Invalido.\n");
    }	
    else
        printf("Ano invalido.\n");

    idade=2019-ano;
    printf("Voce tem atualmente %d anos ",idade);

 return 0;
}	





		

