//Calcular os 100 primeiros numeoros naturais que nao sao multiplos de 7 ou q terminem em 7 e armazena-los em um vetor.
#include<stdio.h>
int main()
{
	int vet[100], i=0, num=0;
	
	do{
		if(num%7!=0 && num%10!=7){
			vet[i]=num;
			i++;
		}
		num++;
	}while(i<100);
	for(i=0;i<100;i++){
		printf("%d ",vet[i]);
	}
}

