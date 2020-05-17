// 1~16 수를 오른쪽으로 90도 돌리기 version 1

#include <stdio.h>

int main_arr1()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

	int col = sizeof(arr[0]) / sizeof(int);  //sizeof(배열이름[0])/sizeof(자료형)
	int row = sizeof(arr) / sizeof(arr[0]);  //sizeof(배열이름)/sizeof(배열이름[0])


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < row; i++)
	{
		for (int j = col - 1; j >= 0; j--)
			printf("%2d ", arr[j][i]);
		printf("\n");
	}
	return 0;
}