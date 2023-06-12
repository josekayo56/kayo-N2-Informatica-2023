#include <stdio.h>

int main()
{
    int lx, ly, lz;
    printf("Fale os comprimentos do triangulo desejado:\n");
    scanf("%d%d%d", &lx, &ly, &lz);
    
    if (lx + ly > lz && lx + lz > ly && ly + lz > lx) 
    {
        printf("Os valores formam um triangulo ");
        if (lx == ly && ly == lz) 
        {
            printf("Esse é equilatero!\n");
        }
        else if (lx == ly || lx == lz || ly == lz) 
        {
            printf("Esse é isoscele!\n");
        } else {
            printf("Esse é escaleno!\n");
        }
    } else {
        printf("Com os valores dados não se forma um triangulo!\n");
    }

    return 0;
}
