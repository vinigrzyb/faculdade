/*
ATIVIDADE APOSENTADORIA
Nome: Vinicius Grzyb Oliveira
Data: 09/09/2024

------------------------------------------------------

ALGORITIMO aposentadoria

VAR
	INTEIRO idade, sexo, tempoServico;

INICIO

	ESCREVA("Informe a idade: ");
	LEIA(idade);
	
	ESCREVA("Informe o sexo: (1 para masculino, 2 para feminino)");
	LEIA(sexo);
	
	ESCREVA("Informe os anos de servico: ");
	LEIA(tempoServico);
	
	SE((idade < 0) E (idade > 120)) ENTAO
		ESCREVA("Dado inválido! O programa será encerrado");
	SENAO SE((sexo < 1) OU (sexo 2)) ENTAO
		ESCREVA("Dado inválido! O programa será encerrado");
	SENAO SE((tempoServico < 0) E (tempoServico > 90)) ENTAO
		ESCREVA("Dado inválido! O programa será encerrado");
	SENAO SE((idade >= 63) E (sexo = 1)) ENTAO
		ESCREVA("Pode aposentar");
	SENAO SE((idade >= 58) E (sexo = 2)) ENTAO
		ESCREVA("Pode aposentar");
	SENAO SE ((idade >= 50) E (tempoServico <= 26)) ENTAO
		ESCREVA("Pode aposentar");
	SENAO SE(tempoServico >= 40) ENTAO
		ESCREVA("Pode aposentar");
	SENAO
		ESCREVA("Dado inválido! O programa será encerrado");
	FIM_SE
	
FIMALGORITIMO
*/

#include<stdio.h>

int main(){
	int idade, sexo, tempoServico;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("\nIforme o sexo: \n[1]masculino \n[2]feminino\n");
	scanf("%d", &sexo);
	
	printf("informe os anos de servico: ");
	scanf("%d", &tempoServico);
	
	if((idade < 0) || (idade > 120)){
		printf("Dado inválido! O programa será encerrado");
	}else if((sexo < 1) || (sexo > 2)){
		printf("Dado inválido! O programa será encerrado");
	}else if((tempoServico < 0) && (tempoServico > 90)){
		printf("Dado inválido! O programa será encerrado");
	}else if((idade >= 63) && (sexo = 1)){
		printf("Pode aposentar");
	}else if((idade >= 58) && (sexo = 2)){
		printf("Pode aposentar");
	}else if((idade >= 50) && (tempoServico <= 26)){
		printf("Pode aposentar");
	}else if(tempoServico >= 40){
		printf("Pode aposentar");
	}else{
		printf("Não pode aposentar");
	}
	
	return 0;	
}


