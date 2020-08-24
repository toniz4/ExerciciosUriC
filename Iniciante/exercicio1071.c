#include <stdio.h>

int main(void)
{
	int x, y, aux;
	int res = 0;

	scanf("%d %d", &x, &y);
	if (y > x) {
		aux = x;
		x = y;
		y = aux;
	}
	for (int i = y+1; i <= x-1; i++) {
		if (i % 2 != 0){
			res += i;
		}
	}
	printf("%d\n", res);
	return 0;
}
