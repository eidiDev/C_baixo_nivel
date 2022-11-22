#include <stdio.h>
#include <locale.h>
#include <conio.h>


float convertReal(float money, int option) {
    float convertResult;

    switch (option)
    {
    case 1:
        convertResult = (money) / 5.15 ;
        break;
    case 2:
        convertResult = (money) / 5.23 ;
        break;
    case 3:
        convertResult = (money) / 6.22 ;
        break;

    default:
        break;
    }

    return convertResult;
}

const char returnType (int option) {
    

    switch (option)
    {
    case 1:
        return "dolar";
        break;
    case 2:
        "euro" ;
        break;
    case 3:
        "libras";
        break;

    default:
        break;
    }
}

int main() {
    float inputNumber;
    int option;
    char typeOption;
    
    printf("------------------------------------");
    printf("\nSISTEMA DE CONVERSÃO DE MOEDAS REAL");
    printf("\n1 - Dolar");
    printf("\n2 - Euro");
    printf("\n3 - Libras");
    printf("\nDigite uma opcao: ");
    scanf("%i", &option);
    
    printf("Digite o valor em real: ");
    scanf("%f", &inputNumber);

    

    float resultado = convertReal(inputNumber, option);
    
    printf("O valor em %s e: %.2f", returnType(option), resultado);

}