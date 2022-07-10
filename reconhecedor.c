#include <stdio.h>
#include <string.h>
int main(void)
{
	char a1[22] , a2[] = "vertebrado";
	char b1[22], b2[] = "ave", b3[] = "inseto";
	char c1[22], c2[] = "carnivoro", c3[] = "onivoro", c4[] = "hematofago";
	scanf("%s %s %s", a1, b1, c1);
	if(strcmp(a1, a2) == 0)
	{
		if(strcmp(b1, b2) == 0 )
		{
			if(strcmp(c1, c2) == 0)
			{
				printf("aguia");
			}
			else
			{
				printf("pomba");
			}

		}
		else
		{
			if(strcmp(c1, c3) == 0)
			{
				printf("homem");
			}
			else
			{
				printf("vaca");
			}

		}

	}
	else
	{
		if(strcmp(b1, b3) == 0 )
		{
			if(strcmp(c1, c4) == 0)
			{
				printf("pulga");
			}
			else
			{
				printf("lagarta");
			}

		}
		else
		{
			if(strcmp(c1, c4) == 0)
			{
				printf("sanguessuga");
			}
			else
			{
				printf("minhoca");
			}

		}

	}
	return 0;
}
