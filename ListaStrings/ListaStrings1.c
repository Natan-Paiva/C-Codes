//Ler uma string e imprimi=la.
#include <stdio.h>
int main()
{
	char s[101];
	
	printf("Entre com a string: ");
	scanf("%[^\n]s",s);
	
	printf("\nA string inserida foi: %s",s);
	
	return 0;
}
