#include <stdio.h>

int main()
{
	int var = 10;
	// int�� 4����Ʈ�̱� ������ �ּҰ� 4����Ʈ�� �޸� ũ��� ����
	int* ptr = &var;

	printf("���� �� | ");
	printf("var : %d", var);
	printf("   |   *ptr : %d", *ptr);
	printf("           |   ptr : %d\n", ptr);

	ptr += 1;

	printf("���� �� | ");
	printf("var : %d", var);
	printf("   |   *ptr : %d", *ptr);
	printf("   |   ptr : %d\n", ptr);

	return 0;
}