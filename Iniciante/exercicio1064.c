#include <stdio.h>

int main(void)
{
    int posi = 0;
    double num[6];
    double med = 0;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &num[i]);
        if (num[i] > 0) {
            posi++; 
            med = med + num[i];
        }
    }
    printf("%d valores positivos\n%lf\n",posi, (med/posi) );
    return 0;
}
