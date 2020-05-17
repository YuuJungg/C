// 랜덤한 값 받아서 버블정렬로 정렬

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_boublesort2()
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

	int n = 10;
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("정렬 후 : ");
	for (int k = 0; k < n; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");

	return 0;
}