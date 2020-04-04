//Ler distancia e combustivel consumido, calcular km/l e mostrar mensagem de acordo com a tabela.
#include <stdio.h>
int main(){
	float km, l, cons=0;
	printf("Entre com a quantidade de km percorridos: ");
	scanf("%f",&km);
	printf("Entre com o consumo em litros: ");
	scanf("%f",&l);
	cons=km/l;
	if(km/l<8){
		printf("Venda o carro! Media: %.1fkm/l",cons);
	}else if(cons>=8 && cons<=12){
		printf("Economico! Media: %.1f km/l",cons);
	}else{
		printf("Super Economico! Media: %.1f km/l",cons);	
	}
	return 0;
}

