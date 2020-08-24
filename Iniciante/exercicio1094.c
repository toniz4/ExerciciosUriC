#include <stdio.h>

int main(void)
{
	int n, total, total_coelhos, total_ratos, total_sapos; 
	float p_coelhos, p_ratos, p_sapos;

	scanf("%d", &n);
	int cobaias[n];
	char animal[n];

	total = 0;
	total_coelhos = 0;
	total_ratos = 0;
	total_sapos = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d %c", &cobaias[i], &animal[i]);
		if (animal[i] == 'C')
			total_coelhos += cobaias[i];
		if (animal[i] == 'R')
			total_ratos += cobaias[i];
		if (animal[i] == 'S')
			total_sapos += cobaias[i];
		total += cobaias[i];
	}
	
	p_coelhos = (float) (total_coelhos * 100) / total;
	p_sapos= (float) (total_sapos * 100) / total;
	p_ratos= (float) (total_ratos * 100) / total;

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", total_coelhos);
	printf("Total de ratos: %d\n", total_ratos);
	printf("Total de sapos: %d\n",total_sapos);
	printf("Percentual de coelhos: %.2f %%\n", p_coelhos);
	printf("Percentual de ratos: %.2f %%\n", p_ratos);
	printf("Percentual de sapos: %.2f %%\n", p_sapos);
}
