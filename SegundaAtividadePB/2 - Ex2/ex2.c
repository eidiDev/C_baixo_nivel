#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int countFaixa1 = 0, sumFaixa1 = 0;
    int countFaixa2 = 0, sumFaixa2 = 0;
    int countFaixa3 = 0, sumFaixa3 = 0;
    int countFaixa4 = 0, sumFaixa4 = 0;

    float resultFaixa1=0;
    float resultFaixa2=0;
    float resultFaixa3=0;
    float resultFaixa4=0;

    for (int i = 0; i <= 14; i++)
    {
        printf("\ncount: %d ", i);
        int idade;
        float peso;

        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        printf("\nDigite o seu peso: ");
        scanf("%f", &peso);

        if(idade < 10 ){
            countFaixa1 = countFaixa1 + 1;
            sumFaixa1 = sumFaixa1 + peso;
        }

        if(11 <= idade < 20) {
            countFaixa2 = countFaixa2 + 1; 
            sumFaixa2 = sumFaixa2 + peso;

        }

        if(21 <= idade < 30){
            countFaixa3 = countFaixa3 + 1;
            sumFaixa3 = sumFaixa3 + peso;

        }

        if(idade >= 31) {
            countFaixa4 = countFaixa4 + 1;
            sumFaixa4 = sumFaixa4 + peso;
        }
    }

    resultFaixa1 = countFaixa1 / sumFaixa1;
    resultFaixa2 = countFaixa2 / sumFaixa2;
    resultFaixa3 = countFaixa3 / sumFaixa3;
    resultFaixa4 = countFaixa4 / sumFaixa4;

    printf("\n Media de 1 a 10 anos: %.2f", resultFaixa1 );
    printf("\n Media de 11 a 20 anos: %.2f", resultFaixa2 );
    printf("\n Media de 21 a 30 anos: %.2f", resultFaixa3 );
    printf("\n Maior de 31 anos: %.2f", resultFaixa4 );

    
}
