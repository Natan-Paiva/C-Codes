//Ler um vetor de 10 posições, ler um e mostrar os multiplos de x no vetor.
#include <stdio.h>
int main()
{
	int vet[10], x, i;
	
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nEntre com um valor para saber os multiplos dele presentes no vetor: ");
	scanf("%d",&x);
	printf("Multiplos de %d no vetor: ",x);
	for(i=0;i<10;i++){
		if(vet[i]%x==0){
			printf("%d ",vet[i]);
		}
	}
}
