#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int vetor[4][12];

    int totalDoAno = 0;
    int totalMes_de_outubro = 0;
    int totalAruela = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("\n Produto %d: ", i + 1);
        for (int t = 0; t < 12; t++)
        {
            printf("\n digite o valor do mes %d: ", t + 1);
            vetor[i][t] = rand() % 10;

            printf("\n numero randomico digitado: %d" , vetor[i][t]);
            totalDoAno = totalDoAno + vetor[i][t];

            int outubro = t + 1;
            int produto_3 = i + 1;
            
            if(outubro == 10){
                totalMes_de_outubro = totalMes_de_outubro + vetor[i][t];
            }

            if(produto_3 == 3){
                totalAruela = totalAruela + vetor[i][t];
            }

        }
    }
    
    printf("\n");
    printf("\n");
    printf("\n Total de pecas vendidas no ano: %d" , totalDoAno );
    printf("\n Total de pecas vendidas em outubro: %d" , totalMes_de_outubro );
    printf("\n Total de pecas vendidas em aruelas: %d" , totalAruela );




}
