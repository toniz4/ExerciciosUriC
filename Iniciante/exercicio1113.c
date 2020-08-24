#include <stdio.h>

int main(void)
{
	int x, y;

	while (1) {
		scanf("%d %d", &x, &y);
		if (x > y) {
			printf("Decrescente\n");
		} else if (x < y) {
			printf("Crescente\n");
		} else 
			break;
	}
	return 0;
}
