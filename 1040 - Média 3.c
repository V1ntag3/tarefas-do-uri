#include <stdio.h>

int main()
{

	float N1, N2, N3, N4, media, exame, final;
	scanf("%f", &N1);
	scanf("%f", &N2);
	scanf("%f", &N3);
	scanf("%f", &N4);
	media = ((2 * N1) + (3 * N2) + (4 * N3) + (1 * N4)) / (2 + 3 + 4 + 1);
	printf("Media: %.1f\n", media);
	if(media >= 7)
	{
		printf("Aluno aprovado.\n");
	}
	else if(media >= 5 )
	{
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		final = (exame + media) / 2;
		if(final > 5)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", final);
		}
		else
		{
			printf("Aluno reprovado.\n");
		}
	}
	else if(media < 5)
	{
		printf("Aluno reprovado.\n");
	}
	return 0;
}
