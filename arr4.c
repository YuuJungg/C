#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_arr4()
{
	int arr[50][50];
	int n, i, j, temp;

	printf("배열 크기 입력(2보다 큰 정수) : ");
	scanf("%d", &n);

	srand(time(NULL));

	// 랜덤 값 이차원 배열에 저장하기
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}
	// 랜덤 값 출력
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 2차원 배열에서 정렬하기
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

	//결과
	printf("오름차순으로 정렬된 배열\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//오름차순으로 정렬된 arr ㄹ로 다시 정렬
	printf("'ㄹ'모양으로 정렬\n");
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