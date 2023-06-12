#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    float s, p, q1, rq, sn;
    printf("Digite seu primeiro número: ");
    scanf("%d", &n1);
    printf("Digite seu segundo número: ");
    scanf("%d", &n2);

    s = n1 + n2;
    p = n1 * pow(n2, 2);
    q1 = pow(n1, 2);
    rq = sqrt(pow(n1, 2) + pow(n2, 2));
    sn = sin(n1 - n2);
    printf("\n\nSoma dos números: %.2f\n", s);
    printf("\nProduto do primeiro número pelo quadrado do segundo: %.2f\n", p);
    printf("\nQuadrado do primeiro número: %.2f\n", q1);
    printf("\nRaiz quadrada da soma dos quadrados: %.2f\n", rq);
    printf("\nSeno da diferença do primeiro número pelo segundo: %.2f\n", sn);
    return 0;
}
