//Preencher uma matriz 4x4 com o produto da linha e da coluna do elemento e imprimi-la.
#include <stdio.h>
int main()
{
	int mat[4][4], i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			mat[i][j]=i*j;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%10d",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
