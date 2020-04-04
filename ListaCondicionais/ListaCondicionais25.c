//Calcular as raizes das equacoes de segundo grau. 
#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
int main()
{
    int a, b, c, delta;
	float  x1, x2;
    
    printf("Uma equacao de segundo grau se caracteriza ax²+bx+c=0.");
    printf("\nEntre com o valor de a: ");
    scanf("%d",&a);
    printf("Entre com o valor de b: ");
    scanf("%d",&b);
    printf("Entre com o valor de c: ");
    scanf("%d",&c);
    
    delta=(b*b)-4*a*c;
    x1=((b*-1)+sqrt(delta))/(2*a);
    x2=((b*-1)-sqrt(delta))/(2*a);
    
    if(a==0){
        printf("Nao e equacao de segundo grau.");
    }else if(delta<0){
        printf("Nao existem raizes.");
    }else if(delta==0){
        printf("Raiz unica igual a %.2f.", x1);
    }else{
        printf("As raizes da equacao sao x1=%.2f e x2= %.2f.",x1, x2);
    }
    return 0;
}
