#include <stdio.h>

void classe(int class, int* min, int* max)
{
	if (class == 1)
	{
		*min = 100;
		*max = 120;
	}
	else if (class == 2)
	{
		*min = 150;
		*max = 180;
	}
	else if (class == 3)
	{
		*min = 200;
		*max = 250;
	}
	else if (class == 4)
	{
		*min = 250;
		*max = 300;
	}
}

void leitura(int* classificacao, int* codigo)
{
	int class1, codigo1;
	printf("Digite a classificacao: ");
	scanf("%d", &class1);
	printf("Digite o codigo: ");
	scanf("%d", &codigo1);
	*classificacao = class1;
	*codigo = codigo1;
}

void converteHora(int total_segundos, int* hora, int* min, int* seg)
{
		*hora = total_segundos / 3600;
		*min = (total_segundos % 3600) / 60;
		*seg = total_segundos % 60;
}

float calculaMedia(int *vetor, int quantidade)
{
	int soma = 0;
	float media;
	for (int i = 0; i < quantidade; i++)
	{
		soma = soma + vetor[i];
	}
	media = soma / quantidade;
	return media;
}

int busca1(int* vetor, int qtd, int valor)
{
	int v;
	for (int i = 0; i < qtd; i++)
	{
		if (vetor[i] == valor)
		{
			v = 1;
		}
		else
		{
			v = 0;
		}	
	}
	return v;
}

int busca2(int* vetor, int qtd, int valor)
{
	for (int i = 0; i < qtd; i++)
	{
		if (vetor[i] == valor)
		{
			return i;
		}
	}
	return -1;
}
int verificaOrd(int vetor[], int qtd)
{
	for (int i = 0; i < qtd - 1; i++)
	{
		if (vetor[i] > vetor[i + 1])
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	/*

	// ----------------------- QUESTÃO 3 --------------------------
	int min, max, classificacao, codigo;
	for (int i = 0; i < 100; i++)
	{
		leitura(&classificacao, &codigo);
		classe(classificacao, &min, &max);
		printf("%d %d %d\n", codigo, min, max);
		return 0;
	}

	// ----------------- QUESTÃO 4 --------------------------------
	int total_segundos, hora, min, seg, inscricao, maior_tempo = 0, insc_maior_tempo, menor_tempo = 999999999, insc_menor_tempo;
	printf("Digite o numero de inscricao: ");
	scanf("%d", &inscricao);
	while (inscricao != 0)
	{
		printf("Digite o total de segundos: ");
		scanf("%d", &total_segundos);
		if (total_segundos < 36001)
		{
			converteHora(total_segundos, &hora, &min, &seg);
			printf("%02d:%02d:%02d %d inscrito\n", hora, min, seg, inscricao);
			if (total_segundos > maior_tempo)
			{
				maior_tempo = total_segundos;
				insc_maior_tempo = inscricao;
			}
			else if (total_segundos < menor_tempo)
			{
				menor_tempo = total_segundos;
				insc_menor_tempo = inscricao;
			}
			printf("Digite o numero de inscricao: ");
			scanf("%d", &inscricao);
		}
		else
		{
			printf("Desclassificado!\n");
			printf("Digite o numero de inscricao: ");
			scanf("%d", &inscricao);
		}
	}
	converteHora(maior_tempo, &hora, &min, &seg);
	printf("Maior tempo: %02d:%02d:%02d %d inscrito\n", hora, min, seg, insc_maior_tempo);
	converteHora(menor_tempo, &hora, &min, &seg);
	printf("Menor tempo: %02d:%02d:%02d %d inscrito\n", hora, min, seg, insc_menor_tempo);*/
	
	//-------------------------- QUESTÃO 1 (vetores) -------------------------
	int notas[10], ultimo, busca11, busca22, ordem;
	float media;
	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &notas[i]);
	}

	ultimo = notas[9];
	for (int i = 0; i < 9; i++)
	{
		if (ultimo > notas[i])
		{
			printf("%d\n", notas[i]);
		}
	}
	/*media = calculaMedia(notas, 2);
	printf("media igual a: %.2f", media);
	busca11 = busca1(notas, 10, 3);
	printf("%d", busca11);
	busca22 = busca2(notas, 10, 3);
	printf("%d", busca22);*/
	ordem = verificaOrd(notas, 10);
	printf("%d", ordem);

	return 0;
}
