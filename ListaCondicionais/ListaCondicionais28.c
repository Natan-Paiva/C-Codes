//Receber tres valores inteiros e positivos e mostrar o resultado do tipo de media desejada.
#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, z, media;
	float resul;
	printf("Entre com o primeiro valor inteiro e positivo: ");
	scanf("%d",&x);
	printf("Entre com o segundo valor inteiro e positivo: ");
	scanf("%d",&y);
	printf("Entre com o terceiro valor inteiro e positivo: ");
	scanf("%d",&z);
	
	printf("Escolha um dos tipos de média  a seguir: ");
	printf("\n1-Geometrica \n2-Ponderada \n3-Ponderada \n4-Aritmetica \n");
	scanf("%d",&media);
	
	if(media==1){
		resul= cbrt(x+y+z);
		printf("O resultado e %.2f.", resul);
	}else if(media==2){
		resul= (((x+2)*(y+3)*z)/6);
		printf("O resultado e %.2f.", resul);
	}else if(media==3){
		resul= (1/((1/x)+(1/y)+(1/z)));
		printf("O resultado e %.2f.", resul);
	}else if(media==4){
		resul= ((x+y+x)/3);
		printf("O resultado e %.2f.", resul);
	}else{
		printf("Opcao invalida.");
	}
}
