/*
• Escreva um algoritmo em fluxograma que leia a distancia em Km e a quantidade de litros de
gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e apresente
uma mensagem de acordo com a tabela abaixo:
• Em seguida, transcreva para pseudocódigo Portugol.
• Depois, transcreva para a linguagem C
    Autor: Vinicius Grzyb Oliveira
    Data: 04/09/2024

--------------------------------------------------------------------------------------------

ALGORITIMO economia_carro

VAR
	REAL: km, litros, autonomia;
	
INICIO

	ESCREVA("Quantos quilometros foram rodados: ");
	LEIA(km);
	ESCREVA("Quantos litros foram usados: ");
	LEIA(litros);
	
	autonomia <- (km / litros);
	
	SE (automia > 14) ENTAO
		ESCREVA("Super Economico!);
	SENAO SE (autonomia < 8) ENTAO
		ESCREVA("Venda o carro!)
	SENAO
		ESCREVA("Economico!");
FIM_SE

FIMALGORITIMO

*/

#include<stdio.h>

int main(){
    int km, litros, autonomia;

    printf("Programa de autonomia de carros :)\n");
    printf("Quilômetros rodados: ");
    scanf("%d", &km);
    printf("Litros consumidos: ");
    scanf("%d", &litros);

    autonomia = km/litros;

    if(autonomia > 14){
        printf("super econômico!");
    }else if(autonomia < 8){
        printf("Venda o carro!");
    }else{
        printf("Econômico!");
    }

    return 0;
}   