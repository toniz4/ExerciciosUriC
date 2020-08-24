#include <stdio.h>

int main(void)
{
    int num[5];
    int par = 0;
    int impar = 0;
    int posi = 0;
    int neg = 0;

    for (int i =0; i < 5; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        if (num[i] > 0) {
            posi++;
        } else if (num[i] < 0) {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
