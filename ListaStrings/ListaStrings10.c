//Ler uma strig e duas letras L1 e L2 e fazer as trocas de L1 por L2.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[101], L1, L2;
	int i;
	
	printf("Entre com uma string: ");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("\nEntre com a letra a ser substituida: ");
	scanf("%c",&L1);
	fflush(stdin);
	printf("\nEntre com a letra que substituira: ");
	scanf("%c",&L2);
	printf("\nString resultante:\n");
	for(i=0;i<strlen(s);i++){
		if(s[i]==L1){
			printf("%c",L2);
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;

}
