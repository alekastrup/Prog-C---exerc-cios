#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 30

int contaEspacos(char frase[])
{
	int n = strlen(frase), cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (frase[i] == ' ')
		{
			cont++;
		}
	}
	return cont;
}

char* removeEspacos(char frase[])
{
	int cont = 0, j = strlen(frase), contE = 0, k = 0;
	for (int i = 0; i < j; i++)
	{
		cont++;
		if (frase[i] != ' ')
		{
			contE++;
		}
	}
	char* novo = (char*)malloc((contE + 1) * sizeof(char));
	if (novo == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < j; i++)
	{
		if (frase[i] != ' ')
		{
			novo[k] = frase[i];
			k++;
		}
	}
	novo[k] = '\0';
	return novo;
}

int main(void)
{
	/*char nome[100];
	printf("Digite uma frase: ");
	scanf("%99[^\n]", nome);
	printf("%d", contaEspacos(nome));*/
	char frase[100];
	printf("Digite uma frase: ");
	scanf("%99[^\n]", frase);
	char* semEspacos = removeEspacos(frase);
	if (semEspacos == NULL)
	{
		printf("Erro de memoria");
		return 1;
	}
	printf("%s", semEspacos);
	free(semEspacos);
	return 0;
}
