#include <stdio.h>

int main(void)
{
    int item, quant;
    double total;

    scanf("%d %d", &item, &quant);
    switch (item) {
        case 1: total = quant * 4.0; 
                break;
        case 2: total = quant * 4.5;
                break;
        case 3: total = quant * 5.0;
                break;
        case 4: total = quant * 2.0;
                break;
        case 5: total = quant * 1.5;
                break;
        default:
                break;
    }
    printf("Total: R$ %.2lf\n", total);
    return 0;
}
