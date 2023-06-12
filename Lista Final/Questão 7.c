#include <stdio.h>

int main()
{
    int j;
    char nm[100];
    printf("Digite seu nome: ");
    scanf("%s", nm);

    printf("4 primerias letras:\t");
    for (j = 0; j < 4 && nm[j]; j++) {
        printf("%c", nm[j]);
    }
        {
        printf("\n");
        }
    return 0;
}

