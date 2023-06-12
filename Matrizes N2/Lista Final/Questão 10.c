#include <stdio.h>

int main()
{
    int nd;
    printf("Digite um decimal: ");
    scanf("%d", &nd);
    printf("Número em hexadecimal:\t%X\n", nd);
    printf("Número em octadecimal:\t%o\n", nd);
    return 0;
}
