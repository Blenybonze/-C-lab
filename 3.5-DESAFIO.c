#include <stdio.h>
#include <stdlib.h>

/* Imprima um diamante */

int main() 
{
    int numero,espacos,asteriscos,count,linha;

    printf("Digite um número impar: ");
    scanf("%d",&numero);
    
    if(numero%2!=0)
    {
    	//imprimindo a parte de cima do Diamante
    	asteriscos=1;
    	espacos=(numero-1)/2;
    	for(linha=1;espacos>0;linha++)
    	{
    		//Espaços
    		for(count=1;count<=espacos;count++)
    		    printf(" ");
    		
    		//asteriscos
    		for(count=1;count<=asteriscos;count++)
    		    printf("*");
    		    
    		espacos--;
    		asteriscos+=2;
    		printf("\n");
		}
		//imprimindo a parte de baixo do Diamante
		for(linha=1;asteriscos>0;linha++)
		{
			//Espaços
			for(count=1;count<=espacos;count++)
			    printf(" ");
			    
			//asteriscos
			for(count=1;count<=asteriscos;count++)
			    printf("*");
			    
			espacos++;
			asteriscos-=2;
			printf("\n");
		}		
      }
}
      

