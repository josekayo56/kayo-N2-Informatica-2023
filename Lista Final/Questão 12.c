#include <stdio.h>

int main()
{
    float result;
    int oper, n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Selecione a operação:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &oper);
    switch (oper) {
        case 1:
            result = n1 + n2;
            printf("Resultado: %.2f\n", result);
            break;
        case 2:
            result = n1 - n2;
            printf("Resultado: %.2f\n", result);
            break;
        case 3:
            result = n1 * n2;
            printf("Resultado: %.2f\n", result);
            break;
        case 4:
            if (n2 != 0) {
                result = n1 / n2;
                printf("Resultado: %.2f\n", result);
            } else {
                printf("Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }
    return 0;
}
