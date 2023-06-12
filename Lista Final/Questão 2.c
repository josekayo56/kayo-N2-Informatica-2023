#include <stdio.h>

int main()
{
    int n, nj, nn;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    nj = n - 1;
    printf("\nO antecessor de %d e: %d", n, nj);
    
    nn = n + 1;
    printf("\nO sucessor de %d e: %d", n, nn);
    return 0;
}
