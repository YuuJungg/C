#include <stdio.h>

int main()
{
	int n;
	int arr[100][100];

	scanf("%d", &n);
	printf("\n");

	for (int i = 0; i < n; i++) //배열 입력
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");	
	
	// 1행 수 비교해 0,1로 바꾸기
	for (int i = 0; i < n-1; i++) // n=5
	{
		if (arr[0][i] > arr[0][i + 1])
		{
			arr[0][i] = 1;
			arr[0][i + 1] = 1;
		}
		if (arr[0][i] < arr[0][i + 1])
			arr[0][i + 1] = 0;
		if (arr[0][i] == 0)
		{
			for (i ; i < n; i++)
				arr[0][i] = 0;
		}
	}

	// 1열 수 비교해 0,1로 바꾸기
	for (int i = 0; i < n - 1; i++) // n=5
	{
		if (arr[i][0] > arr[i + 1][0])
			arr[i][0] = 1;
		if (arr[i][0] < arr[i + 1][0])
			arr[i][0] = 1;
			arr[i+1][0] = 0;
	}

	// 배열 나누어서 두줄 먼저 바꾸기
	for (int i = 1; i < n; i++)
	{
		if(arr[1][i] < arr[2][i])
		{
			arr[1][i] = 1;
			arr[2][i] = 0;
		}
		
	}

	// 나머지 두줄 바꾸기
	for (int i = 1; i < n-1; i++)
	{
		if ((arr[3][i] > arr[3][i + 1]) && (arr[3][i] > arr[4][i]))
		{
			arr[3][i] = 1;
			arr[4][i] = 1;
		}
		if ((arr[3][i] > arr[3][i + 1]) && (arr[3][i] < arr[4][i]))
		{
			arr[3][i] = 1;
			arr[4][i] = 0;
		}
		if ((arr[3][i] < arr[3][i + 1]) && (arr[3][i] > arr[4][i]) && (arr[4][i] > arr[4][i + 1]))
		{
			arr[3][i] = 1;
			arr[4][i] = 1;
			arr[3][i + 1] = 0;
			arr[4][i + 1] = 1;
		}	
	
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

