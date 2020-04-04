//Apresentar 5 questoes de soma com valores aleatorios entre 0  e 100, mostras resposta correta e ao final número de questões corretas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a, b, resp=0, acertos=0;
	
	srand(time(NULL));
	a=rand()%100;
	b=rand()%100;
	printf("Responda as questoes a seguir:\n");
	printf("%d + %d = ", a, b);
	scanf("%d", &resp);
	if(resp==a+b){
		printf("Resposta correta!\n");
		acertos++;
	}else{
		printf("Resposta errada, o correto  seria %d.\n",a+b);
	}
	a=rand()%100;
	b=rand()%100;
	printf("%d + %d = ", a, b);
	scanf("%d", &resp);
	if(resp==a+b){
		printf("Resposta correta!\n");
		acertos++;
	}else{
		printf("Resposta errada, o correto  seria %d.\n",a+b);
	}
	a=rand()%100;
	b=rand()%100;
	printf("%d + %d = ", a, b);
	scanf("%d", &resp);
	if(resp==a+b){
		printf("Resposta correta!\n");
		acertos++;
	}else{
		printf("Resposta errada, o correto  seria %d.\n",a+b);
	}
	a=rand()%100;
	b=rand()%100;
	printf("%d + %d = ", a, b);
	scanf("%d", &resp);
	if(resp==a+b){
		printf("Resposta correta!\n");
		acertos++;
	}else{
		printf("Resposta errada, o correto  seria %d.\n",a+b);
	}
	a=rand()%100;
	b=rand()%100;
	printf("%d + %d = ", a, b);
	scanf("%d", &resp);
	if(resp==a+b){
		printf("Resposta correta!\n");
		acertos++;
	}else{
		printf("Resposta errada, o correto  seria %d.\n",a+b);
	}
	
	printf("Teste concluido, voce obteve %d acertos",acertos);

}

