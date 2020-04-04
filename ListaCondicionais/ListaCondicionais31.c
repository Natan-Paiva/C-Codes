//Receber altura e peso do usuario e mostrar a classificacao do mesmo.
#include <stdio.h>

int main()
{
	float peso, altura;
	printf("Entre com seu peso: ");
	scanf("%f",&peso);
	printf("Entre com sua altura: ");
	scanf("%f", &altura);
	
	if(altura<=1.20){
		if(peso<60){
			printf("Categoria A.");
		}else if(peso>90){
			printf("Categoria G.");
		}else{
			printf("Categoria D.");
		}
	}
	if(altura>1.20 && altura<1.70){
		if(peso<60){
			printf("Categoria B.");
		}else if(peso>90){
			printf("Categoria H.");
		}else{
			printf("Categoria E.");
		}
	}
	if(altura>=1.70){
		if(peso<60){
			printf("Categoria C.");
		}else if(peso>90){
			printf("Categoria I.");
		}else{
			printf("Categoria F.");
		}
	}
}
	
