#include <stdio.h>

int main(void)
{
    int cod1, num1, cod2, num2;
    double val1, val2, total;
    
    scanf("%i %i %lf\n%i %i %lf", &cod1, &num1, &val1, &cod2, &num2, &val2);
    total = (num1*val1)+(num2*val2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
