/*Escreva um algoritmo em Portugol que receba um número inteiro e verifique se este número é
par ou ímpar.
Em seguida, transcreva para a linguagem C.

############
# PORTUGOL #
############

ALGORITIMO imparPar

VAR
    INTEIRO: n;

INICIO
    ESCREVA("Digite o número: ");
    LEIA(numero);
    
    SE(MOD(n, 2) = 0) ENTÂO
        ESCREVA("O número é par");
    SENÂO
        ESCREVA("O número é impar")
    FIM_SE
FIMALGORITIMO

#####
# C #
#####
*/

#include<stdio.h>

int main(){
    int n;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    if(n % 2 == 0){
        printf("\nO número é par\n");
    }else{
        printf("\nO número é impar\n");
    }
}
