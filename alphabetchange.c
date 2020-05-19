#include <stdio.h>

int main_alphabetchange()
{
	char str[10];

	printf("입력>> ");
	scanf("%s ", str, 10);

	for (int i = 0; i < 10; i++)
	{
		// 소문자 변환
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		// 대문자 변환
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	printf("결과>> %s\n", str);

	return 0;
}