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

    int formacao;
    char exp;
    
    printf("\n Possui experiencia anterior: digite S para sim ou N para nao: ");
    scanf(" %c", &exp);
    
	printf("\n Digite sua formacao: 1 para fundamental, 2 para medio e 3 para superior: ");
	scanf("%i", &formacao);
	

   	if(exp == 'S'){
   		printf("sim");
   		switch (formacao)
	    {
	    case 1:
	    	printf("\n Apto para Recepcionista");
	        break;
        case 2:
    	 	printf("\n Apto para Auxiliar de Escritorio");
        break;
        
        case 3:
    	 printf("\n Apto para Gerente") ;
        break;
	    
	    default:
	    	printf("\n Opcao invalidade");
	        break;
	    }
	}else{
		printf("nao");
		switch (formacao)
	    {
	    case 1:
	    	printf("\n Apto para Servente");
	        break;
        case 2:
    		printf("\n Apto para Recepcionista");
        break;
        
        case 3:
    		printf("\n Apto para Auxiliar de Escritorio");
        break;
	    
	    default:
	    	printf("\n Opcao invalidade");
	        break;
	    }
	}
	

}
