#include <stdio.h>

int main(void)
{
    double n1, n2, n3, n4, ne, med;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    med = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    printf("Media: %.1lf\n", med);
    if (med >= 7) {
        printf("Aluno aprovado.\n");
    } else if (med >= 5) {
        printf("Aluno em exame.\n");
        scanf("%lf", &ne);
        printf("Nota do exame: %.1lf\n", ne);
        med = (med+ne)/2;
        if (med >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", med);
    } else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
