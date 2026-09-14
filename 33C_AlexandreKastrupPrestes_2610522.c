#include <stdio.h>

int main(void)
{
	int brindes, dia, mes;
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
	return 0;
}