#include <stdio.h>
#include <math.h>

int main(void)
{
	int r1, x1, y1, r2, x2, y2;
	float dist;
	
	while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
		dist = sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
		if ((dist + r2) > r1) {
			printf("MORTO\n");
		} else {
			printf("RICO\n");
		}
	}
	return 0;
}
