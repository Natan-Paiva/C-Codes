//Determinar se um ano inserado é bissexto ou não.
#include <stdio.h>

int main()
{
    int ano;
    printf("Entre com o ano, para saber se ele é bissexto: ");
    scanf("%d",&ano);
    if(ano%4==0 && ano%100!=0){
        printf("O ano é bissexto.");
    }else if(ano%400==0){
        printf("O ano é bissexto.");
    }else{
        printf("O ano não é bissexto.");
    }
}
