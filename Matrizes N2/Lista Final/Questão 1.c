#include <stdio.h>

int main()
{
    int raio;
    float diametro, comprimento, area;
    printf("Diga seu raio: ");
    scanf("%d", &raio);
    
    diametro = 2*raio;
    printf("Seu diametro é: %f\n", diametro);
    
    comprimento = 2*3.14*raio;
    printf("Seu comprimento é: %f\n", comprimento);
    
    area = 3.14*(raio*raio);
    printf("Sua area é: %f\n", area);
    
    return 0;
}
