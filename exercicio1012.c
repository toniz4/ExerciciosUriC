#include <stdio.h>

int main(void)
{
    double a, b, c;
    double tri, cir, trp, qua, ret;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    tri = (a*c)/2;
    cir = 3.14159*(c*c);
    trp = 0.5*(a+b)*c;
    qua = b*b;
    ret = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n", tri, cir, trp);
    printf("QUADRADO: %.3lf\nRETANGULO: %.3lf\n", qua, ret);
    return 0;
}
