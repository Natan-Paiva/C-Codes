//Ler 2 vetores de 10 posiçoes e calcular um terceiro contendo nas posições pares os valores do primeiro
// e nas impoares os valores do segundo.
#include <stdio.h>
int main()
{
	int vet1[10], vet2[10], vet3[10], i;
	
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor do vetor 1: ",i+1);
		scanf("%d",&vet1[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor do vetor 2: ",i+1);
		scanf("%d",&vet2[i]);
	}
	printf("Vetor 3:");
	for(i=0;i<10;i++){
		if(i%2==0){
			vet3[i]=vet1[i];
		}else{
			vet3[i]=vet2[i];
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",vet3[i]);
	}
}
