#include <stdio.h>

int main()
{
    int vha, na, 
    float pINSS, sb, sl;
    printf("Valor da hora-aula: ");
    scanf("%f", &vha);
    printf("Número de aulas dadas: ");
    scanf("%f", &na);
    printf("Percentual de desconto do INSS: ");
    scanf("%f", &pINSS);

    sb = vha * na;
    sl = sb - (sb * pINSS / 100);

    printf("Seu salário Líquido é: R$ %.2f\n", sl);
    return 0;
}
