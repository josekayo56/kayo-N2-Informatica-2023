#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float qdd, rzq;
    printf("Digite um número:\t");
    scanf("%d", &n);
    if (n >= 0){
        rzq = sqrt(n);
        printf("Sua raiz quadrada é: %.2f\n", rzq);
    } 
        else{
            qdd = n * n;
            printf("Seu numero ao quadrado é: %.2f\n", qdd);
        }
    return 0;
}
