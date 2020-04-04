//Fazer um programa que calcule a quantidade de numeros 1's de uma string.
#include <stdio.h>
int main()
{
	char s[101];
	int i, acm=0;
	
	printf("Entre com uma string: ");
	scanf("%[^\n]s",s);
	
	for(i=0;i<101;i++){
		if(s[i]=='1'){
			acm++;
		}
	}	
	printf("O caractere '1' aparece %d vezes na string inserida.",acm);
	return 0;
}
