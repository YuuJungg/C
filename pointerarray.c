#include <stdio.h>
int main()
{
	char* arr[3]; // ������ �迭 ����
	// int�� ������ �迭�� �����ϸ� ���ڸ� ������ �ȴ�. 

	arr[0] = "Kknok";   // arr[0], arr[1], arr[2]�� ���ڿ� �ּ� ����Ŵ
	arr[1] = "������ �迭";
	arr[2] = "Today is 2020.4.15";

	for (int i = 0; i < 3; i++)
		printf("arr[%d] : %s\n", i, arr[i]);

	return 0;
}