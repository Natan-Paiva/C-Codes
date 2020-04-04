//Ler o codigo do produto e a quantidade e mostrar o total a ser pago pelo lanche.
#include<stdio.h>
int main()
{
	int quant, cod;
	printf("Escolha um dos lanches abaixo:\n");
	printf("Produto		Código\n");
	printf("Cachorro Quente	100\n Bauru Simples	101\n Bauru Com Ovo	102\n Hamburguer	103\n Cheeseburguer	104\n Suco		105\n Refrigerante	106\n");
	printf("Entre com o codigo do produto: ");
	scanf("%d",&cod);
	printf("Entre com a quantide desejada: ");
	scanf("%d",&quant);
	
	if(cod==100){
		printf("Total a ser pago RS %.2f.",1.20*quant);
	}else if(cod==101){
		printf("Total a ser pago RS %.2f.",1.30*quant);
	}else if(cod==102){
		printf("Total a ser pago RS %.2f.",1.50*quant);
	}else if(cod==103){
		printf("Total a ser pago RS %.2f.",1.20*quant);
	}else if(cod==104){
		printf("Total a ser pago RS %.2f.",1.70*quant);
	}else if(cod==105){
		printf("Total a ser pago RS %.2f.",2.20*quant);
	}else{
		printf("Total a ser pago RS %.2f.",1.00*quant);
	}
	
}

