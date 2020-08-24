#include <stdio.h>

int main(void)
{
    int hin, min, hfim, mfim, htotal, mtotal;
    
    scanf("%d %d %d %d", &hin, &min, &hfim, &mfim);
    if (hfim > hin) {
        htotal = hfim - hin;
    } else {
        htotal = (24 - hin) + hfim;
    }
    if (mfim > min) {
        mtotal = mfim - min;
    } else {
        --htotal;
        mtotal = 60 - (min - mfim);
    }
    if (mtotal == 60) {
        htotal ++;
        mtotal = 0;
    }
    if (hfim == hin && mfim > min) {
        htotal = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", htotal, mtotal);
    return 0;
}
