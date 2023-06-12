#include <stdio.h>

int main()
{
    int i;
    printf("Diga a sua idade:\t");
    scanf("%d", &i);
    if (i <= 16){
        printf("Não-eleitor (abaixo de 16 anos)");
    } 
        else if (i >= 18 && i <= 65){
            printf("Eleitor obrigatório (entre 18 e 65 anos)");
        } 
        else{
            printf("Eleitor facultativo (entre 16 e 18 e maior de 65 anos)");
        } 
    return 0;
}
