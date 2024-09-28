/*Escreva um programa em C que mostre ao usuário um menu com 4 opções de operações
matemáticas, as mais básicas, peça dois valores numéricos, realize o cálculo, e mostre o
resultado na tela.
• Use a estrutura ESCOLHA... CASO para o condicional.
• Lembre-se que divisão por zero não é possível.
    Nome: Vinicius Grzyb Oliveira
    data: 02/09/2024
*/

#include<stdio.h>

int main(){
    int n1, n2;
    char op;

    printf("Escolha a operação: \n A para adição \n S para subtração \n M para múltiplicação \n D para divisão\n");
    scanf("%c", &op);
    printf("\nDigite o valor do número 1: ");
    scanf("%d", &n1);
    printf("Digite o valor do número 2: ");
    scanf("%d", &n2);

    if((n1 <= 0) || (n2 <= 0) && (op == 'D')){
        printf("operação inválida!\n");
    }else{
        switch(op){
        case 'A': printf("\nResultado: %d\n", n1 + n2); break;
        case 'S': printf("\nResultado: %d\n", n1 - n2); break;
        case 'M': printf("\nResultado: %d\n", n1 * n2); break;
        case 'D': printf("\nResultado: %d\n", n1 / n2); break;
        default: printf("\nOperação inválida!\n");
        }
    }
}