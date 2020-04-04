//Preencher uma matriz 5x5, sendo a diagonal principal 1 e o restante 0 e imprimi-la.
#include <stdio.h>
int main()
{
	int mat[5][5], i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				mat[i][j]=1;
			}else{
				mat[i][j]=0;
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%10d",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
