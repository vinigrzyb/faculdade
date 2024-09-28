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
    int vNelson, vCarlos, vNeves;
    int voto, nulos, brancos, vencedor;
    float pNulos, pBrancos;

    do{
        printf("Vote (0 para mostrar resultado)\n[1] Candidato Nelson Rodrigues\n[2] Candidato Carlos Luz\n[3] Candidato Neves Rocha\n[4] Nulo\n[5] Branco\nEntre com o seu voto:");
        scanf("%d", &voto);
        if(voto > 0){
            
        }
    }while(voto != 0);
}