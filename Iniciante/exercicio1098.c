#include <stdio.h>
#include <math.h>

int main(void)
{
	float inc = 0;
	for (float i = 0; i <= 2.1; i += 0.2) {
		for (float j = 1; j <= 3; j++) {
			if (fmod(i, 1) > 0)
				printf("I=%.1f J=%.1f\n", i, (j+i));
			else
		}
	}
	return 0;
}
