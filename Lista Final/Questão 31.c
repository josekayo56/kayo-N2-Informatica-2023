#include <stdio.h>

int main()
{
    int a, num;
        printf("Digite o número desejado:\t");
        scanf("%d", &num);
    while(num < 1 || num > 10);

    for(a = 1; a <= 10; a++)
        printf("\n%d * %d = %d\n", num, a, num * a);
    return 0;
}
