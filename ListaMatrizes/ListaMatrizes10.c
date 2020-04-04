//Ler duas matrizes A e B 3x3 e calcular uma terceira sendo C=A*B.
#include <stdio.h>
int main()
{
	int mat[3][3], mat2[3][3], mat3[3][3], i, j, k, aux;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Entre com o valor para a posicao %dx%d da primeira matriz: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Entre com o valor para a posicao %dx%d da segunda matriz: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			aux=0;
			for(k=0;k<3;k++){
				aux+=mat[i][k]*mat2[k][j];
			}
			mat3[i][j]=aux;
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%10d",mat3[i][j]);
		}
	}
	return 0;
}
