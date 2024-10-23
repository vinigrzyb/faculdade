#include<stdio.h>

int main(){
    float vendas[5][3] = {
        210.50, 69.99, 804.00,
        210.50, 69.99, 804.00,
        210.50, 69.99, 804.00,
        210.50, 69.99, 804.00,
        210.50, 69.99, 804.00
    };
    char func[5][50] = {
        "Fabricio De Oliveira",
        "Fernando Dos Santos",
        "Felipe Barbosa",
        "Gabriel Henrique",
        "Rogério iago"
    };
    float soma, media;

    for(int i = 0; i < 5; i++){ //linhas das estruturas de dados
        printf("\n\nVendas do funcionário %s", func[i]);
        for(int j = 0; j < 3; j++){
            printf("\nVenda[%d]: %.2f", j+1, vendas[i][j]);
            soma += vendas[i][j];
        }
        media = soma / 3;
        printf("\nSoma total das vendas: %.2f", soma);
        printf("\nMedia das vendas: %.2f", media);
        soma = 0;
        media = 0;
    }
    return 0;
}