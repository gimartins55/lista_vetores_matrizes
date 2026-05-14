#include<stdio.h>
#include<stdlib.h>

void main(){
    float matriz[3][3];

    // Inserir elementos
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite um numero para [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Mostrar em ordem inversa
    printf("\nElementos em ordem inversa:\n");
    for(int i=2; i>=0; i--){
        for(int j=2; j>=0; j--){
            printf("%.2f\n", matriz[i][j]);
        }
    }
}