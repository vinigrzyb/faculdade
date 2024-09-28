/*
1. Escreva um algoritmo em pseudocódigo que leia a idade de um grupo de pessoas até ler o
valor 0 (zero), que não deve ser considerado, calcule e apresente:
• a quantidade de idades lidas; 
• a média das idades lidas;
• a quantidade de idades maiores de 18 anos; 
• a maior idade lida; e 
• a menor idade lida. 
Em seguida, transcreva para a linguagem C

--------------------------------------------------------------------------------------

ALGORITIMO idade
*/

#include<stdio.h>

int main(){
    int idade, contI, contIMaior18, somaI, mediaI, maiorI, menorI;
    float percent18;

    contI = 0;
    contIMaior18 = 0;
    somaI = 0;

    do{
        printf("\nInsira a idade: ");
        scanf("%d", &idade);
        if(idade > 0){
            contI++;
            if(contI == 1){
            maiorI = idade;
            menorI = idade;
            }
            if(maiorI < idade){
                maiorI = idade;
            }
            if(menorI > idade){
                menorI = idade;
            }
            if(idade > 18){
                contIMaior18++;
            }
        }
        somaI = somaI + idade;
        mediaI = somaI / contI;
    }while(idade != 0);
    
    percent18 = (contIMaior18 / (float)contI) * 100;

    printf("\nQuantidade de idades: %d", contI);
    printf("\nMédia das idades lidas: %d", mediaI);
    printf("\nQuantidade de idades maiores de 18 anos: %d", contIMaior18);
    printf("\nMaior idade: %d", maiorI);
    printf("\nMenor idade: %d", menorI);
    printf("\nporcentagem de idades maior de 18: %.0f%% \n", percent18);
    return 0;
}