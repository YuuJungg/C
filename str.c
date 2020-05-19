// 문자열 속성

#include <stdio.h>

int main_str()
{
	char str[30] = "I am yu jung";
	printf("%s\n", str);

	str[7] = '\0';
	printf("%s\n", str);

	str[4] = '\0';
	printf("%s\n", str);

	str[1] = '\0';
	printf("%s\n", str);

	return 0;
}
