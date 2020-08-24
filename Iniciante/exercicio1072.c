#include <stdio.h>

int main(void)
{
	int n, x;
	int in = 0;
	int out = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x >= 10 && x <= 20) {
			in++;
		} else {
			out++;
		}
	}
	printf("%d in\n%d out\n", in, out);
	return 0;
}
