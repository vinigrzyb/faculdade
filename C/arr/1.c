#include<stdio.h>

int main(){
    // Escreva um programa que leia 5 números inteiros do teclado, armazene em um vetor, e
    // apresente na tela o vetor em ordem inversa
    printf("\n1.\n");

    int arr1[5];

    for(int i = 0; i < 5; i++){
        printf("numero %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for(int i = 4; i >= 0; i--){
        printf("%d", arr1[i]);
    }
    printf("\n");

    // Escreva um programa que inicialize um vetor com 10 números e apresente na tela apenas os
    // valores ímpares que aparecem no vetor
    printf("\n2.\n");

    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++){
        if(arr2[i] %2 != 0){
            printf("%d", arr2[i]);
        }
    }
    printf("\n");
}