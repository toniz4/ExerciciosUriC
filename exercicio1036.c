#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, x2, a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    if (delta <= 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    return 0;
    }
}
