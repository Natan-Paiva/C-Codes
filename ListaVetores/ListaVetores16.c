//Ler um vetor de 5 posições reais, e depois fornecer opções ao usuario, 0-Finalizar, 1-imprimir em ordem direta
// e 2-Ordem inversa, qualque numero diferente informar que o codigo é invalido.
#include <stdio.h>
int main()
{
	float vet[5];
	int cod, i;
	
	for(i=0;i<5;i++){
		printf("Entre com o %d' valor do vetor:  ",i+1);
		scanf("%f",&vet[i]);
	}
	getchar();
	printf("\n1-Ordem direta. \n2-Ordem inversa. \n0-Finalizar.");
	do{
		printf("\nEscolha: ");
		scanf("%d",&cod);
	
		switch(cod){
			case 1:
				for(i=0;i<5;i++){
					printf("%.2f ",vet[i]);
				}
			break;	
			case 2:
				for(i=4;i>=0;i--){
					printf("%.2f ",vet[i]);
				}
			break;
			case 0:
				printf("Programa finalizado.");
			break;
			default:
				printf("Codigo invalido.");
		}
	}while(cod!=0);
}
