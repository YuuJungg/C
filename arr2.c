// 1~16 ���� ���������� 90�� ������ version 2

#include <stdio.h>

int main_arr2()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int temp[4][4] = {0, };


	printf("���� �迭\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			// temp�迭�� arr����
			temp[i][j] = arr[i][j];
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// ���������� 90�� ȸ���� �� arr�� �ֱ�
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr[j][3 - i] = temp[i][j];
	}

	// ȸ���� �� ���
	printf("���������� 90�� ȸ�� �迭\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}