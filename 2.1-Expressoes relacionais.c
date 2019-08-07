#include <stdio.h>
#include <stdlib.h>

/* expressões relacionais são lógicos e se consistem em verdadeiro sendo 1 ou falso sendo 0
1= verdadeiro
0= falso
 */
 
/* OPERADORES LÓGICOS

Resultado Lógico
0 = FALSO
1 = VERDADEIRO
 
 ____________________
 Operação
 ____________________
   Não          !   = Inverter a expressão
   e           &&   = Uma expressão 'e' é verdadeira se todas condições forem verdadeiras.
   ou          ||   = Uma expressão'ou' é verdadeira se pelo menos uma condição for verdadeira.
   
_____________________
   
*/


int a,b,c;

void main(void) {
	
	a=2;
	b=3;
	c=5;
	
	printf("%d",((a!=b)&&(c>a)));
	
}
