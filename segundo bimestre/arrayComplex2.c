int main(){
    float mat[2][3], soma, media;
    int i, j;
    for(i = 0; i < 2; i++){
        printf("Informe as 3 notas do aluno %d\n", i+1);
        soma = 0;
        for(j = 0; j < 3; j++){
            printf("Informe a nota %d: ", j+1);
            scanf("%f", &mat[i][j]);
            soma = soma + mat[i][j];
            
        }
        media = soma/3;
        printf("Média do aluno %d: %.2f\n\n", i+1,media);
        
    }
    printf("\n\nNotas armazenadas:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%.2f\t", mat[i][j]);
            
        }
        printf("\n");
        
    }
    
}