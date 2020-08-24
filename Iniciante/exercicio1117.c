#include <stdio.h>

int main(void)
{
	double nota1, nota2;
	int nota1valida = 0;
	int nota2valida = 0;

	while (!nota1valida) {
		scanf("%lf", &nota1);
		if (nota1 >= 0 && nota1 <= 10) {
			while (!nota2valida) {
				scanf("%lf", &nota2);
				if (nota2 >= 0 && nota2 <= 10) {
					nota2valida = 1;
				} else
					printf("nota invalida\n");
				nota1valida = 1; 
			}
		} else 
			printf("nota invalida\n");
	}
	printf("media = %.2lf\n", (nota1+nota2)/2);
	return 0;
}
