#include<stdio.h>
#include<stdlib.h>

void main(){
    int numeros[10], maior, menor;
    int posMaior, posMenor;

    for(int i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    menor = numeros[0];
    posMaior = 0;
    posMenor = 0;
    for(int i=1; i<10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
            posMaior = i;
        }

        if(numeros[i] < menor){
            menor = numeros[i];
            posMenor = i;
        }
    }
    printf("\nMaior: %d na posicao %d", maior, posMaior);
    printf("\nMenor: %d na posicao %d", menor, posMenor);
}