#include <stdio.h>

int main(void)
{
    double rend, imp;

    scanf("%lf", &rend);
    if (rend <= 2000) {
        printf("Isento\n");
        return 0;
    } else if (rend <= 3000) {
        rend = rend - 2000;
        imp = rend*0.08;
    } else if (rend <= 4500) {
        rend = rend - 3000;
        imp = (rend*0.18)+80;
    } else {
        rend = rend - 4500;
        imp = (rend*0.28)+350;
    }
    printf("R$ %.2lf\n", imp);
    return 0;
}
