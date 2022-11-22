#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int n;
    printf("\n Digite o numero de alunos na turma: ");
    scanf("%i", &n);
    float notas[n];
    float sum = 0, media;

    for (int i = 0; i < n; i++)
    {
        float nota;
        printf("\n Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);

        notas[i] = nota;
        sum = sum + nota;
    }
    media = sum / n;

    for (int i = 0; i < n; i++){
      printf("\n Nota do aluno %i: %.2f ", i, notas[i] );
    }
    
    printf("\n A media e: %.2f", media);
    
    
}
