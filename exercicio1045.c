#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, aux;
    int swap;
    scanf("%lf %lf %lf", &a, &b, &c);
    double num[3] = {a, b, c};

    while(1) {
        swap = 0;
        for (int i = 0; i < 2; i++) {
            if (num[i] > num[i+1]) {
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }

    a = num[2];
    b = num[1];
    c = num[0];

    if (a >= (b+c)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == (pow(b, 2)+pow(c, 2))) {
            printf("TRIANGULO RETANGULO\n");
        } else if (pow(a, 2) > (pow(b, 2)+pow(c, 2))) {
             printf("TRIANGULO OBTUSANGULO\n");
        } else if (pow(a, 2) < (pow(b, 2)+pow(c, 2))) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || a == c || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
