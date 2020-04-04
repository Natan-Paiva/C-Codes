//LEr um etor de 20 posições e imprimi-lo excluindo os elementos repetidos.
#include <stdio.h>

int main()
{
	int vet[20], i, j;
	
	for(i=0;i<20;i++){
		printf("Entre com o %d' valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nVetor sem os valores repetidos: ");
	for(i=0;i<20;i++){
		int aux=0;
		for(j=i-1;j>=0;j--){
			if(vet[i]==vet[j]){
				aux++;
			}
		}
		if(aux==0){
			printf("%d ",vet[i]);
		}		
	}
}

