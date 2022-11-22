#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    float number, soma = 0, result;
    int count = 0;

    while (number > 0)
    {
        printf("Digite um numero, ou digite zero para parar o looping ");
        scanf("%f", &number);

        if(number > 0 ){
            count = count + 1;
            soma = soma + number;
        }
    }
    result = count / soma;

    printf("soma: %.2f", soma);
    printf("\ncontador: %d", count);
    printf("\nmedia: %.2f", result);
    
}
