#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 10 == 0){
        printf("Seu número é divisível por 10!\n");
    } 
        else if (n % 5 == 0){
            printf("Seu número é divisível por 5!\n");
        } 
        else if (n % 2 == 0){
            printf("Seu número é divisível por 2!\n");
    } 
        else{
            printf("Seu número não é divisível por 2, 5 e 10!\n");
        }
    return 0;
}
