#include <stdio.h>

int main(void)
{
    char name[12];
    double sal, vend, total;

    scanf("%s %lf %lf", name, &sal, &vend);
    total = sal + (vend*0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
