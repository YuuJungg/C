#include <stdio.h>

int main_alphabetchange()
{
	char str[10];

	printf("�Է�>> ");
	scanf("%s ", str, 10);

	for (int i = 0; i < 10; i++)
	{
		// �ҹ��� ��ȯ
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		// �빮�� ��ȯ
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	printf("���>> %s\n", str);

	return 0;
}