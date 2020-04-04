//Ler um numero indeterminado de idades e calcular media delas, o programa deve ser encerrado quando for informada a idade 0.
#include <stdio.h>

int main()
{
	float media=0;
	int idade_tot=0, idade, acm=0;
	 printf("Entre com as idades(use 0 como idade para encerrar o programa): ");
	 
	 do{
	 	printf("\nEntre com a idade %d: ",acm+1);
	 	scanf("%d",&idade);
	 	idade_tot+=idade;
	 	acm++;
	 }while(idade>0);
	 media=idade_tot/(acm-1);
	 printf("A media das idades inseridas é %.2f.",media);
}

