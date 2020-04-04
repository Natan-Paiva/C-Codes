//Converter uma cadeia carecteres maisculos para minusculos usando tabela ASCII.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[101];
	int i;
	
	printf("Entre com a string de caracteres maiusculos: ");
	scanf("%[^\n]s",s);
	printf("String inserida covertida para caracteres minusculos: \n");
	
	for(i=0;i<strlen(s);i++){
		if(s[i]>=65 && s[i]<=90){
			printf("%c",s[i]+32);
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
