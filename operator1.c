#include <stdio.h>
int main_operator1()
{
	int x;
	printf("���� x �Է�>> ");
	scanf_s("%d", &x);

	printf("���� x�� ��: %d\n", x);
	printf("x++ = %d\n", x++);
	printf("x++ ������ x ��\n");
	printf("x = %d\n\n", x);

	printf("���� x�� ��: %d\n", x);
	printf("x-- = %d\n", x--);
	printf("x-- ������ x ��\n");
	printf("x = %d\n\n", x);

	printf("���� x�� ��: %d\n", x);
	printf("++x = %d\n", ++x);
	printf("++x ������ x ��\n");
	printf("x = %d\n\n", x);

	printf("���� x�� ��: %d\n", x);
	printf("--x = %d\n", --x);
	printf("--x ������ x ��\n");
	printf("x = %d\n\n", x);

	return 0;
}
