#include <stdio.h>
#include <stdlib.h>

/* express�es relacionais s�o l�gicos e se consistem em verdadeiro sendo 1 ou falso sendo 0
1= verdadeiro
0= falso
 */
 
/* OPERADORES L�GICOS

Resultado L�gico
0 = FALSO
1 = VERDADEIRO
 
 ____________________
 Opera��o
 ____________________
   N�o          !   = Inverter a express�o
   e           &&   = Uma express�o 'e' � verdadeira se todas condi��es forem verdadeiras.
   ou          ||   = Uma express�o'ou' � verdadeira se pelo menos uma condi��o for verdadeira.
   
_____________________
   
*/


int a,b,c;

void main(void) {
	
	a=2;
	b=3;
	c=5;
	
	printf("%d",((a!=b)&&(c>a)));
	
}
