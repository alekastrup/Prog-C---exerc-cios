#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int numI;
	printf("Digite 2 numeros: ");
	scanf("%d %d", &num1, &num2);
	if (num2 > num1)
	{
		numI = num1;
		while (numI <= num2)
		{
			if (numI % 2 != 0)
				printf("%d\n", numI);
			numI++;
		}
	}
	if (num1 > num2)
	{
		numI = num2;
		while (numI <= num1)
		{
			if (numI % 2 != 0)
				printf("%d\n", numI);
			numI++;
		}
	}
	if (num1 == num2)
	{
		if (num1 % 2 != 0)
			printf("%d", num1);
	}
	return 0;



}