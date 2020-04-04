//Ler uma matriz 5x5 e um valor x, e depois vaerificar se o número aparece na matriz e mostrar sua localização ou
//uma mensagem de "não encontrado".
#include <stdio.h>
int main()
{
	int x, mat[5][5], i, j, acm=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\nEntre com o valor para o a posição %dx%d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	 printf("\nEntre com o numero a ser verificadose ele aparece na matriz: ");
	 scanf("%d",&x);
	 
	printf("\nVerificacao:");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(mat[i][j]==x){
				printf("\nO valor '%d' aparece na posicao %dx%d.",x,i,j);
				acm++;
			}
		}
	}
	if(acm==0){
		printf("\nNao encontrado.");
	}
	return 0;
}
