//20,40,50,10,30 ���� ���� ���ķ� �����ϱ�

#include <stdio.h>

int main_boublesort1()
{
	int a[] = { 20,40,50,10,30 };
	printf("���� �迭: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int n = 5;
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
		printf("�ٲ� �迭: ");
		for (int k = 0; k < n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	return 0;
}