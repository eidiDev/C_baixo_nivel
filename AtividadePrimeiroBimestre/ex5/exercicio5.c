#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int getCal (int option, char* categoria) {
    int cal;
    
    switch (option)
    {
    case 1 :
        if(categoria == "prato"){
            cal = 180;
        }
        if(categoria ==  "sobremesa"){
            cal = 75;
        }
        if(categoria == "bebida") {
            cal = 20;
        }
        break;
    case 2 : 
        if(categoria == "prato"){
            cal = 230;
        }
        if(categoria ==  "sobremesa"){
            cal = 110;
        }
        if(categoria == "bebida") {
            cal = 70;
        }
        break;
    case 3 : 
        if(categoria == "prato"){
            cal = 250;
        }
        if(categoria ==  "sobremesa"){
            cal = 170;
        }
        if(categoria == "bebida") {
            cal = 100;
        }
        break;
    case 4 : 
        if(categoria == "prato"){
            cal = 350;
        }
        if(categoria ==  "sobremesa"){
            cal = 200;
        }
        if(categoria == "bebida") {
            cal = 65;
        }
        break; 
    default:
        cal = 0;
        break;
    }

    return cal;
}

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int option, prato, sobremesa, bebida;


    printf("\nDigite a opcao de Prato: ");
    scanf("%d", &option);
    int getPrato = getCal(option, "prato");
    printf("\n%d ", getPrato);


    printf("\nDigite a opcao de sobremesa: ");
    scanf("%d", &option);
    int getSobremesa = getCal(option, "sobremesa");
    printf("\n%d ", getSobremesa);


    printf("\nDigite a opcao de bebida: ");
    scanf("%d", &option);
    int getBebida = getCal(option, "bebida");
    printf("\n%d ", getBebida);


    int resultado = getPrato + getSobremesa + getBebida;

    printf("\nTOTAL DE CALORIAS DE SUA REFEICAO: %d", resultado);


}
