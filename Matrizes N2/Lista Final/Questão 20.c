#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite 3 números:\n");
    scanf("%d\n%d\n%d", &n1,&n2,&n3);
    if (n1 <= n2 && n1 <= n3){
        printf("%d\t", n1);
        if (n2 <= n3){
            printf("%d\t%d", n2, n3);
        } 
            else{
                printf("%d\t%d", n3, n2);
            }
    } 
        else if (n2 <= n1 && n2 <= n3){
            printf("%d\t", n2);
            if (n1 <= n3){
                printf("%d\t%d", n1, n3);
        } 
            else{
                printf("%d\t%d", n3, n1);
            }
    }   
        else{
            printf("%d\t", n3);
            if (n1 <= n2){
                printf("%d\t%d", n1, n2);
            }
                else{
                printf("%d\t%d", n2, n1);
            }
        }
    return 0;
}
