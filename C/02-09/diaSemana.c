/*Escreva um algoritmo que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente
a este numero, ou seja, “domingo” se 1, “segunda-feira” se 2, e assim por diante.
• Apresente a mensagem “Número inválido!” caso o número digitado não seja inteiro entre 1 e 7.
• Use a estrutura ESCOLHA... CASO para o condicional.
• Em seguida, transcreva para a linguagem C.
    Autor: Vinicius Grzyb Oliveira
    Data: 02/09/2024
---------------------------------------------------------------------------------------------------

ALGORITOMO diaNumero

VAR
    INTEIRO: n;

INICIO
    ESCREVA("Digite o número");
    LEIA(dia);

    ESCOLHA(dia)
    CASO 1: ESCREVA("domingo");    
    CASO 2: ESCREVA("segunda");
    CASO 3: ESCREVA("terça");
    CASO 4: ESCREVA("quarta");
    CASO 5: ESCREVA("quinta");
    CASO 6: ESCREVA("sexta");
    CASO 7: ESCREVA("sabado");
    CASO_CONTRARIO: ESCREVA("número errado");
    FIM_ESCOLHA

FIMALGORITIMO
---------------------------------------------------------------------------------------------------
*/

#include<stdio.h>

int main(){
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){
        case 1: printf("domingo\n"); break;
        case 2: printf("segunda\n"); break;
        case 3: printf("terça\n"); break;
        case 4: printf("quarta\n"); break;
        case 5: printf("quinta\n"); break;
        case 6: printf("sexta\n"); break;
        case 7: printf("sabado\n"); break;
        default: printf("número inválido\n");
    }
}