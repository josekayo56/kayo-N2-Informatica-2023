#include <stdio.h>

int main()
{
    int j, n;

    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &n);
    }while(n < 1 || n > 10);

    for(j = 1; j <= 10; j++)
        printf("%d * %d = %d\n", n, j, n * j);

}
