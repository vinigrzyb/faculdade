/*Escreva um programa que mostre na tela uma contagem regressiva de 10 até 0 para o
lançamento de um foguete.
Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!".
    NOME: Vinicius Grzyb Oliveira
    data: 18/09/2024
*/

#include<stdio.h>

int main(){
    int i;
    for(i = 10; i >= 0; i--){
        printf("%d\n",i);
    }
    printf("Fogo!\n");
}