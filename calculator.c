#include <stdio.h>

int main_calculator()
{
	int a, b;
	char c;

	printf("첫번째 숫자>> ");
	scanf_s("%d", &a);
	printf("연산자>> ");
	scanf_s(" %c", &c);
	printf("두번째 숫자>> ");
	scanf_s("%d", &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case '/':
		if (b == 0)
			printf("0은 나눌 수 없습니다.\n");
		else
			printf("%d / %d = %d\n", a, b, a / b);
		break;
	default:
		printf("연산자를 다시 입력하세요 \n");
	}
	return 0;
}



