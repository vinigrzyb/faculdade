// Um hospital local está fazendo uma campanha para receber doação de sangue.

// • O propenso doador deve inicialmente se cadastrar informando o seu primeiro nome, sua idade,
// seu peso, e responder a um breve questionário.

// • Faça um programa que permita ao hospital avaliar a aptidão de um voluntário quanto à doação
// de sangue.

// • Para estar apto a doar sangue, o voluntário deve ter idade entre 16 e 69 anos, pesar pelo
// menos 50 kg, estar bem alimentado e não estar resfriado.

// • O programa deve ler os dados e imprimir no final o nome do voluntário e se ele está apto ou
// não.

#include<stdio.h>

int main(){
    char nome[50];
    int idade, bemAlimentado, resfriado;
    float peso;

    printf("Nome: ");
    scanf("%s", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Peso (kg): ");
    scanf("%f", &peso);

    printf("Esta bem alimentado?\n[1]Sim\n[0]Nao\n");
    scanf("%d", &bemAlimentado);
    if(bemAlimentado < 0 || bemAlimentado > 1){
        printf("Resposta inválida, encerrando programa.\n");
        return 0;
    }
    
    printf("Esta resfriado?\n[1]Sim\n[0]Nao\n");
    scanf("%d", &resfriado);
    if(resfriado < 0 || resfriado > 1){
        printf("Resposta inválida, encerrando programa.\n");
        return 0;
    }

    if((idade >= 16) && (idade <= 69) && (peso >= 50) && (bemAlimentado == 1) && (resfriado == 0)){
        printf("\nO voluntário %s esta apto para doar sangue\n", nome);
    }else{
        printf("\nO voluntário %s não esta apto para doar sangue\n", nome);
    }

    return 0;
}