//Receber uma string e imprimila sem as vogais.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[101];
	int i;
	
	printf("Entre com a string: ");
	scanf("%[^\n]s",s);
	printf("\nString inserida sem as vogais: ");
	
	for(i=0;i<strlen(s);i++){
		if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='A'&& s[i]!='E'&& s[i]!='I'&& s[i]!='O'&& s[i]!='U'){
			printf("%c",s[i]);
		}
	}
	return 0;
}
