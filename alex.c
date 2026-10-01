#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 30

int numProximoMedia(int vet[], int tam, float* media)
{
	float soma = 0, menorDif = 999;
	int menorI;
	for (int i = 0;i < tam; i++)
	{
		soma += vet[i];
	}
	*media = soma / tam;
	for (int i = 0; i < tam; i++)
	{
		if (fabs(*media - vet[i]) < menorDif)
		{
			menorDif = fabs(*media - vet[i]);
			menorI = i;
		}
	}
	return menorI;
}

void imprimeInvertido(int vet[], int tam)
{
	for (int i = tam - 1; i >= 0; i--)
	{
		printf("%d\n", vet[i]);
	}
}

int* criaVetorDeProdutosZerados(int cod[], int est[], int n, int* retornaZ)
{
	int cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (est[i] == 0)
		{
			cont++;
		}
	}
	*retornaZ = cont;
	if (cont == 0)
	{
		return NULL;
	}
	int* zerados = (int*)malloc(cont * sizeof(int));
	if (zerados == NULL)
	{
		return NULL;
	}
	int j = 0
}

int main(void)
{
	/*int tam, menorI, vet[MAX];
	float media;
	printf("Digite a quantidade de inteiros do vetor: ");
	scanf("%d", &tam);
	for (int i = 0; i < tam; i++)
	{
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	imprimeInvertido(vet, tam);
	menorI = numProximoMedia(vet, tam, &media);
	printf("Menor Indice: %d\n", menorI);
	printf("Media: %.1f\n", media);*/
	int 
	return 0;
}