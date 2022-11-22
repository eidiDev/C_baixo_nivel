#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado_civel[61];
    int qtd_filhos;
    
    printf("\n Digita seu estado Civil: digite casada ou solteira: ");
    scanf("%s", estado_civel);
    
    printf("\n Digite a quantidade de filhos ");
    scanf("%i", &qtd_filhos);
    
    
	if(estado_civel == "solteira"){
		if(qtd_filhos < 2 || qtd_filhos == 1 ){
			printf("\n RS% 300 por filho");
		}
		
		if(qtd_filhos > 3){
			printf("\n RS% 200 por filho");
		}
	}
	
	if(estado_civel == "casada"){
		if(qtd_filhos < 2 || qtd_filhos == 1 ){
			printf("\n RS% 200 por filho");
		}
		
		if(qtd_filhos > 3){
			printf("\n RS% 150 por filho");
		}
	}
	
    

}
