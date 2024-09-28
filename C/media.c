/*

*/

#include<stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    float notas[] = {nota1, nota2, nota3, nota4};

    printf("Digite o valor da nota 1: ");
    scanf("%f", &nota1);
    printf("Digite o valor da nota 2: ");
    scanf("%f", &nota2);
    printf("Digite o valor da nota 3: ");
    scanf("%f", &nota3);
    printf("Digite o valor da nota 4: ");
    scanf("%f", &nota4);

    float notaslength = sizeof(notas)/sizeof(notas[0]);
    media = (nota1 + nota2 + nota3 + nota4) / notaslength;

    printf("%s%.1f\n", "A média das notas é ", media);
}