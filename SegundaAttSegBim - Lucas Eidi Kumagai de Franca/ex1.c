#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    int vetor[31][3];
    for (int i = 0; i < 31; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            int num = (rand() % (9 - 29 + 1)) + 9;
            vetor[i][t] = num;
        }
        
    }

    int somaMediaTotal = 0;
    int numeroDeDias = 0;
    for(int i = 0; i < 31; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            
            // printf("%d\t", vetor[i][j]);
            soma = soma + vetor[i][j];
            
        }
        int media = soma / 3;
        somaMediaTotal = somaMediaTotal + media;
        printf("\n media do dia %d: %d", i + 1, media); 
    }

    int mediaTotal = somaMediaTotal / 31;
    printf("\n media total do mes: %d", mediaTotal);

    for(int i = 0; i < 31; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            
            // printf("%d\t", vetor[i][j]);
            soma = soma + vetor[i][j];
        }
        int media = soma / 3;
        if(media < mediaTotal){
            numeroDeDias = numeroDeDias + 1;
        } 
    }
    printf("\n numero de dias temperatura maior que a media do mes: %d", numeroDeDias);

    
}
