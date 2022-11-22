#include <stdio.h>
#include <locale.h>

int main() {
    //ex1
    float nota1,nota2,nota3, peso1=2,peso2=5,peso3=3,media;

    setlocale(LC_ALL,"PORTUGUESE");
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
  
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
  
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * peso1) + (nota2 * peso2) + (nota3 *        peso3) / (peso1+peso2+peso3);

    printf("a media do aluno é: %.2f", media);
  
}
  