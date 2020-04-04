//Verificar quais numeros entre 1000 e 9999 possuem a seguinte propriedade: a soma dos digitos de mais baixa ordem com os de ordem de mais alta ordem elevado ao quadrado é igual ao proprio numero.
#include <stdio.h>
 int main()
 {
 	int or_al, or_ba, soma=0, quadrado=0,i;
 	
 	for(i=1000;i<=9999;i++){
 		or_al=i/100;
 		or_ba=i%100;
 		soma=or_al+or_ba;
 		quadrado=soma*soma;
 		if(quadrado==i){
 			printf("%d ",i);
		 }
	 }
 }
