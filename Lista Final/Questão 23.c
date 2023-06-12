#include <stdio.h>

int main()
{
    int m, d;
    printf("Digite o número do mês (1 a 12):\t");
    scanf("%d", &m);
    if (m >= 1 && m <= 12){
        switch (m){
            case 2:
                d = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                d = 30;
                break;
            default:
                d = 31;
                break;
        }
        printf("O seu mês %d possui %d dias.\n", m, d);
    }
    return 0;
}
