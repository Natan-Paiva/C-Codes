//Ler 2 vetores de 5 posições com numeros reais, calcular o produto escalar(x1*y1+x2*y2+...+xn*yn),
//imprimir os dois vetores e seu produto escalar. 
#include <stdio.h>
int main()
{
	float vet1[5], vet2[5], pro_esc=0;
	int i;
	
	for(i=0;i<5;i++){
		printf("Entre com o %d' valor para o conjunto 1: ",i+1);
		scanf("%f",&vet1[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("Entre com o %d' valor para o conjunto 2: ",i+1);
		scanf("%f",&vet2[i]);
	}
	printf("\nConjunto 1	Conjunto 2");
	for(i=0;i<5;i++){
		printf("\n%.1f		%.1f",vet1[i],vet2[i]);
		pro_esc+=vet1[i]*vet2[i];
	}
	printf("\nO produto escalar dos dois conjuntos é %.1f.",pro_esc);
	
} 
