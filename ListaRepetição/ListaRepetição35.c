//Mostrar valores impares de um intervalo definido pelo usuario, informar caso intervalo seja invalido.
#include <stdio.h>

int main()
{
	int a, b, soma=0;
	
	printf("Entre com o valor incial do intervalo: ");
	scanf("%d",&a);
	printf("Entre com o valor final do intervalo: ");
	scanf("%d",&b);
	
	if(a<b){
		for(a;a<=b;a++){
			if(a%2!=0){
				soma=soma+a;
			}
		}
		printf("O somatorio dos numeros impares do intervalo e %d.",soma);
	}else{
		printf("Intervalo de valores invalido.");
	}
}
