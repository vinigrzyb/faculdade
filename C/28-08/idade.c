/*Faça um programa em C que, dada a idade de uma pessoa, determine sua classificação como
menor de idade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior
a 65 anos)
*/

#include<stdio.h>

int main(){
    int idade;

    printf("digite sua idade em anos: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("menor de idade!\n");
    }else if((idade >= 18) && (idade < 65)){
        printf("Maior de idade!\n");
    }else{
        printf("Terceira idade!\n");
    }
}