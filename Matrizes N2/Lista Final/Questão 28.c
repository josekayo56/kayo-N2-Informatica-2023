#include <stdio.h>

int main()
{
    int i, j, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float p, pf1 = 0, pf2 = 0, pf3 = 0, pf4 = 0, mf1, mf2, mf3, mf4;
    for (j = 0; j < 15; j++){
        printf("Qual a idade da pessoa %d: ", j + 1);
            scanf("%d", &i);
        printf("Qual o peso da pessoa %d: ", j + 1);
            scanf("%f", &p);
        if (i >= 1 && i <= 10){
            f1++;
            pf1 += p;
        } 
            else if (i >= 11 && i <= 20){
                f2++;
                pf2 += p;
            } 
                else if (i >= 21 && i <= 30) {
                f3++;
                pf3 += p;
            } 
                else {
                f4++;
                pf4 += p;
            }
    }

    mf1 = pf1 / f1;
    mf2 = pf2 / f2;
    mf3 = pf3 / f3;
    mf4 = pf4 / f4;
    printf("\nQuantidade de pessoas entre 1 a 10 anos: %d\n", f1);
        printf("Média do peso das pessoas entre 1 a 10 anos: %.2f\n", mf1);
    printf("\nQuantidade de pessoas entre 11 a 20 anos: %d\n", f2);
        printf("Média do peso das pessoas entre 11 a 20 anos: %.2f\n", mf2);
    printf("\nQuantidade de pessoas entre 21 a 30 anos: %d\n", f3);
        printf("Média do peso das pessoas entre 21 a 30 anos: %.2f\n", mf3);
    printf("\nQuantidade de pessoas com mais de 30 anos: %d\n", f4);
        printf("Média do peso das pessoas com mais de 30 anos: %.2f\n", mf4);
    return 0;
}
