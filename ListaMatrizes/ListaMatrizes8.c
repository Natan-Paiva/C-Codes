//Ler uma matriz 5x4 contendo as informações: 1ªcoluna=nº matricula, 2ªcoluna=media provas, 3ªcoluna=media trabalhose 4ªcoluna=media final
//Receber as tres primeiras informacoes e calcular a quarta, imprimir a amior nota e a media geral.
#include<stdio.h>
int main()
{
	float mat[5][4], nottot=0, maiornot=0;
	int i, j=0;
	
	for(i=0;i<5;i++){
		printf("Entre com o numero de matricula do %d' aluno: ",i+1);
		scanf("%f",&mat[i][j]);
		j++;
		printf("Entre com a media das provas do %d' aluno: ",i+1);
		scanf("%f",&mat[i][j]);
		j++;
		printf("Entre com a media dos trabalhos do %d' aluno: ",i+1);
		scanf("%f",&mat[i][j]);
		j++;
		mat[i][j]=(mat[i][1]+mat[i][2])/2;
		j=0;
		printf("\n");
		nottot+=mat[i][3];
		if(mat[i][3]>maiornot){
			maiornot=mat[i][0];
		}
	}
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf("%10.1f",mat[i][j]);
		}
	}
	printf("\n");
	printf("\nO aluno q obteve a maior nota final foi o aluno com a matricula %.1f.",maiornot);
	printf("\nA media aritmetica das notas finais e %.1f",nottot/5);
	return 0;
}
