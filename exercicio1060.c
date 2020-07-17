#include <stdio.h>

int main(void)
{
    int num[6];
    int posi = 0;
    int *p;
    p = &num[0];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &*p);
        if (*p > 0) {
            posi++;
        }
        p++;
    }
    printf("%d valores positivos\n", posi);
    return 0;
}
