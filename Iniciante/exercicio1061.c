#include <stdio.h>

int main(void)
{
    int dia1, hr1, min1, seg1, dia2, hr2, min2, seg2;
    int diaT, hrT, minT, segT;
    char x[8];

    scanf("%s %d %d %s %d %s %d", x, &dia1, &hr1, x, &min1, x, &seg1);
    scanf("%s %d %d %s %d %s %d", x, &dia2, &hr2, x, &min2, x, &seg2);

    diaT = dia2 - dia1;

    if (hr1 > hr2) {
        hrT = (hr2 + 24) - hr1;
        --diaT;
    } else {
        hrT = hr2 - hr1; 
    }

    if (min1 > min2) {
        minT = (min2 + 60) - min1;
        --hrT;
    } else {
        minT = min2 - min1;
    }

    if (seg1 > seg2) {
        segT = (seg2 + 60) - seg1;
        --minT;
    } else {
        segT = seg2 - seg1;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", diaT, hrT, minT, segT);
    return 0;
}
