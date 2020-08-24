#include <stdio.h>

int main(void)
{
	int n, m, aux;
	int sum = 0;

	do {
		scanf("%d %d", &n, &m);
		if (n < 0 || m < 0)
			break;
		if (m > n) {
			aux = m;
			m = n;
			n = aux;
		}
		if (n > 0 && m > 0) {
			for (int i = m; i <= n; i++) {
				printf("%d ", i);
				sum += i;
			}
		printf("Sum=%d\n", sum);
		}
		sum = 0;
	} while (n > 0 && m > 0);
	return 0;
}
