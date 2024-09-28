#include<stdio.h>

//declaração das contantes
#define ICMS 0.18

int main(){
    float valorProduto, valorICMS, valorTotal;

    printf("informe o valor do produto: ");
    scanf("%f", &valorProduto);

    valorICMS = valorProduto * ICMS;
    valorTotal = valorProduto + valorICMS;

    printf("valor total do produto com ICMS: %.f", valorTotal);

    return 0;
}