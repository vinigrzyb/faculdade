/*
Escreva um programa que simule a urna eletrônica.
A tela a ser apresentada deverá ser da seguinte forma:
As opções são:
[1] Candidato Nelson Rodrigues
[2] Candidato Carlos Luz
[3] Candidato Neves Rocha
[4] Nulo
[5] Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando for informado o número 0, apresentar
as seguintes informações:
a) O número de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor
*/

#include<stdio.h>

int main(){
    int vNelson=0, vCarlos=0, vNeves=0;
    int voto, nulos, brancos, totalVotos;
    float pNulos, pBrancos;
    char vencedor[16];

    printf("Vote (0 para mostrar resultado)\n[1] Candidato Nelson Rodrigues\n[2] Candidato Carlos Luz\n[3] Candidato Neves Rocha\n[4] Nulo\n[5] Branco\n");
    do{
        printf("Entre com o seu voto: ");
        scanf("%d", &voto);
        if(voto <= 5){
            switch(voto){
                case 1: vNelson++; break;
                case 2: vCarlos++; break;
                case 3: vNeves++; break;
                case 4: nulos++; break;
                case 5: brancos++; break;
            }
        }else if(voto > 5){
            printf("Número inválido!\n");
        }
        totalVotos++;
    }while(voto != 0);

    if((vNelson > vCarlos) && (vNelson > vNeves)){
        char vencedor[] = {"Nelson Rodrigues"};
    }else if((vCarlos > vNelson) && (vCarlos > vNeves)){
        char vencedor[] = {"Carlos Luz"};
    }else{
        char vencedor[] = {"Neves Rocha"};
    }

    pNulos = (nulos / (float)totalVotos) * 100;
    pBrancos = (brancos / (float)totalVotos) * 100;

    printf("\nVotos Nelson: %d \nVotos Carlos: %d\nVotos Neves: %d\n", vNelson, vCarlos, vNeves);
    printf("Porcentragem de votos nulos: %.f%%\nPorcentagem de votos brancos: %.f%%", pNulos, pBrancos);
    printf("\nCandidato vencedor: %s\n", vencedor);
}