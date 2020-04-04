//Ler um conjunto não determinado de valores, um de ecada vez, e escrever o quadrado, o cubo e a raiz quadrada, finalizar com a entrada de um numero menor ou igual a zero.
#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	do{
		printf("\nEntre com um valor maior que zero: ");
		scanf("%d",&num);
		printf("\nO quadrafo do valor é %.2f.",pow(num,2));
		printf("\nO cubo do valor é %.2f.",pow(num,3));
		printf("\nA raiz quadrada do valor é %.2f.\n",sqrt(num));
	}while(num>0);
}
