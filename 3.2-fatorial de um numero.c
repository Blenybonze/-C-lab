#include <stdio.h>
#include <stdlib.h>

/* exercício 1: Calcule o fatorial de um numero digitado pelo usuario
   exercicio 2 Edit: altere o programa para que o usuario digite apenas numeros inferiores a 16.
 */



int main() 
{
    int fat=1;
    int num;
    int i,refazer;
    
    do
    {
    	fat=1;
        printf("Fatorial de: ");
        scanf("%d",&num);
    
        if(num<=16)
    {
	        for(i=1;i<=num;i++)
	        {
                fat=fat*i;
	        }
                printf("O fatorial e: %d",fat);
			    printf("\n\nDeseja Fazer Outro Calculo?\n[1]Sim.   [2]Nao.\nSelecione uma das opcoes:");
                scanf("%d",&refazer);
			    
				switch(refazer)
			{
			
			        case 1:
				        num=num+20;
				        break;
				    case 2:
				        num=1;
				        break;
				    default:
				        printf("\nInvalido, Programa encerrado.\n");	
            }
				    
	}
	    else
            printf("Numero invalido.Tente novamente\n");
            
        
    }
	while(num>16);
    
    printf("Encerrado.");

return 0;	    
}

