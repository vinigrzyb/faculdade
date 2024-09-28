/*Uma empresa decide dar um aumento aos seus funcion�rios de acordo com as tabelas
referenciais de �Sal�rio Atual� e �Tempo de Servi�o�

Sal�rio atual    reajuste         |  Tempo de servi�o   B�nus 
at� 500,00R$        25%           |  abaixo de 1 ano    sem b�nus 
at� 1000,00R$		20%           |  de 1 a 3 anos      100,00R$
at�	1500,00R$ 		15%	     	  |  de 4 a 6 anos	    200,00R$
at�	2000,00R$		10%           |  de 7 a 10 anos     300,00R$
acima de 2000,00R$  Sem reajuste  |  mais de 10 anos    500,00R$

Considerando as referidas tabelas, escreva um algoritmo em pseudoc�digo que leia o valor do
salario atual e o tempo de servi�o de um funcion�rio na empresa, calcule e apresente na tela o
valor do reajuste, do b�nus e do novo salario do funcion�rio.

Em seguida, transcreva o programa para a linguagem C.

	Nome Vinicius Grzyb Oliveira
	Data: 05/09/2024
	
-----------------------------------------------------------------------------------------------

ALGORITIMO aumentoSalario;

VAR
	REAL: salarioAtual, tempoServico, reajuste, bonus, novoSalario; 

INICIO
	ESCREAVA("Digite o sal�rio atual: ");
	LEIA(salarioAtual)
	
	ESCREVA("Digite os anos de servi�o do funcion�rio: ");
	LEIA(tempoServico);
	
	SE(salarioAtual <= 500) ENT�O
		reajuste <- salarioAtual * 0.25;
	SEN�O SE(salarioAtual <= 100) ENT�O
		reajuste <- salarioAtual * 0.20; 
	SEN�O SE(salarioAtual <= 1500) ENT�O
		reajuste <- salarioAtual * 0.15;
	SEN�O SE(salarioAtual <= 2000) ENT�O
		reajuste <- salarioAtual * 0.10; 
	SEN�O
		reajuste <= 0;
	FIM_SE
	
	SE(tempoServico < 1) ENT�O
		bonus <- 0;
	SEN�O SE(tempoServico <= 3) ENT�O
		bonus <- 100,00;
	SEN�O SE(tempoServico <= 6) ENT�O
		bonus <- 200,00;
	SEN�O SE(tempoServico <= 10) ENT�O
		bonus <- 300,00;
	SEN�O
		bonus <- 500,00;
	SIM_SE
	
	novoSalario <- salarioAtual + reajuste + bonus;
	
	ESCREVA("Valor do reajuste: ", reajuste);
	ESCREVA("Valor do b�nus: ", bonus);
	ESCREVA("Valor do novo sal�rio: ", novoSalario")
	
FIM_ALGORITIMO

*/

#include <stdio.h>

int main(){
	float salarioAtual, tempoServico, reajuste, bonus, novoSalario;
	
	printf("Calculo de novo salario");
	printf("\nDigite o valor do salario atual: R$")lear
	;
	scanf("%f", &salarioAtual);
	printf("\nDigite os anos de servico do funcionario: ");
	scanf("%g", &tempoServico);
	
	if(salarioAtual <= 500){
		reajuste = salarioAtual * 0.25;
	}else if(salarioAtual <= 1000){
		reajuste = salarioAtual * 0.20;
	}else if(salarioAtual <= 1500){
		reajuste = salarioAtual * 0.15;
	}else if(salarioAtual <= 2000){
		reajuste = salarioAtual * 0.10;
	}else{
		reajuste = 0;
	}

	if(tempoServico < 1){
		bonus = 0;
	}else if(tempoServico <= 3){
		bonus = 100.00;
	}else if(tempoServico <= 6){
		bonus = 200.00;
	}else if(tempoServico <= 10){
		bonus = 300.00;
	}else{
		bonus = 500.00;
	}

	novoSalario = salarioAtual + reajuste + bonus;

	printf("\nValor do reajuste: R$%.2f", reajuste);
	printf("\nValor do bonus: R$%.2f", bonus);
	printf("\nValor do novo salario: R$%.2f", novoSalario);

	return 0;
}
