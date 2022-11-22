#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>


// Faça um algoritmo para ler o salário de um funcionário. 
// Se o salário for inferior àR$2000,00, conceda um aumento de 11,5%. 
// Após o aumento, desconte 8% de impostos.
// Imprima o salário inicial, o salário com o aumento e o salário final.

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    float salario, salarioAumento, salarioFinal ;

    printf("Funcionario, informe seu salario: ");
    scanf("%f", &salario);

    if(salario < 2000){
        // salarioAumento = ( 111.5 / 100) * salario;
        // salarioFinal = (92 / 100) * salarioAumento;

        salarioAumento = (( 11.5 / 100) + 1)  * salario;
        salarioFinal = (1 - 0.08) * salarioAumento;
        
        printf("\nSalario Inicial: R$ %.2f", salario);
        printf("\nSalario com Aumento : R$ %.2f", salarioAumento);
        printf("\nSalario com Desconto de Imposto: R$ %.2f", salarioFinal);

    }else{
        printf("Salario Inicial: R$ %.2f", salario);
    }

    
}
