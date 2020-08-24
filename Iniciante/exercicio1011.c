#include <stdio.h>

int main(void)
{
    double r, vol;

    scanf("%lf", &r);
    vol = (4.0/3)*3.14159*(r*r*r);
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
