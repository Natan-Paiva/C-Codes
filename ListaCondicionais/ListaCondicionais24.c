//Determinar se um ano inserado � bissexto ou n�o.
#include <stdio.h>

int main()
{
    int ano;
    printf("Entre com o ano, para saber se ele � bissexto: ");
    scanf("%d",&ano);
    if(ano%4==0 && ano%100!=0){
        printf("O ano � bissexto.");
    }else if(ano%400==0){
        printf("O ano � bissexto.");
    }else{
        printf("O ano n�o � bissexto.");
    }
}
