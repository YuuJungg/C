#include <stdio.h>

int main_indexexchange()
{
	int n = 0;
	int arr[25] = { 0, };
	int temp = 0;
	int min = 0;
	int secondmin = 0;
	int max = 0;
	int secondmax = 0;

	printf("�Է��� ���� ����(n)�� �Է��Ͻÿ�(1<n<=20) : "); // 5
	scanf("%d", &n);

	printf("%d�� ���ڸ� �Է��ϼ���: ", n);
	for (int i = 0; i < n; i++) // 4
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[max])
		{
			secondmax = max;
			max = i;
		}
		else if ((arr[secondmax] < arr[i]) && (arr[i] < arr[max]))
			secondmax = i;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[min])
		{
			secondmin = min;
			min = i;
		}
		else if ((arr[min] < arr[i]) && (arr[i] < arr[secondmin]))
			secondmin = i;
	}

	temp = arr[secondmin];
	arr[secondmin] = arr[secondmax];
	arr[secondmax] = temp;

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}