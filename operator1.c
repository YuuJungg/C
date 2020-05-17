#include <stdio.h>
int main_operator1()
{
	int x;
	printf("정수 x 입력>> ");
	scanf_s("%d", &x);

	printf("현재 x의 값: %d\n", x);
	printf("x++ = %d\n", x++);
	printf("x++ 이후의 x 값\n");
	printf("x = %d\n\n", x);

	printf("현재 x의 값: %d\n", x);
	printf("x-- = %d\n", x--);
	printf("x-- 이후의 x 값\n");
	printf("x = %d\n\n", x);

	printf("현재 x의 값: %d\n", x);
	printf("++x = %d\n", ++x);
	printf("++x 이후의 x 값\n");
	printf("x = %d\n\n", x);

	printf("현재 x의 값: %d\n", x);
	printf("--x = %d\n", --x);
	printf("--x 이후의 x 값\n");
	printf("x = %d\n\n", x);

	return 0;
}
