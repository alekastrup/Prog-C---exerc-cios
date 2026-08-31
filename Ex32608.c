#include <stdio.h>

float retornamedia(int trabalhos)
{
	float notas = 0;
	float media;
	float nota;
	for (int i = 0; i < trabalhos; i++)
	{
		printf("Digite a nota: ");
		scanf("%f", &nota);
		notas += nota;
	}
	media = notas / trabalhos;
	return media;
}

int main(void)
{
	int trabalhos;
	int matricula = 1;
	float media;
	while (matricula != 0)
	{
		printf("Digite o numero de matricula: ");
		scanf("%d", &matricula);
		if (matricula == 0)
			break;
		printf("Digite o numero de trabalhos realizados: ");
		scanf("%d", &trabalhos);
		media = retornamedia(trabalhos);
		printf("%.2f\n", media);
	} 
	return 0;
}