#include <stdio.h>

int main(void)
{
	int n;
	double val1, val2, val3, res;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &val1, &val2, &val3);
		res = ((2*val1)+(3*val2)+(5*val3))/10;
		printf("%.1lf\n", res);
	}
	return 0;
}
