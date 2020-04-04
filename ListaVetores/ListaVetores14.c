//Receber um vetor, verificar e imprimir os números repetidos.
#include <stdio.h>
int main()
{
	int vet[10], i, j, acm=0;
	
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor do vetor: ",i+1);
	 	scanf("%d",&vet[i]);
	}
	printf("Valores repetidos no vetor: \n");
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(i!=j && vet[i]==vet[j]){
				printf("%d ",vet[i]);
				acm++;
			}
		}
	}
	if(acm==0){
		printf("Nao existem valores repetidos no vetor.");
	}
	 
}
