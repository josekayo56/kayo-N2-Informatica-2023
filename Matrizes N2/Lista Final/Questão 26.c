#include <stdio.h>

int main()
{
    int t, j, n;
    printf("Diga o tamanho dos lados do quadrado(entre 1 e 20):\t");
    scanf("%d", &t);
    if (t >= 1 && t <= 20){
        for ( j = 0; j < t; j++) {
            for (n = 0; n < t; n++) {
                printf(" *");
            }
            printf("\n");
        }
    } 
        else{
            printf("O tamanho é inválido.\n");
        }
    return 0;
}
