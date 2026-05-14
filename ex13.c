#include<stdio.h>
#include<stdlib.h>

void main(){
    int numeros[10], maior, menor;
    for(int i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    menor = numeros[0];
    for(int i=1; i<10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }

        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
}