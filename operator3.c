#include <stdio.h>
int main_operator3()
{
	int a = 1, b = 2, c = 15;
	a += 4; // a = a + 4;
	b *= 5; // b = b * 5;
	c %= 6; // c = c % 6;

	printf("result: %d, %d, %d \n", a, b, c);
	return 0;
}
