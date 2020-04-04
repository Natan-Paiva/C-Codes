//Ler uma palavra e imprimi-la de tras-para-frente.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[21];
	int i;
	
	printf("Entre com a palavra:  ");
	scanf("%[^\n]s",s);
	printf("\nPalavra inserida de tras-para-frente: ");
	for(i=strlen(s);i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}
