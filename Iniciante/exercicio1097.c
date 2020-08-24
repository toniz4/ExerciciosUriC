#include <stdio.h>

int main(void)
{
	int max = 7;
	for (int i = 1; i < 10; i += 2) {
		for (int j = max; j >= max-2; --j) {
			printf("I=%d J=%d\n", i, j);
		}
		max += 2;
	}
	return 0;
}
