#include <stdio.h>

int main(void)
{
    int seg, min, hrs;

    scanf("%d", &seg);

    hrs = seg / 3600;
    min = (seg-(hrs*3600))/60;
    seg = seg % 60;
    printf("%d:%d:%d\n", hrs, min, seg);
    return 0;
}
