#include <stdio.h>
// #include <locale.h>

int main(){
    //parte 1
    // setlocale(LC_ALL, "portuguese");
    printf("Hello world");

    //parte 2
    double totalTime = 0.000000003295;
    printf("\n %.12f", totalTime);
    printf("\n %.3E", totalTime);
    
    //parte 3
    char letter = 'F';
    printf("\n %c", letter);
    printf("\n %d", letter);

    //parte 4
    printf("\nadd 15%%");
    printf("\n%s %d%c", "add", 15, '%');

    return 0;
}