#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int flagGenero;
    float altura, fHomem, fMulher;
    char genero[61];
    

  
    printf("Digite M para masculino e F para feminino: ");
    scanf("%c", &genero);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(genero == 'M' || genero == 'm'){
        fHomem = (72.7 * altura);
        printf("\n Seu peso ideal e de: %.2f", fHomem);
        printf("\nMasculino");
    }else{
        if(genero == 'F' || genero == 'f'){
            fMulher = (62.1 * altura);
            printf("\n Seu peso ideal e de: %.2f", fMulher);
            printf("\nFeminino");
        }else{
            printf("\nDigite um valor Valido !");
        }
    }
    
}
