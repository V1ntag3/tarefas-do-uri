#include <stdio.h>

int main()
{
	int a, b, hora, hora2;
	scanf("%i", &a);
	scanf("%i", &b);
	hora2 = b - a;
	hora = (b + 24) - a;
	if(hora > 24)
	{
		printf("O JOGO DUROU %i HORA(S)\n", hora2);
	}
	else
	{
		printf("O JOGO DUROU %i HORA(S)\n", hora);
	}
	return 0;
}
