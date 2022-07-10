#include <stdio.h>
int main()
{
	int a, x, y, z, b, j, g;
	scanf("%d", &a);

	x = 0;
	while(x != a)
	{
		x = x + 1;
		g = 0;
		scanf("%d %d", &y, &z );
		if(z != y && z + 1 != y && y + 1 != z)
		{
			if(z % 2 == 0 && y % 2 == 0 && (z + 2 == y || y + 2 == z))
			{
				j = (z + y) / 2;
				printf("%d\n", j);
			}


			else if(y > z)
			{
				if(z % 2 == 0)
				{
					b = z;
					while(b < y - 1 && b < y - 2)
					{
						b = 1;
						b = z + b;
						z = 2;
						g = g + b;
					}
					printf("%d\n", g);
				}
				else
				{
					b = z;
					while(b < y - 1 && b < y - 2)
					{
						b = 1;
						b = z + b;
						z = 2;
						g = g + b;
					}
					printf("%d\n", g);
				}

			}
			else
			{
				if(y % 2 == 0)
				{
					b = y;
					while(b < z - 1 && b < z - 2)
					{
						b = 1;
						b = y + b;
						y = 2;
						g = g + b;
					}
					printf("%d\n", g);
				}
				else
				{
					b = y;
					while(b < z - 1 && b < z - 2)
					{
						b = 2;
						b = y + b;
						y = 2;
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
