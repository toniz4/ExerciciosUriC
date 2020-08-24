#include <stdio.h>

int main(void)
{
    int num[5];
    int par = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            par++;
        }
    }
    printf("%d valores pares\n", par);
    return 0;
}
