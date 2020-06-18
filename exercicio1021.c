#include <stdio.h>
#include <math.h>

int main(void)
{
    double moedas, money;
    int notas, moedasint;


    scanf("%lf", &money);

    notas = (int) money;
    moedas = money - notas;

    /* NUNCA ESCREVI NADA PIOR DO QUE ISSO, PELO AMOR DE DEUS
     * ALGUEM ARRUMA ISSO                                    */

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", (notas/100));
    notas = notas % 100;
    printf("%d nota(s) de R$ 50.00\n", (notas/50));
    notas = notas % 50;
    printf("%d nota(s) de R$ 20.00\n", (notas/20));
    notas = notas % 20;
    printf("%d nota(s) de R$ 10.00\n", (notas/10));
    notas = notas % 10;
    printf("%d nota(s) de R$ 5.00\n", (notas/5));
    notas = notas % 5;
    printf("%d nota(s) de R$ 2.00\n", (notas/2));
    notas = notas % 2;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", notas);
    moedas = moedas * 100;
    printf("%d moeda(s) de R$ 0.50\n", ((int)moedas/50));
    moedas = fmod(moedas, 50);
    printf("%d moeda(s) de R$ 0.25\n", ((int)moedas/25));
    moedas = fmod(moedas, 25);
    printf("%d moeda(s) de R$ 0.10\n", ((int)moedas/10));
    moedas = fmod(moedas, 10);
    printf("%d moeda(s) de R$ 0.05\n", ((int)moedas/5));
    moedas = fmod(moedas, 5);
    printf("%.0lf moeda(s) de R$ 0.01\n", (moedas));
    return 0;
}
