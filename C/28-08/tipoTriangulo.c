/*
• Faça um programa que leia três valores A, B e C, e verifique se estes valores podem ser os
comprimentos dos lados de um triângulo e, se forem, verificar se estes compõem um triângulo
equilátero, isósceles ou escaleno.
• O programa também deve informar se não compuserem nenhum triângulo.
• Lembre-se ainda que:
• O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros
dois lados;
• Chama-se de triângulo equilátero ao triângulo que tem os comprimentos dos três lados iguais;
• Chama-se de triângulo isósceles ao triângulo que tem os comprimentos de dois lados iguais. Portanto,
todo triângulo equilátero é também um triângulo isósceles;
• Chama-se de triângulo escaleno todo triângulo que tem os comprimentos de seus três lados
diferentes.
*/

#include<stdio.h>

int main(){
    float l1, l2, l3;

    printf("PROGRAMA PARA CALCULAR O TIPO DO TRIÂNGULO\n");
    printf("lado 1 do triângulo: ");
    scanf("%f", &l1);
    printf("lado 2 do triângulo:");
    scanf("%f", &l2);
    printf("Lado 3 do triângulo: ");
    scanf("%f", &l3);

    if((l1 < l2 + l3) && (l2 < l1 + l3) && l3 < l1 + l2){
        if((l1 == l2) && (l2 == l3)){
        printf("\nEQUILÁTERO\n");
    }else if((l1 == l2) || (l1 == l3) || (l2 == l3)){
        printf("\nISÓSELES\n");
    }else{
        printf("\nESCALENO\n");
    }
    }else{
        printf("\nNAO E TRIANGULO!!!");
    }
    return 0;
}