#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][3], i, j, soma;
    printf("Der valores para matrizes:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Elementos[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nSaida de dados:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }
    printf("\nSoma total: %d\n", soma);
    return 0;
}
