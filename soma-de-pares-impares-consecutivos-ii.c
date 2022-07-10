#include <stdio.h>
int main()
{
	int a, x, y, z, b, g;
	scanf("%d", &a);
	x = 0;
	g = 0;
	while(x != a)
	{
		x = x + 1;
		scanf("%d %d", &y, &z );
		if(y != z && z == y + 1 && y == z + 1)
		{

			if(y > z)
			{
				if(z % 2 == 0)
				{
					b = 1;
					while(b < y)
					{
						b = z + b;
						g = g + b;
						z = 2;
					}
					printf("%d", g);
				}
				else
				{
					b = 2;
					while(b < y)
					{
						b = z + b;
						z = 1;
						g = g + b;
					}
					printf("%d\n", g);
				}

			}
			else
			{
				if(y % 2 == 0)
				{
					b = 1;
					while(b < z)
					{
						b = y + b;
					}
					printf("%d\n", g);
				}
				else
				{
					b = 2;
					while(b < z)
					{
						b = y + b;
						z = 1;
						g = g + b;
					}
					printf("%d\n", g);
				}
			}


		}

		else
		{
			printf("0\n");
		}

	}
	return 0;
}
