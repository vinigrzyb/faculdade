/*Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadrado
daquele tamanho com asteriscos. O programa deve funcionar para quadrados com lados de
todos os tamanhos entre 1 e 20.
    NOME: Vinicius Grzyb Oliveira
    DATA: 18/09/2024
*/

#include<stdio.h>

int main(){
    int n, col, lin;

    printf("informe o tamanho do lado do quadrado: ");
    scanf("%d", &n);

    for(col = 1; col <= n; col++){
        for(lin = 1; lin <= n; lin++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}