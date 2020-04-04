//Receber dois vetores A e B, e criar um terceiro vetor C sendo ele A+B.
#include <stdio.h>
int main()
{
	int vetA[10], vetB[10], vetC[10], i;
	
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor do vetor A: ",i+1);
		scanf("%d",&vetA[i]);
	}
	for(i=0;i<10;i++){
		printf("Entre com o %d' valor do vetor B: ",i+1);
		scanf("%d",&vetB[i]);
	}
	printf("Vetor C:");
	for(i=0;i<10;i++){
		vetC[i]=vetA[i]+vetB[i];
		printf("%d ",vetC[i]);
	}
}
