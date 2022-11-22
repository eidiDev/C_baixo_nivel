#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int numberRead;
    int firstNumber;

    int flagStop = 0;
    int flagStopFirst = 0 ;
    int flagResultOfHalf = 0;

    int pares = 0;
    int numeros_maiores_que_primeiro_digitado = 0;
    
     int lastMaior = 0;
     int lastMenor = 0;

    while(flagStop == 0){
        if(flagStop == 0){
            
            printf("Digite o numero: ");
            scanf("%d", &numberRead);
            
            if(numberRead == 0 ){
                flagStop = 1;
            }

            if(numberRead > lastMaior ){
                lastMaior = numberRead;
            }

             if(numberRead < lastMenor ){
                lastMenor = numberRead;
            }



            if(flagStopFirst == 0){
                firstNumber = numberRead;
                flagStopFirst = 1;
                flagResultOfHalf = firstNumber / 2;
                lastMenor = numberRead;
            }else{
                if(flagResultOfHalf == numberRead){
                    flagStop = 1;
                }else{
                    int par  = numberRead % 2;
                    if(par == 0){
                        pares = pares + 1;
                    }
                    
                    if(numberRead > firstNumber){
                        numeros_maiores_que_primeiro_digitado = numeros_maiores_que_primeiro_digitado + 1;
                    }
                }
            }
        }
    }
    

    printf("\n pares: %i" , pares);
    printf("\n numeros menores que o primeiro digitado: %i" , numeros_maiores_que_primeiro_digitado);
    printf("\n maior lido: %i" , lastMaior);
    printf("\n menor lido: %i" , lastMenor);


    
}
