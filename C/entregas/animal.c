/*
� Considerando a tabela ao lado, fa�a um
programa que seja capaz de concluir qual dos
animais ser� escolhido, por interm�dio de
perguntas e respostas.
� Animais poss�veis: on�a, boi, porco, homem,
mico le�o, morcego, golfinho, avestruz,
pinguim, pato, condor, jabuti, jacar� e sucuri
	Nome: Vinicius Grzyb Oliveira
	data: 07/09/2024
*/

#include<stdio.h>

int main(){
	int cat1, cat2, cat3;
	
	printf("\nEscolha uma categoria");
	printf("\n[1]mamifero \n[2]ave \n[3]reptil\n");
	scanf("%d", &cat1);
	
	switch(cat1){
		case 1: 
		printf("\nEscolha uma categoria \n[1]quadrupede \n[2]bipede \n[3]voador \n[4]aquatico\n");
		scanf("%d", &cat2);
		switch(cat2){
			case 1:
				printf("Escolha uma categoria \n[1]carnivoro \n[2]herbivoro \n[3]onivoro\n");
				scanf("%d", &cat3);
			switch(cat3){
					case 1: printf("O animal �: ONCA"); break;
					case 2: printf("O animal �: BOI"); break;
					case 3: printf("O animal �: PORCO") break;
					default: printf("Escolha invalida!");
			}
			break;
			case 2:
				printf("Escolha uma categoria \n[1]onivoro \n[2]frutifero");
				scanf("%d", cat3);
				switch(cat3){
					case 1: printf("O animal �: HUMANO"); break;
					case 2: printf("O animal �: ")
				}
		}
		break;
		case 2:
		printf("\nEscolha uma categoria \n[1]n�o voadora \n[2]nadadora \n[3]de rapina\n");
		scanf("%d", &cat2);
		break;
		case 3:
		printf("\nEscolha uma categoria \n[1]com casco \n[2]carnivoro \n[3]sem patas\n");
		scanf("%d", &cat2);
		break;
		default: printf("Escolha invalida!");
	}
	
	return  0;
}

