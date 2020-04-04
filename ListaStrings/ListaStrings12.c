//Ler uma string S, um caractere C e uma posição I, e mostar o indice da primeira aparição de C o verificaçao deve começar apartir de I.
#include <stdio.h>
#include <string.h>
int main()
{
	char S[101], C;
	int I, i, pos, aux=0;
	
	printf("Entre com a string: ");
	scanf("%[^\n]s",S);
	fflush(stdin);
	printf("\nEntre com o caractere a ser verificado: ");
	fflush(stdin);
	scanf("%c",&C);
	printf("\nEntre com posicao de partida para a verificacao da string(lembrando que a verificacao comeca da posicao 0): ");
	scanf("%d",&I);
	
	for(i=I;i<strlen(S);i++){
		if(S[i]==C){
			pos=i;
			aux++;
			i++;
			break;
		}
	}
	if(aux!=0){
		printf("Apos a posicao %i o caractere '%c' aparece na posicao %i.",I,C,pos);
		
	}else{
		printf("Apos a posicao %i o caractere '%c' nao aparece na string.",I,C);
	}
	return 0;
}
