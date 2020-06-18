#include <stdio.h>

int main(void)
{
    int hrs, spd;
    double lts;

    scanf("%d %d", &hrs, &spd);
    lts = (hrs*spd)/12.0;
    printf("%.3lf\n", lts);
    return 0;
}
