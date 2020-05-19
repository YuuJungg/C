#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main_insertsort2()
{
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 11;
	}
	printf("랜덤한 값 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	int i, j, k;
	int temp;
	int n = 10;
	for (i = 1; i < n; i++)
	{
		j = i;

		while (j > 0 && a[j] < a[j - 1])
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
	}
	printf("정렬 후 : ");
	for (k = 0; k < n; k++)
	{
		printf("%d ", a[k]);
	}
}