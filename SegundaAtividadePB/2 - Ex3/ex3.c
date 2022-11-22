#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int option;
    float salario = 0.0;
    int numero_filhos = 0;
    int countPopulacao = 0, sumSalario = 0, sumNumeroFilhos = 0;
    float biggerSalario = 0.0;
    int countPessoasComSalarioX = 0;

    do
    {
        printf("\n Digite 1 para cadastrar uma familia, caso deseje parar, digite 0: ");
        scanf("%d", &option);

        if (option != 0)
        {
            printf("\n Digite o salario total  da familia:  ");
            scanf("%f", &salario);

            printf("\n Digite o numero de filhos de sua familia:  ");
            scanf("%d", &numero_filhos);

            countPopulacao = countPopulacao + 1;

            sumSalario = sumSalario + salario;

            sumNumeroFilhos = sumNumeroFilhos + numero_filhos;

            if (salario > biggerSalario)
            {
                biggerSalario = salario;
            }

            if (salario <= 1500)
            {
                countPessoasComSalarioX = countPessoasComSalarioX + 1;
            }
        }

    } while (option != 0);

    float mediaSalarial =  sumSalario / countPopulacao;
    float mediaNumFilhos = sumNumeroFilhos / countPopulacao;

    float equal1 = 100 * countPessoasComSalarioX;
    float equal2 = equal1 / countPopulacao;

    printf("\n media salario  da populacao: %.2f", mediaSalarial);
    printf("\n media do numero de filhos: %.2f", mediaNumFilhos);
    printf("\n maior salario: %.2f", biggerSalario);
    printf("\n percentagem de pessoas com salarios ate 1500: %.2f porcento", equal2);
}
