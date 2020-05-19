#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_selectsort2()
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

	int n = 10;
	int min;
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}

		temp = a[i];
		a[i] = a[min];
		a[min] = temp;

	}
	printf("\n");
	printf("정렬 후 : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;

}