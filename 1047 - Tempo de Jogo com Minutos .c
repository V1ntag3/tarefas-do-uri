#include <stdio.h>

int main()
{
	int horai, minutoi, horaf, minutof, hora, minuto, x, y, w;
	scanf("%d %d %d %d", &horai, &minutoi, &horaf, &minutof);
	x = (horai * 60) + minutoi;
	y = (horaf * 60) + minutof + (24 * 60);
	w = y - x;
	if(w > 24 * 60)
	{
		x = (horai * 60) + minutoi;
		y = (horaf * 60) + minutof;
		w = y - x;
		hora = w / 60;
		minuto = w % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

	}
	else
	{
		hora = w / (60);
		minuto = w % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
	}


	return 0;
}
