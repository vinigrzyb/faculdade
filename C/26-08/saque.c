/* Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendo
que estarão disponíveis cédulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menor
quantidade de cédulas possível de acordo com o saque.
Exemplos:
• Saque de 400,00: 4 cédulas de 100.
• Saque de 350,00: 3 cédulas de 100 e 1 cédula de 50.
• Saque de 385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5.
*/

#include<stdio.h>

int main(){
    int valorSaque, c100, c50, c20, c10, c5, resto;
    printf("Informe o valor do saque: ");
    scanf("%d", &valorSaque);

    c100 = valorSaque / 100;
    resto = valorSaque % 100;
    c50 = resto / 50;
    resto = resto % 50;
    c20 = resto / 20;
    resto = resto % 20;
    c10 = resto / 10;
    resto = resto % 10;
    c5 = resto / 5;
    resto = resto % 5;

    int notas[] = {0, 1, 2, 3, 4};
    notas[0] = c100;
    notas[1] = c50;
    notas[2] = c20;
    notas[3] = c10;
    notas[4] = c5;
    int notasLength = sizeof(notas) / sizeof(notas[0]);
    
    int notasNome[] = {100, 50, 20, 10, 5};

    if(resto < 5, resto > 0){
        printf("Saque indisponivel\n");
    }else{
        for(int i = 0; i <= notasLength; i++){
            int notaAtual = notas[i];
            int nomeAtual = notasNome[i];
            if(notaAtual >= 1){
                printf("Notas de %d: %d \n", notasNome[i], notas[i]);
            }
        }
    }
    return 0;
}