//Receber o valor do produto e o estado de destinoe e retornar o valor final com o acrescimo de impostos.
#include <stdio.h>

int main(){
    float valor=0, valor_tot=0;
    int estado;
    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);
    getchar();
    printf("Entre com o estado desejado:\n1-MG imposto 7% \n2-SP imposto 12% \n3-RJ imposto 15% \n4-MS imposto 8%\n");

    scanf("%i",&estado);
    switch(estado){
        case 1:
            valor_tot+=valor*1.07;
            printf("O valor final do produto é %.2f",valor_tot);
            break;
        case 2:
            valor_tot+=valor*1.12;
            printf("O valor final do produto é %.2f",valor_tot);
            break;
        case 3:
            valor_tot+=valor*1.15;
            printf("O valor final do produto é %.2f",valor_tot);
            break;
        case 4:
            valor_tot+=valor*1.08;
            printf("O valor final do produto é %.2f",valor_tot);
            break;
        default:
            printf("Opção invalida.");
    }
}
