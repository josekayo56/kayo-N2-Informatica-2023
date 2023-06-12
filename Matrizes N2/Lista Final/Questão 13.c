#include <stdio.h>

int main()
{
    int i;
    printf("Diga a sua idade: ");
    scanf("%d", &i);
    if (i >= 18 && i <= 67) {
        printf("Você pode doar sangue!\n");
    } 
        else {
            printf("Você não pode doar sangue!\n");
        }
    return 0;
}

