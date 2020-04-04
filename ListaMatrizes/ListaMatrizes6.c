//Gerar uma matriz 10x10 cujo os elementos são: se i<j=2i+7j-2, se i=j=3i²-1, se i>j=4i³-5j²+1.
#include <stdio.h>
#include <math.h>
int main()
{
	int mat[10][10], i, j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i<j){
				mat[i][j]=(2*i)+(7*j)-2;
			}else if(i==j){
				mat[i][j]=(3*pow(i,2))-1;
			}else{
				mat[i][j]=(4*pow(i,3))-(5*pow(j,2))+1;
			}
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
