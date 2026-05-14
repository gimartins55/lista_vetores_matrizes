#include<stdio.h>
#include<windows.h>
void main(){
	//laço
	SetConsoleOutputCP(CP_UTF8);  
	float total=0, qnt=0, preco, desconto;
	int resp;
	
	do{
	printf("Informe o valor do produto:\n");
	scanf("%f", &preco);
	printf("Informe a quantidade:\n");
	scanf("%f", &qnt);
	
	total = total + (preco * qnt);
	
	printf("Mais algum produto? (sim = 1 / não = 0)\n");
	scanf("%d", &resp);
	
	}while(resp == 1);
	printf("Total da compra: R$%.2f\n", total);
	printf("Informe a porcentagem de desconto:\n");
	scanf("%f", &desconto);
	
	desconto = total * desconto / 100;
	total = total - desconto; 
	
	printf("O desconto é R$%.2f, preço final: R$%.2f", desconto, total);
	
}