#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a >= b && b >= c)
	{
		if(a > (b + c))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((a * a) == (b * b) + (c * c))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((a * a) > (b * b) + (c * c))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((a * a) < (b * b) + (c * c))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
	}
	else if(a >= c && c >= b)
	{

		if(a > (b + c))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((a * a) == (b * b) + (c * c))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((a * a) > (b * b) + (c * c))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((a * a) < (b * b) + (c * c))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
	}
	else if(b >= a && a >= c)
	{
		if(b > (a + c))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((b * b) == (a * a) + (c * c))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((b * b) > (a * a) + (c * c))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((b * b) < (a * a) + (c * c))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
	}
	else if(b >= c && c >= a)
	{
		if(b > (a + c))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((b * b) == (a * a) + (c * c))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((b * b) > (a * a) + (c * c))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((b * b) < (a * a) + (c * c))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
	}
	else if(c >= a && a >= b)
	{
		if(c > (b + a))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((c * c) == (b * b) + (a * a))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((c * c) > (b * b) + (a * a))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((c * c) < (b * b) + (a * a))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}

	}
	else if(c >= b && b >= a)
	{
		if(c > (b + a))
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if((c * c) == (b * b) + (a * a))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if((c * c) > (b * b) + (a * a))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if((c * c) < (b * b) + (a * a))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}

	}
	return 0;
}
