#include <stdio.h>

void swap(int* a, int* b);

int main_callbyreference()
{
	int a, b;
	a = 10;
	b = 20;

	printf("swap 전 : %d %d\n", a, b);
	swap(&a, &b);
	printf("swap 후 : %d %d\n", a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("swap 함수 내에서 값 : %d %d\n", *a, *b);
}