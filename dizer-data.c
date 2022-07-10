#include <stdio.h>

int main(void)
{
	int w, x, y, z, a, b, c, d, soma1, soma2, diferenca, dia, hora, minutos, segundos;


	scanf("Dia %i", &a);
	scanf("%i : %i : %i", &b, &c, &d);

	soma1 = (w * 24 * 60 * 60) + (x * 60 * 60) + (y * 60) + z;
	soma2 = (a * 24 * 60 * 60) + (b * 60 * 60) + (c * 60) + d;
	diferenca = soma2 - soma1;
	dia = diferenca / (24 * 60 * 60);
	hora = (diferenca % (24 * 60 * 60)) / (60 * 60);
	minutos = ((diferenca % (24 * 60 * 60)) % (60 * 60)) / 60;
	segundos = ((diferenca % (24 * 60 * 60)) % (60 * 60)) % 60;
	printf("%i dia(s)\n", dia);
	printf("%i hora(s)\n", hora);
	printf("%i minuto(s)\n", minutos);
	printf("%i segundo(s)\n", segundos);

	return 0;
}
