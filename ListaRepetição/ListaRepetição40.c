//Receber numeros inteiros ate que se digite um numero negativo, e mostra o maior e o menor dentre eles.
#include <stdio.h>
int main()
{
	int maior, menor, num;
	do{
		printf("Entre com um valor(valor negativo encerrara o programa): ");
		scanf("%d",&num);

		if(num>maior){
			maior=num;
		}else if(num<menor && num>=0){
			menor=num;
		}
	}while(num>=0);
	printf("O maior numeor inserido foi %d e o menor foi %d.",maior,menor);
}
