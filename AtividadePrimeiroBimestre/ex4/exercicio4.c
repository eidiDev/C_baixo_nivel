#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {

    float valor_compra, valor_venda, porcentagem;
    char *printPercent;

    printf("\nInforme o valor de compra em (R$): ");
    scanf("%f", &valor_compra);

    if(valor_compra < 10){
        printPercent = "70";
        porcentagem = 0.7;
    }

    if(10.00 <= valor_compra < 30.00 ){
        printPercent = "50";
        porcentagem = 0.5;
    }

    if(30.00 <= valor_compra < 50.00){
        printPercent = "40";
        porcentagem = 0.4;
    }

    if(valor_compra >= 50.00){
        printPercent = "30";
        porcentagem = 0.3;
    }

    float aux;
    aux = porcentagem * valor_compra;

    valor_venda = aux + valor_compra ;

    printf("\n PORCENTAGEM DE LUCRO: %s %%", printPercent);
    printf("\n VALOR DE VENDA: %.3f", valor_venda);

    
}
