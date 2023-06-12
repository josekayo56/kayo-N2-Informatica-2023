#include <stdio.h>

int main()
{
    int j, o;
    float n[5][4], ma[5], mt = 0, m, mm, pr;
    for (j = 0; j < 5; j++){
        printf("Diga as 4 notas do aluno %d:\n", j + 1);
        for (o = 0; o < 4; o++){
            printf("Nota %d: ", j + 1);
            scanf("%f", &n[j][o]);
        }
    }
    for (j = 0; j < 5; j++){
        ma[j] = (n[j][0] * 3 + n[j][1] * 2 + n[j][2] + n[j][3]) / 7;
        mt += ma[j];
    }
    
    mt /= 5;
    for (j = 0; j < 5; j++){
        m = ma[j];
        mm = 7;
        pr = mm - m;
        if (m >= 7){
            printf("Aluno %d: Passou!\n", j + 1);
        } else if (m >= 4) {
            printf("Aluno %d: ficou de recuperação - precisa de %.2f pontos para passar!\n", j + 1, pr);
        } else {
            printf("Aluno %d: Não passou!\n", j + 1);
        }
    }
    printf("Média da turma: %.2f\n", mt);
    return 0;
}
