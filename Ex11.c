#include<stdio.h>
#include<stdlib.h>

void main(){
    int numeros[10], aux;

    for(int i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(numeros[i] > numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("\nOrdem crescente:\n");
    for(int i=0; i<10; i++){
        printf("%d\n", numeros[i]);
    }
}