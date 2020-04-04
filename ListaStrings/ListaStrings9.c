// Ler uma palavra de no maximo 50 caracteres e imprimi-la somando no valor ASCII de cada caractere.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[51];
	int i;
	
	printf("Entre com uma palavra de no maximo 50 caracteres: ");
	scanf("%[^\n]s",s);
	printf("Palavra resultante ao somar 1 no valor ASCII de cada caractere: \n");
	for(i=0;i<strlen(s);i++){
		printf("%c",s[i]+1);
	}
	return 0;
}
