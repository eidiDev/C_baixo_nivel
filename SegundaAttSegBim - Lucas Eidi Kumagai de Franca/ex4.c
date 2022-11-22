#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int vetor[3][3];

    int calc = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            int num = (rand() % (1 - 9 + 1)) + 1;
            vetor[i][t] = num;

            if(num < 5){
                calc = calc + 1000;
            }else{
                calc = calc + 5000;
            }
        }
    }

    printf("custo mensal da regiao comercial: %d", calc);
    
}
