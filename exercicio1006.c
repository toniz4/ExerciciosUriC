#include <stdio.h>

int main()
{
    double n1, n2, n3, med;

    scanf("%lf %lf %lf", &n1, &n2, &n3);
    med = ((n1*2)+(n2*3)+(n3*5))/10; 
    printf("MEDIA = %.1lf\n", med);

    return 0;
}
