#include<stdio.h>

int main(){
    int n[5] = {10, 11, 22, 15, 89};
    int nPar = 0, nImpar = 0;

    int nLength = sizeof(n) / sizeof(n[0]);
    printf("Tamanho do array: %d", nLength);
    
    for(int i = 0; i < nLength; i++){
        printf("%d", n[i]);
        if(n[i] % 2 = 0){
            printf("%d", n[i]);
        }
    }
    return 0; 
}