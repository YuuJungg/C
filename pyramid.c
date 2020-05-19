#include <stdio.h>

int main_pyramid()
{
	int size;
	int i, j;

	printf("ªÁ¿Ã¡Ó : ");
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}