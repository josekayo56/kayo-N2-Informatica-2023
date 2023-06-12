#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4], i, j, soma;
    printf("Der valores para matrizes:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Elementos[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nSaida de dados:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }
    printf("\n\nDiagonal principal: ");
    for(i = 0; i < 4; i++){
        printf("%d ", matriz[i][i]);
    }
    return 0;
}
