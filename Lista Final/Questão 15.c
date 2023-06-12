#include <stdio.h>

int main()
{
    int i;
    printf("Diga a sua idade:\t");
    scanf("%d", &i);
    if (i >= 10 && i <= 14){
        printf("O individuo está na categoria: Infantil\n");
    } 
        else if (i >= 15 && i <= 17){
            printf("O individuo está na categoria: Juvenil\n");
        } 
        else if (i >= 18 && i <= 25){
            printf("O individuo está na categoria: Adulto\n");
        } 
    return 0;
}
