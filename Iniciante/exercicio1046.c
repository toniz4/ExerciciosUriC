#include <stdio.h>

int main(void)
{
    int in, fim, total;

    scanf("%d %d", &in, &fim);
    if (in < fim) {
       total = fim - in; 
    } else {
        total = (24 - in) + fim;
    }
    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}
