#include <stdio.h>

void swap(int* a, int* b);

int main_callbyreference()
{
	int a, b;
	a = 10;
	b = 20;

	printf("swap �� : %d %d\n", a, b);
	swap(&a, &b);
	printf("swap �� : %d %d\n", a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("swap �Լ� ������ �� : %d %d\n", *a, *b);
}