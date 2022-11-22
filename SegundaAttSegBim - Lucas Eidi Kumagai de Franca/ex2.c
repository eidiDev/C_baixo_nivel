#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int vetor[30];
    int total = 0;
    int maior = 0;
    int diaMaior;
    for (int i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 1000;
        total = total + vetor[i];

        if(vetor[i] > maior) {
            maior = vetor[i];
            diaMaior = i + 1;
        }
        printf("\n total de carros passados no dia %d: %d", i + 1,  vetor[i]);
    }
    printf("\n total de carros passados no mes: %d", total);
    printf("\n dia que passou mais carros no mes: dia %d : %d carros", diaMaior, maior);
    
}
