#include <stdio.h>

int main(void)
{
    double sal, salfim, rej;
    int per;

    scanf("%lf", &sal);
    if (sal > 2000) {
        per = 4;
        rej = sal*0.04;
        salfim = sal + rej;
    } else if (sal > 1200) {
        per = 7;
        rej = sal*0.07;
        salfim = sal + rej;
    } else if (sal > 800) {
        per = 10;
        rej = sal*0.1;
        salfim = sal + rej;
    } else if (sal > 400) {
        per = 12;
        rej = sal*0.12;
        salfim = sal + rej;
    } else {
        per = 15;
        rej = sal*0.15;
        salfim = sal + rej;
    }
    printf("Novo salario: %.2lf\n", salfim);
    printf("Reajuste ganho: %.2lf\n", rej);
    printf("Em percentual: %d %%\n", per);
    return 0;
}
