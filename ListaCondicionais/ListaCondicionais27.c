//Ler a idade dE um  atleta e informar a categoria do mesmo.
#include <stdio.h>

int main()
{
	int idade;
	printf("Informe a  idade do atleta: ");
	scanf("%d",&idade);
	
	if(idade>=5 && idade<=7){
		printf("Categoria Infantil A, entre 5 e 7 anos.");
	}else if(idade>=8 && idade<=10){
		printf("Categoria Infantil B, entre 8 e 10 anos.");
	}else if(idade>=11 && idade<=13){
		printf("Categoria Juvenil A, entre 11 e 13 anos.");
	}else if(idade>=14 && idade<=17){
		printf("Categoria Juvenil B, entre 14 e 17 anos.");
	}else if(idade>=18){
		printf("Categoria Senior, 18 anos ou maos.");
	}else{
		printf("Idade invalida.");
	}
}
