#include <stdio.h>

int main(void)
{
	int n, x, y;

	scanf("%d", &n);
	for (int i = 0;i < n; i++) {
		scanf("%d %d", &x, &y);
		if (y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1lf\n", ((float) x/ y));
	}
	return 0;
}
