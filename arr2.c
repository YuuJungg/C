// 1~16 수를 오른쪽으로 90도 돌리기 version 2

#include <stdio.h>

int main_arr2()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int temp[4][4] = {0, };


	printf("원래 배열\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			// temp배열에 arr복사
			temp[i][j] = arr[i][j];
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 오른쪽으로 90도 회전한 값 arr에 넣기
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr[j][3 - i] = temp[i][j];
	}

	// 회전된 값 출력
	printf("오른쪽으로 90도 회전 배열\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}