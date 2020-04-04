//Calcular a area de um triangulo, cuja base e altura são fornecidas pelo usuario, nao permitir entrada de valores menores q zero.
#include <stdio.h>

int main()
{
	float base, altura, area=0;
	
	do{
		printf("Entre com a medida da base do triangulo: ");
		scanf("%f",&base);
	}while(base<=0);
	
	do{
		printf("Entre com a medida da altura do triangulo: ");
		scanf("%f",&altura);
	}while(altura<=0);
		
	area=(base*altura)/2;
	printf("A area do triangulo é %.2f.",area);
} 
