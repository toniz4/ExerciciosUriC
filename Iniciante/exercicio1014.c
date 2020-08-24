#include <stdio.h>

int main(void)
{
    int dis;
    double gas, total;

    scanf("%d %lf", &dis, &gas);
    total = (double) dis/gas;
    printf("%.3lf km/l\n", total);
    return 0;
}
