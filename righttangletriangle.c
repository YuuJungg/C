#include <stdio.h>

int main_righttangletriangle()
{
	int size;
	int i, j;

	printf("ªÁ¿Ã¡Ó : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

}