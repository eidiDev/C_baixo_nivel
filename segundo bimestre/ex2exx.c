#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int questoes = 80;
    int respostas = 80;

    int vetor1[questoes];
    int vetor2[respostas];

    for (int i = 0; i < questoes; i++)
    {   
        int r = rand() % 4;
        vetor1[i] = r;
    }

    for (int j = 0; j < respostas; j++)
    {   
        int r2 = rand() % 4;
        vetor2[j] = r2;
    }

    // for (int i = 0; i < questoes; i++)
    // {
    //     printf("\n a questao %d, a certa e: %d",i,vetor2[i]);
    //     printf("\n a questao %d, a certa e: %d",i,vetor1[i]);
    // }
  
    int count = 0;
    for (int i2 = 0; i2 < questoes; i2++)
    {
      int result1 = vetor1[i2];
      int result2 = vetor2[i2];
      if(result1 == result2 ){
          count = count + 1;
      }   
    }
    
    printf("o aluno acertou: %d", count);


}
