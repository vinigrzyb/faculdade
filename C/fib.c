/* Sequência de fibonacci
O valor da variável n define quantas vezes a fórmula vai ser repetidda.
Para exibir apenas o valor da última repetição, comente a linha 17 e descomente a linha 21.
*/

#include <stdio.h>

int main(){
    unsigned long long int a = 1, b = 0, c;
    int n;

    printf("número: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        c = a + b;
        printf("%llu\n", c);
        a = b;
        b = c;
    }
    //printf("%llu\n", c);
}