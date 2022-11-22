#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void baskara(int a, int b, int c, int raiz1, int raiz2){
    raiz1 = (- (b) + sqrt(b*b-4*a*c)) / (2 * a); 
    raiz2 = (- (b) - sqrt(b*b-4*a*c)) / (2 * a);
}

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int a = 5 ; 
    int b = 10;
    int c = 5;
    int x1 ;
    int x2 ;
    baskara(a,b,c,x1,x2);

    printf("O valor de X1: %i e o valor de X2: %i", x1,x2);
    
}
