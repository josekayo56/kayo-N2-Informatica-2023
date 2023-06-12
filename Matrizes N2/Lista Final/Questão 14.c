#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número inteiro:\t");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("Número é par!\n");
    } 
        else {
            printf("Número é ímpar!\n");
        }
    return 0;
}

