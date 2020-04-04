//Ler uma matriz 3x3,calcular sua tranposta e imprimi-la.
#include <stdio.h>
int main()
{
	int mat[3][3], i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Entre com o valor para a posicao %dx%d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%10d",mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
