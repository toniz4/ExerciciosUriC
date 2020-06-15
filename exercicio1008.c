#include <stdio.h>

int main(void)
{
    int num, hrs;
    double valh, sal;

    scanf("%i %i %lf", &num, &hrs, &valh);
    sal = valh*hrs;
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", num, sal);
    return 0;
}
