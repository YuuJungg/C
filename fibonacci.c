#include <stdio.h>

int fibonacci1(int n);  //��� �Ǻ���ġ

int main_fibonacci1(void)
{
	int i, num;

	printf("������ �˾ƺ����? : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		printf("%d ", fibonacci1(i));
	printf("\n");

	return 0;
}

int fibonacci1(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci1(n - 1) + fibonacci1(n - 2);
}