#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
    int falta = 0;
    

    printf("\n Digita sua primeira nota: ");
    scanf("%i", &nota1);

    if(nota1 < 0 || nota1 > 100){
        printf("\n OPCAO INVALIDA ! ");
        return 0;
    }

    printf("\n Digita sua segunda nota: ");
    scanf("%i", &nota2);

    if(nota2 < 0 || nota2 > 100){
        printf("\n OPCAO INVALIDA ! ");
        return 0;
    }

    printf("\n Digita sua terceira nota: ");
    scanf("%i", &nota3);

    if(nota3 < 0 || nota3 > 100){
        printf("\n OPCAO INVALIDA ! ");
        return 0;
    }

    printf("\n Digita sua quantidade de faltas: ");
    scanf("%i", &falta);

    if(falta < 0 || falta > 60){
        printf("\n OPCAO INVALIDA ! ");
        return 0;
    }

    media = (nota1 * 0.25) + (nota2 * 0.25) + (nota3 * 0.5);

    if(falta > 20){
        printf("\n Reprovado por falta ");
        return 0;
    }

    if(falta <= 20 && media < 10 ) {
        printf("\n Reprovado por Nota ");
        return 0;
    }

    if(falta <= 20 && (media >= 10 && media <= 59 )){
        printf("\n Exame Final ");
        return 0;
    }

    if(falta <= 20 && media >= 60) {
        printf("\n Aprovado Direto ");
        return 0;
    }


}
