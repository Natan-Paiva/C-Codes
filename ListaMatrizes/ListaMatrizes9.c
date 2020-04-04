//Ler duas matrizes 2x2 com vaores reais, e oferecer as seguintes opções ao usuario: a)Somar as matrizes, 
//b)subtrair a primeira matriz da segunda,c)Adicionar uma constamte à matriz e d)Imprimir as matrizes.
#include <stdio.h>
int main()
{
	float mat[2][2], mat2[2][2];
	int i, j, op, cons;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Entre com valor para a posição %dx%d da primeira matriz: ",i,j);
			scanf("%f",&mat[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Entre com valor para a posição %dx%d da segunda matriz: ",i,j);
			scanf("%f",&mat2[i][j]);
		}
	}
	
	printf("\nEscolha uma das opções abaixo: \n1-Somar as matrizes. \n2-Subtrair a primeira matriz da segunda.");
	printf("\n3-Adicionar uma constante as matrizes. \n4-Imprimir as matrizes.");
	printf("\nEscolha: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%10.2f",mat[i][j]+mat2[i][j]);				
				}
				printf("\n");
			}
		break;
		case 2:
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%10.2f",mat2[i][j]-mat[i][j]);				
				}
				printf("\n");
			}
		break;
		case 3:
			printf("\nEntre com a constante desejada: ");
			scanf("%d",&cons);
			printf("\nMatriz 1 com a constante %d:\n",cons);
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%10.2f",mat[i][j]*cons);				
				}
				printf("\n");
			}
			printf("\nMatriz 2 com a constante %d:\n",cons);
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%10.2f",mat2[i][j]*cons);				
				}
				printf("\n");
			}
			break;
			case 4:
				printf("\nMatriz 1: \n");
				for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						printf("%10.2f",mat[i][j]);				
					}
					printf("\n");
				}
				printf("\nMatriz 2:\n");
				for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						printf("%10.2f",mat2[i][j]);
					}
					printf("\n");
				}
			break;
			default:
				printf("Opcao invalida.");	
	}
	return 0;
}
