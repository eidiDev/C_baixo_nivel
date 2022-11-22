#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int numero;
    int mods;
    int absolute;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 0 ){
        mods = numero % 2;

        if(mods == 0){
            printf("O numero digitado: %d e PAR\n", numero);
        }else{
            printf("\nO numero digitado: %d e IMPAR\n", numero);
        }
    }else{
        absolute = abs(numero);
        printf("\nO numero absoluto do numero digitado: %d e %d", numero, absolute);
    }
}
