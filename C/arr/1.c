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

    // // Escreva um programa que inicialize um vetor com 10 números inteiros e apresente na tela o
    // // menor valor, o maior valor, a soma dos valores e a média dos valores do vetor.
    printf("\n3.\n");

    int arr3[10] = {7, 14, 6, 31, 2, 3, 9, 25, 10, 100};
    int menor = arr3[0];
    int maior = arr3[0];
    int soma;
    float media;
    
    for(int i = 0; i < 10; i++){
        soma = soma + arr3[i];
        if(arr3[i] < menor){
            menor = arr3[i];
        }else if(arr3[i] > maior){
            maior = arr3[i];
        }
    }
    media = soma / (float)10;

    printf("Menor número: %d\nMaior número: %d\nSoma dos números: %d\nMédia dos números: %.1f", menor, maior, soma, media);

    // Escreva um programa que inicialize um vetor de 10 números inteiros distintos.
    // Em seguida, leia um número qualquer do teclado e apresente na tela o índice em que o número
    // se encontra no vetor, ou então a mensagem "Não encontrado", se o número não estiver
    // presente no vetor.
    printf("\n4.\n");

    int arr4[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n, encontrado = 0;

    printf("Insira o número: ");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++){
        if(arr4[i] == n){
            printf("Indice do numero %d: %d\n", n, i);
            encontrado = 1;
            break;
        }
    }
    if(encontrado == 0){
        printf("Numero nao encontrado\n");
    }

    // Escreva um programa que leia 10 números do teclado, armazene em vetor, e calcule a média
    // destes valores. Na sequência, apresente na tela o valor médio dos números e todos os números
    // do vetor que são maiores ou iguais à média e seus respectivos índices .
    // ATIVIDADES
    printf("\n5.\n");

    int arr5[10];
    int total = 0;
    float media5;

    for(int i = 0; i < 10; i++){
        printf("Número %d: ", i+1);
        scanf("%d", &arr5[i]);
    }
    for(int i = 0; i < 10; i++){
        total = total + arr5[i];
    }

    media5 = total / (float)10;
    printf("\nMedia dos numeros: %.1f\n", media5);

    printf("Numeros maiores ou iguais a media:\n");
    for(int i = 0; i < 10; i++){
        if(arr5[i] >= media5){
            printf("numero: %d, indice: %d\n", arr5[i], i);
        }
    }

    return 0;
}
