#include <stdio.h>

int main()
{
    int pp;
    float dst, nvp;
    printf("Digite o preço: ");
    scanf("%d", &pp);

    dst = pp * 0.09;
    nvp = pp - dst;
        printf("Preço novo com desconto de 9 porcento: %.2f", nvp);
    return 0;

}
