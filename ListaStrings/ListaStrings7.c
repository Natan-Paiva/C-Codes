//Receber uma palavra, calcular quantas vogais ela possuis, entrar com um caractere para substituir as vogais da palavra.
#include <stdio.h>
#include <string.h>
int main()
{
	char s[101], troca;
	int i, vog=0;
	
	printf("Entre com uma palavra: ");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("\nEntre com um caractere Para substituir as vogais da palavra: ");
	scanf("%c",&troca);
	//troca=getchar();
	 
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
			vog++;
			s[i]=troca;
		}
	}
	printf("\nA palavra inserida possui %d vogais.",vog);
	printf("\nPalavra inserida substituindo as vogais por '%c': %s",troca,s);
	return 0;
}
