#include <stdio.h>

int main()
{
    int metro;
    float dec, cent, mili;
    printf("Diga seu metro: ");
    scanf("%d", &metro);
    
    dec = metro*10;
    printf("Seu decimetro é: %f\n", dec);
    
    cent = metro*100;
    printf("Seu centimetro é: %f\n", cent);
    
    mili = metro*1000;
    printf("Seu milimetro é: %f\n", mili);
    
    return 0;
}
