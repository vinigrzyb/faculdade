/*Faça um programa que leia o peso de um boxeador e informe a categoria a qual o boxeador
pertence conforme a tabela a seguir:

palha: menor de 50kg
pluma: 50 a 59.99kg
leve: 60 a 75.99kg
pesado: 76 a 87.99kg
super pesado: maior ou igual a 88
*/

#include<stdio.h>

int main(){
    float peso;

    printf("digite o peso em kg: ");
    scanf("%f", &peso);

    if(peso < 50){
        printf("Peso palha!\n");
    }else if((peso >= 50) && (peso < 59.99)){
        printf("Peso pluma!\n");
    }else if((peso >= 60) && (peso < 75.99)){
        printf("Peso leve!\n");
    }else if((peso >= 76) && (peso < 87.99)){
        printf("Peso pesado!\n");
    }else{
        printf("Peso muito pesado!\n");
    }
}