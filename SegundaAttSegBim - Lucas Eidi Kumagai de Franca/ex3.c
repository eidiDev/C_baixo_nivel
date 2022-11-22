#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int vetor[7];

    int totalDaSemana = 0;
    for (int i = 0; i < 7; i++)
    {
        int kg;
        vetor[i] = rand() % 200;

        kg = vetor[i] * 30;
        int formula1 = kg * 45;
        int formula2 = formula1 / 1000;

        totalDaSemana = totalDaSemana + formula2;
        printf("\n Quantidade de pao vendidados no dia %d: %d", i + 1, vetor[i]);
        printf("\n Lucro no dia %d: %d", i+1, formula2);
    }

    printf("\n Lucro total da semana: %d" , totalDaSemana);
    
}
