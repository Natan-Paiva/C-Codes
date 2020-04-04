//Dados n e dois números positivos e diferentes de zero, imprimir em ordem crescente os n primeiros números multiplos de i e/ou j.
#include <stdio.h>
int main()
{
	int n, i, j, k=0, a=0;
	printf("Entre com o primeiro valor positivo e diferente de zero: ");
	scanf("%d",&i);
	printf("Entre com o segundo valor positivo e diferente de zero: ");
	scanf("%d",&j);
	printf("Entre com a quantidade de multiplos dos numeros antriores que deseja saber:");
	scanf("%d",&n);
	
	do{
		if(k%i==0 || k%j==0){
			printf("%d",k);
			a++;
		}
		k++;
	}while(a<n);
} 
