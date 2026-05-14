#include<stdio.h>

void main(){
	float peso, excesso = 0, multa = 0;
	
	printf("Digite o peso dos peixes (kg):\n");
	scanf("%f", &peso);
	
	excesso = peso - 50;
	multa = excesso * 4;
	
	if(peso > 50){
		printf("Excesso: %.2f kg\n", excesso);
		printf("Multa: R$%.2f\n", multa);
	} else{
		
		printf("Não houve excesso\n");
		printf("Multa: R$%.2f\n");
	}
	
	getch();
	
}