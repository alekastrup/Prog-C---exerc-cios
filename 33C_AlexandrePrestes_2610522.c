#include <stdio.h>

void le_dados(int *num)
{
	scanf("%d", num);
}

void maior(int num1, int num2, int* max1)
{
	if (num1 > num2)
	{
		*max1 = num1;
	}
	else
	{
		*max1 = num2;
	}

}

float calculos(int num1, int num2, int* soma1)
{
	int media;
	media = (num1 + num2) / 2;
	*soma1 = num1 + num2;
	return media;
}

int main(void)
{
	/*int brindes, dia, mes;
	printf("Digite a quantidade de brindes a serem distribuidos: ");
	scanf("%d", &brindes);
	while (brindes > 0)
	{
		printf("\nDigite o dia e mes de nascimento: ");
		scanf("%d/%d", &dia, &mes);
		if (mes % 3 == 0)
		{
			if (dia % 2 == 0)
			{
				printf("\nPARABENS!\n");
				brindes--;
			}

		}
	}
	printf("\nPROMOCAO ENCERRADA");

	int a, b, * pa, * pb;
	a = 0;
	b = 1;
	pa = &a;
	pb = &b;
	*pb = 3;
	*pa = 2;
	printf("%d %d", a, b);*/

	int num1, num2, max, soma;
	printf("Informe um numero inteiro:\n ");
	le_dados(&num1); // captura um numero do teclado
	printf("Informe outro numero inteiro:\n ");
	le_dados(&num2);
	maior(num1, num2, &max); // armazena em Max o maior valor entre os fornecidos
	printf("O maior numero eh %d: ", max);
	printf("A media dos numeros eh %.1f: ", calculos(num1, num2, &soma)); // obs
	printf("A soma dos numeros eh %d ", soma);
	return 0;
}
