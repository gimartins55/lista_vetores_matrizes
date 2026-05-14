#include<stdio.h>

void main(){
	float altura, peso, IMC;
	char nome[50];
	
	printf("Informe o seu nome:\n");
	scanf("%s", &nome);
	printf("Informe seu peso:\n");
	scanf("%f", &peso);
	printf("Informe a sua altura:\n");
	scanf("%f", &altura);
	
	IMC =  peso / (altura * altura);
	
	if(IMC < 15.5){
		printf("Abaixo do peso");
	}else if(IMC >= 18.6 && IMC <= 24.9){
		printf("Peso normal");
	}else if(IMC >= 25 && IMC <= 29.9){
		printf("Sobrepeso");
	}else if(IMC >= 30 && IMC <= 34.9){
		printf("Obesidade grau I");
	}else if(IMC >= 35 && IMC <= 39.9){
		printf("Obesidade grau II");
	}else{
		printf("Obesidade grau  III");
	}
	
	getch();	
}