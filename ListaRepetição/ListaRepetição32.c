//Simular o lan�amento de dois dados n vezes e mostras a rela��o entre os dois(<>=) em cada lan�amento.
#include <stdio.h>
#include <time.h>

int main()
{
	int d1, d2, lan, i;
	srand(time(NULL));
	printf("Quantas vezes os dados ser�o lan�ados? ");
	scanf("%d",&lan);
	
	for(i=0;i<lan;i++){
		d1=1+rand()%5;
		d2=1+rand()%5;
		printf("\nOs valor tirados na %d' jogada foram \nDado 1: %d \nDado 2: %d.",i+1,d1,d2);
		if(d1>d2){
			printf("\nDado 1 � maior que o dado 2.");
		}else if(d1==d2){
			printf("\nOs dados s�o iguais.");
		}else{
			printf("\nDado 2 � maior que o dado 1.");	
		}
	}
}
