#include <stdio.h>

int main()
{
    int timejor, spdm;
    float dstwlk;
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%d", &timejor);
    printf("Digite a velocidade média (em km/h): ");
    scanf("%d", &spdm);

    dstwlk = timejor * spdm;
    printf("Distância percorrida:\t%.2f km/h", dstwlk);
    return 0;
}

