#include <stdio.h>

int main_calculator()
{
	int a, b;
	char c;

	printf("ù��° ����>> ");
	scanf_s("%d", &a);
	printf("������>> ");
	scanf_s(" %c", &c);
	printf("�ι�° ����>> ");
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
			printf("0�� ���� �� �����ϴ�.\n");
		else
			printf("%d / %d = %d\n", a, b, a / b);
		break;
	default:
		printf("�����ڸ� �ٽ� �Է��ϼ��� \n");
	}
	return 0;
}



