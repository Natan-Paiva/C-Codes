//Ler um vetor de 10 posições e imprimi-lo substituindo os numeros negativo por zero.
#include <stdio.h>
int main()
{
	int vet[10], i;
	
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor: ",i+1);
		scanf("%d",&vet[i]);	
	}
	for(i=0;i<10;i++){
		if(vet[i]>=0){
			printf("%d",vet[i]);
		}else{
			vet[i]=0;
			printf("%d",vet[i]);
		}
	}
}
