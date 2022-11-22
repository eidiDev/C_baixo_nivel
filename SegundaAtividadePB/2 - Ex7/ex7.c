#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int idadeKleber = 37;
    int flagStop = 0;

    while(flagStop == 0 ) {
        if(flagStop == 0){
            int number;
            printf("\n Digite um numero: ");
            scanf("%d", &number );

            if(number == idadeKleber){
                flagStop = 1;
                printf("\n Parabens, voce acertou a idade de Kleber");
            }else{
                if(number > idadeKleber){

                    int counterLess = number - idadeKleber;
                    int tonarPositivo = abs(counterLess); 

                    if(counterLess < 10  ) {
                        printf("\n MUITO PERTO n !!!");
                    }

                    if(counterLess > 10 && counterLess <= 20  ) {
                        printf("\n PERTO n!!!");
                    }

                    if(counterLess > 20   ) {
                        printf("\n LONGE n  !!!");
                    }
                    
                }else{
                    int counterLess = idadeKleber - number;

                    if(counterLess < 10  ) {
                        printf("\n MUITO PERTO !!!");
                    }

                    if(counterLess > 10 && counterLess <= 20) {
                        printf("\n PERTO !!!");
                    }

                    if(counterLess > 21   ) {
                        printf("\n LONGE !!!");
                    }
                }
            }
        }
    }
}
