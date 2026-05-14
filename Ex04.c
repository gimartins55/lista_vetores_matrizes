#include<stdio.h>
void main(){
	float valorHora, horasTrabalhadas, salarioBruto, ir , inss, sindicato, salarioLiquido;
	
	printf("Informe quando voce ganha por hora:\n");
	scanf("%f", &valorHora);+
	
	printf("Informe o numero de horas trabalhadas no mes:\n");
	scanf("%f", &horasTrabalhadas);
	
	salarioBruto = valorHora * horasTrabalhadas;
	ir = salarioBruto * 11 / 100;
	inss = salarioBruto * 8 / 100;
	sindicato = salarioBruto * 5 / 100;
	salarioLiquido = salarioBruto - ir - inss - sindicato;
	
	printf("+ Salario Bruto: R$%.2f \n", salarioBruto);
	printf("- IR: R$%.2f \n", ir);
	printf("- INSS: R$%.2f \n", inss);
	printf("- Sindicato: R$%.2f \n", sindicato);
	printf("= Salario Liquido: R$%.2f \n", salarioLiquido);
	

}