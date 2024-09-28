/*Um posto está vendendo combustíveis com a seguinte tabela de descontos

            ATÉ 20 LITROS                   ACIMA DE 20 LITROS
Álcool      Desconto de 5% por litro        Desconto de 10% por litro
Gasolina    Desconto de 7.5% por litro      Desconto de 15% por litro

Escreva um programam em C que leia a quantidade de litros abastecidos, o tipo de combustível
(codificado com 1 para álcool e 2 para gasolina), o preço do litro do combustível e apresente o
valor sem desconto, o valor do desconto e o valor a ser pago pelo cliente
    Nome: Vinicius Grzyb Oliveira
    Data: 02/09/2024
*/

#include<stdio.h>

int main(){
    int tipo;
    float quantidade, preco, desconto, totalSD, totalCD;

    printf("Calculadora de desconto de combustíveis");
    printf("\n\nInforme o tipio de combustível:");
    printf("\n(1 = Gasolina, 2 = Álcool)\n");
    scanf("%d", &tipo);

    printf("\nInforme a Quantidade de combustível em litros: ");
    scanf("%f", &quantidade);

    printf("\n Informe o preço do litro em r$: ");
    scanf("%f", &preco);

    totalSD = quantidade * preco;

    if(quantidade <= 20){
        if(tipo == 1){
            desconto = totalSD * 0.05;
        }else if(tipo == 2){
            desconto = totalSD * 0.075;
        }else{
            printf("\nTipo de combustível não reconhecido!");
        }
    }else{
        if(tipo == 1){
            desconto = totalSD * 0.1;
        }else if(tipo == 2){
            desconto = totalSD * 0.15;
        }else{
            printf("\nTipo de combustível não reconhecido!");
        }
    }

    totalCD = totalSD - desconto;

    printf("\n\n O valor sem desconto é: %.1f", totalSD);
    printf("\nO valor do desconto é: %.1f", desconto);
    printf("\nO valor a ser pago é: %.1f\n", totalCD);

    return 0;
}
