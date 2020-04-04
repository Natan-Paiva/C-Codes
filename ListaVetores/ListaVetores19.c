//Preencher um vetor de 50 posições com o seguinte valor:(i+5*i)%(i+1) e imprimil-lo.
#include <stdio.h>
int main()
{
	float vet[50];
	int i;
	
	for(i=0;i<50;i++){
		vet[i]=(i+5*i)%(i+1);
	}
	for(i=0;i<50;i++){
		printf("%.1f ",vet[i]);
	}
}
