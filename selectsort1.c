//선택정렬
#include <stdio.h>

int main_selectsort1()
{
	int a[] = { 10,20,50,30,40 };
	int n = 5;
	int min;
	int temp;

	printf("현재 배열: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

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
	printf("바뀐 배열: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}