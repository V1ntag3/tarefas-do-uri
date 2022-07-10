#include <stdio.h>

int main()
{
	double a, b, media;
	int c, y, z;
	c = 1;
	z = 2;
	y = 2;
	while(c == 1)
	{
		while(y == 2)
		{
			scanf("%lf", &a);
			if(a >= 0 && a <= 10)
			{
				y = 1;
			}
			else
			{
				printf("nota invalida\n");
				y = 2;
			}
		}

		while(z == 2)
		{
			scanf("%lf", &b);
			if(b >= 0 && b <= 10)
			{
				z = 1;
			}
			else
			{
				printf("nota invalida\n");
				z = 2;
			}
		}


		media = (a + b) / 2;
		printf("media = %.2lf\n", media);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &c);
		if(c != 1 && c != 2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &c);
		}
		else
		{

		}
		z = 2;
		y = 2;
	}

	return 0;
}
