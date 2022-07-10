#include <stdio.h>

int main()
{
	int A, B, C, D, F, G;
	scanf("%i", &A);
	scanf("%i", &B);
	scanf("%i", &C);
	scanf("%i", &D);
	F = C + D;
	G = A + B;
	if(B > C && D > A && F > G && C >= 0 && D >= 0 && A % 2 == 0 )
	{
		printf("Valores aceitos\n");
	}
	else
	{
		printf("Valores nao aceitos\n");
	}

	return 0;
}
