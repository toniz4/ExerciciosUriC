#include <stdio.h>

int main(void)
{
	int n, x, y;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int soma = 0;
		scanf("%d %d", &x, &y);
		if (x > y) {
			for (int j = x; j > y; --j) {
				if (j % 2 != 0 && j != x && j != y)
					soma += j;
			}
		} else {
			for (int j = y; j > x; --j) {
				if (j % 2 != 0 && j != x && j != y)
					soma += j;
			}
		}
		printf("%d\n", soma);
	}
	return 0;
}
