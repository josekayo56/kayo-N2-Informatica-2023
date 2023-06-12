#include <stdio.h>

int main()
{
    int qa, c = 0;
    float n, m, sn = 0;
    printf("Quantidade de alunos na sala:\t");
    scanf("%d", &qa);
    while (c < qa){
        printf("Nota dos alunos %d: ", c + 1);
        scanf("%f", &n);
        sn += n;
        c++;
    }

    m = sn / qa;
    printf("Média aritmética da sua turma é: %.2f\n", m);
    return 0;
}
