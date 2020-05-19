#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_arr4()
{
	int arr[50][50];
	int n, i, j, temp;

	printf("�迭 ũ�� �Է�(2���� ū ����) : ");
	scanf("%d", &n);

	srand(time(NULL));

	// ���� �� ������ �迭�� �����ϱ�
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}
	// ���� �� ���
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 2���� �迭���� �����ϱ�
	for (int i = 0; i < (n * n) - 1; i++)
	{
		for (int j = 0; j < (n * n) - 1 - i; j++)
		{
			if (arr[j / n][j % n] > arr[(j + 1) / n][(j + 1) % n])
			{
				temp = arr[j / n][j % n];
				arr[j / n][j % n] = arr[(j + 1) / n][(j + 1) % n];
				arr[(j + 1) / n][(j + 1) % n] = temp;
			}
		}
	}

	//���
	printf("������������ ���ĵ� �迭\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr[i][j]);
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
				printf("%2d ", arr[i][j]);
			printf("\n");
		}
		else
		{
			for (j = n - 1; j >= 0; j--)
				printf("%2d ", arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}