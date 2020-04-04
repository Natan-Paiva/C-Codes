//Calcular o valor de S=1/1+3/2+5/3+7/4...99/50
#include <stdio.h>

int main()
{
	int num=1, den=1;
	float s=0;
	do{
	
	  	s=s+(num/den);
	  	num=num+2;
	  	den++;
	}while(den<=50);
	
	printf("O valor de S e %.2f.",s);
}
