#include <stdio.h>

int main()
{
	float salario, ganho, novo, pen1, pen2, pen3, pen4, pen5;
	pen1 = 0.15;
	pen2 = 0.12;
	pen3 = 0.10;
	pen4 = 0.07;
	pen5 = 0.04;
	scanf("%f", &salario);
	if(salario >= 0 && salario <= 400)
	{
		ganho = pen1 * salario;
		novo = ganho + salario;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", ganho);
		printf("Em percentual: 15 %%\n");

	}
	else if(salario > 400 && salario <= 800)
	{
		ganho = pen2 * salario;
		novo = ganho + salario;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", ganho);
		printf("Em percentual: 12 %%\n");

	}
	else if(salario > 800 && salario <= 1200)
	{
		ganho = pen3 * salario;
		novo = ganho + salario;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", ganho);
		printf("Em percentual: 10 %%\n");

	}
	else if(salario > 1200 && salario <= 2000)
	{
		ganho = pen4 * salario;
		novo = ganho + salario;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", ganho);
		printf("Em percentual: 7 %%\n");

	}
	else
	{
		ganho = pen5 * salario;
		novo = ganho + salario;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", ganho);
		printf("Em percentual: 4 %%\n");

	}


	return 0;
}
