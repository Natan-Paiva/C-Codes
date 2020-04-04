//Receber 3 numeros e mostra-los em ordem crescente.
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Entre com o primeiro valor: ");
	scanf("%d", &a);
	printf("Entre com o segundo valor: ");
	scanf("%d", &b);
	printf("Entre com o terceiro valor: ");
	scanf("%d", &c);
	if(a<b && a<c){
		if(b<c)printf("%d %d %d",a,b,c);
		else printf("%d %d %d",a,c,b);
	}else if(b<a && b<c){
		if(a<c)printf("%d %d %d",b,a,c);
		else printf("%d %d %d",b,c,a);
	}else{
		if(a<b)printf("%d %d %d",c,a,b);
		else printf("%d %d %d",c,b,a);
		}
		return 0;	
}

