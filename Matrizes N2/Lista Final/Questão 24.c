#include <stdio.h>

int main()
{
    char tc;
    int dr;
    float ce;
    printf("Digite qual o tipo do carro (A, B ou C):\t");
    scanf(" %c", &tc);
    printf("Digite qual a distância rodada em km:\t");
    scanf("%d", &dr);

    switch (tc){
        case 'A':
            ce = dr / 8.0;
            break;
        case 'B':
            ce = dr / 9.0;
            break;
        case 'C':
            ce = dr / 12.0;
            break;
        default:
            printf("Seu tipo de carro inválido!\n");
            return 0;
    }
    printf("O consumo estimado é %.2f litros!\n", ce);

    return 0;
}
