//Calcular a diferen�a entre a soma do quadrado dos 100 primeiros numeros naturais e o quadrado da soma deles.
#include <stdio.h>

main(){
	int i, somaq=0, soma=0,dif;
	
	for(i=1;i<=100;i++){
		somaq=somaq+(i*i);
		soma=soma+i;
	}
	dif=(soma*soma)-somaq;
	printf("A diferen�a entre o quadrados e a soma dos quadrados � %d.",dif);
}
