#include <stdio.h>

int main(void)
{
	int valido = 0;
	int senha;
	
	while (!valido) {
		scanf("%d", &senha);
		if (senha == 2002) {
			printf("Acesso Permitido\n");
			valido = 1;
		} else 
			printf("Senha Invalida\n");
	}
	return 0;
}
