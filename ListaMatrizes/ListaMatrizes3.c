//Ler uma matriz 4x4,imprimir a matriz e mostrar o localização do maior valor da matriz.
#include <stdio.h>
int main()
{
	int mat[4][4], i, j, maior, maiorl, maiorc;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\nEntre com o valor para o a posição %dx%d: ",i,j);
			scanf("%d",&mat[i][j]);
			if(i==0 && j==0){
				maior=mat[i][j];
				maiorl=i;
				maiorc=j;
			}else if(mat[i][j]>maior){
				maior=mat[i][j];
				maiorl=i;
				maiorc=j;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%10d",mat[i][j]);
		}
		printf("\n");
	}
	printf("\nO maior valor e %d cuja posicao na matriz e %dx%d.",mat[i][j],maiorl,maiorc);
	return 0;
}
