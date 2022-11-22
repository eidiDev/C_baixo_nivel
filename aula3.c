#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    float saldo=200 , v_compra;
    printf("\n Digite o valor da compra: ");
    scanf("%f", &v_compra);

    if(v_compra <= saldo){
        saldo = saldo - v_compra;
        printf("\n Operacao finalizada");
        printf("\n Seu saldo e de: %.2f", saldo);
    }else{
        printf("\n Saldo insuficiente");
    }
}
