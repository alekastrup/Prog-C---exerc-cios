#include <stdio.h>

void primeira_ultima_ocorrencia(int vet[], int n, int valor, int* primeira_pos, int* ultima_pos)
{
	*primeira_pos = -1;
	*ultima_pos = -1;
	for (int i = 0; i < n; i++)
	{
		if (vet[i] == valor)
		{
			*ultima_pos = i;
			if (*primeira_pos == -1)
			{
				*primeira_pos = i;
			}
		}
	}
}

int main(void)
{
	int posI, posF, valor;
	int vet[7];
	for (int i = 0; i < 7; i++)
	{
		printf("Digite o valor %d do vetor: ", i + 1);
		scanf("%d", &vet[i]);
	}
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &valor);
	primeira_ultima_ocorrencia(vet, 7, valor, &posI, &posF);
	printf("Primeira posicao: %d", posI);
	printf("Ultima posicao: %d", posF);
	return 0;
}