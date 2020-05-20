#include <stdio.h>

int fib(int n);

int main_fib(void)
{
	int i, num; // ���� �̸��� ���� ���� �����Ӱ� ����

	printf("������ �˾ƺ����? : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printf("%d ", fib(i));
	printf("\n");

	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	int i, result;
	int cur = 1;
	int last = 0;

	for (i = 1; i < n; i++)
	{
		result = cur;
		cur = last + cur;
		last = result;
	}
	return cur;
}