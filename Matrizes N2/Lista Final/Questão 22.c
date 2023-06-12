#include <stdio.h>

int main()
{
    int d,m,n;
        printf("Diga o seu dia de aniversário:\t");
            scanf("%d", &d);
        printf("Diga o seu mês de aniversário:\t");
            scanf("%d", &m);
        printf("Diga o seu ano de aniversário:\t");
            scanf("%d", &n);
    if (n >= 0 && m >= 1 && m <= 12 && d >= 1 && d <= 31){
        printf("Data válida!");
    } 
        else{
            printf("Data inválida!\n");
            if (n > 23){
                printf("Ano inválido!\n");
            }
            if (m < 1 || m > 12){
                printf("Mês inválido!\n");
            }
            if (d < 1 || d > 31){
            printf("Dia inválido!\n");
            }
    }
    return 0;
}
