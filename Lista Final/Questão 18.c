#include <stdio.h>

int main()
{
    int bb;
    float l, sb;
    printf("Qual o valor da compra:\t");
    scanf("%d", &bb);
    if (bb < 20){
        l = 0.45; 
        l = 0.30; 
    }
    sb = bb + (bb * l);
    printf("Valor da venda é: %.2f\n", sb);
    return 0;
}
