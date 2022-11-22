#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

char* returnType (int option) {

    switch (option)
    {
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Fevereiro" ;
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 0:
        return "Outubro";
        break;
    default:
        return "Mes Invalido";
        break;
    }
}

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    
    int num_placa;
    printf("\nDigite os quatro digitos da placa: ");
    scanf("%d", &num_placa);

    int lastDigit = num_placa % 10;

    // printf("\n ultimo numero: %d", lastDigit);
    
    char* getMonth = returnType(lastDigit);

    printf("\n Mes do pagamento do Ipva: %s", getMonth);

}
