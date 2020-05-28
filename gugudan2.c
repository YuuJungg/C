#include <stdio.h>

int main(void)
{
	int i_start, i_last;
	int j_start, j_last;

	printf("범위 i >> ");
	scanf("%d %d", &i_start, &i_last);
	printf("범위 j >> ");
	scanf("%d %d", &j_start, &j_last);

	printf("    |  ");
	for (int i = j_start; i <= j_last; i++)
		printf(" %d  ", i);
	printf("\n");
	printf("----+------------------------\n");


	for (int i = i_start; i <= i_last; i++)
	{
		printf(" %2d | ", i);

		for (int j = j_start; j <= j_last; j++)
		{
			printf("%3d ", i * j);
		}
		printf("\n");
	}
	return 0;
}

