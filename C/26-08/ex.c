/*  Criar um programa em C que leia dois números inteiros,
calcule a divisão do dividendo pelo divisor,
e apresente o resultado na tela.
Autor: Vinicius
Data: 26/08/2024

*/

#include<stdio.h>

int main(){
    int dividendo, divisor;
    float resultado;

    printf("Digite o número dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o número divisor: ");
    scanf("%d", &divisor);

    printf("dividendo: %d, \ndivisor: %d\n", dividendo, divisor);
              //casting: mudança de tipagem momentânea
    resultado = (float)dividendo / divisor;

    printf("O resultado é: %.1f \n", resultado);

    return 0;
}
