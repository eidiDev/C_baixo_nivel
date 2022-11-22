#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int numberEleitores = 10;
    int count_candidato1 = 0;
    int count_candidato2 = 0;
    int count_candidato3 = 0;
    int count_branco = 0;
    int count_nulos = 0;

    


    for (int i = 1; i < numberEleitores; i++)
    {
        int numberRead;
        printf("\n Digite 11 para joao silva");
        printf("\n Digite 22 para jose da silva");
        printf("\n Digite 23 para juca da silva");
        printf("\n Digite 0 para voto em branco");
        printf("\n Digite outro valor para nullo: ");
        scanf("%d", &numberRead);

        switch (numberRead)
        {
        case 11:
            count_candidato1 = count_candidato1 + 1;
            break;
        case 22:
            count_candidato2 = count_candidato2 + 1;
            break;
        case 23:
            count_candidato3 = count_candidato3 + 1;
            break;
        case 0:
            count_branco = count_branco + 1;
            break;
        default:
            count_nulos = count_nulos + 1;
            break;
        }
    }

    float percentFlag = 100 * numberEleitores; 
    int percent1 = percentFlag / count_candidato1;
    int percent2 = percentFlag / count_candidato2;
    int percent3 = percentFlag / count_candidato3;
    int percent4 = percentFlag / count_branco;
    int percent5 = percentFlag / count_nulos;

    int flagStop = 0;
    
    if(percent1 > 50){
        printf("\n Candidato Eleito: 1");
    }

    if(percent2 > 50){
        printf("\n Candidato Eleito: 2");
    }

    if(percent3 > 50){
        printf("\n Candidato Eleito: 3");
    }

    if(percent4 > 50){
        printf("\n Branco teve maior porcentagem, nao houve eleito");
    }

    if(percent5 > 50){
        printf("\n Nulo teve maior porcentagem, nao houve eleito");
    }
}
