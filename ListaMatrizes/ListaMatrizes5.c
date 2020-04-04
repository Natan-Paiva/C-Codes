//Ler duas matrizes 4x4, e escrever uma terceira com o maior valor de cada posição das duas matrizes.
#include <stdio.h>
int main()
{
	int mat1[4][4], mat2[4][4], i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\nEntre com o valor para o a posição %dx%d da matriz 1: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\nEntre com o valor para o a posição %dx%d da matriz 2: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(mat1[i][j]>mat2[i][j]){
				printf("%10d",mat1[i][j]);
			}else{
				printf("%10d",mat2[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
