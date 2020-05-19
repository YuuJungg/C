//삽입정렬
#include <stdio.h>

int main_insertsort1()
{
	int a[] = { 50, 20, 30, 10, 40 };

	int i, j, k;
	int temp;
	int n = 5;

	printf("현재 배열: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

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

		printf("바뀐 배열: ");
		for (k = 0; k < n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	return 0;
}