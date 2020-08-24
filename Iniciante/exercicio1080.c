#include <stdio.h>

int main(void)
{
	int val[100];
	int max = 0;
	int index = 0;

	for	(int i = 0; i < 100; i++) {
		scanf("%d", &val[i]);
		if (val[i] > max) {
			max = val[i];
			index = i+1;
		}
	}

	printf("%d\n%d\n", max, index);
	return 0;
}
