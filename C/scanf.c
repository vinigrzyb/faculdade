#include<stdio.h>
// COMANDO DE ENTRADA - scanf() - scan forma
// sintaxe: scanf("%tipo", &var)

int main() {
    int n1, n2, result;

    printf("número 1: ");
    scanf("%d", &n1);

    printf("número 2: ");
    scanf("%d", &n2);

    result = n1 + n2;

    printf("a soma dos número é %d\n", result);

    return 0;
}