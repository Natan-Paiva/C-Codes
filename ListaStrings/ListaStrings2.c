//Criar um programa que calcule o comprimento de uma string.
#include <stdio.h>
int main()
{
	char s[101];
	int i=0;
	
	printf("Entre com uma string: ");
	scanf("%[^\n]s",s);
	
	do{
		i++;
	}while(s[i]!='\0');
	printf("A string possui um comprimento de %d caracteres.",i);
	return 0;
}
