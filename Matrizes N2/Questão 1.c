#include <stdio.h>

int main()
{
    int matriz[3][3], i, j;
    printf("Der valores para matrizes:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Elementos[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nSaida de dados:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
