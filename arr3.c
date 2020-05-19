#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_arr3()
{
	int arr1[50][50];
	int arr2[50];
	int n, i, j, temp;

	printf("�迭 ũ�� �Է�(2���� ū ����) : ");
	scanf("%d", &n);

	srand(time(NULL));

	// ���� �� ������ �迭�� �����ϱ�
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr1[i][j] = rand() % 10 + 1;
		}
	}
	// ���� �� ���
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//arr1�迭�� 1���� �迭 arr2���� ����
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			arr2[i * n + j] = arr1[i][j];
	}
	for (i = 0; i < n * n - 1; i++)
	{
		for (j = 0; j < n * n - 1 - i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	//���ĵ� �迭 �� �ٽ� arr1�迭�� ����
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			arr1[i][j] = arr2[i * n + j];
	}

	//���
	printf("������������ ���ĵ� �迭\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//������������ ���ĵ� arr ���� �ٽ� ����
	printf("'��'������� ����\n");
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < n; j++)
				printf("%2d ", arr1[i][j]);
			printf("\n");
		}
		else
		{
			for (j = n - 1; j >= 0; j--)
				printf("%2d ", arr1[i][j]);
			printf("\n");
		}
	}
	return 0;
}