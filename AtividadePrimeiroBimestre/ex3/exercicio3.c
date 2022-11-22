#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    float salario_bruto, valor_prestacao, inss, salario_liquido;
    float resultFlag;

    printf("\nInforme seu salario Bruto: ");
    scanf("%f", &salario_bruto);

    printf("\nInforme o valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    inss = 0.09 * salario_bruto;
    salario_liquido = salario_bruto - inss;

    resultFlag = 0.3  * salario_liquido;

    if(valor_prestacao > resultFlag){
        printf("\nVoce NAO podera realizar o emprestimo");
        printf("\nValor da prestação: %.2f maior que 30 porcento do salario Liquido: %.2f", valor_prestacao, resultFlag);

        
        printf("\nInss: %.2f", inss);
        printf("\nSalario Liquido: %.2f", salario_liquido);
        printf("\n30 porcento do salario Liquido: %.2f", resultFlag);


        
    }else{
        printf("\nVoce esta concedido de fazer o emprestimo");

        printf("\nInss: %.2f", inss);
        printf("\nSalario Liquido: %.2f", salario_liquido);
        printf("\n30 porcento do salario Liquido: %.2f", resultFlag);
    }




}
