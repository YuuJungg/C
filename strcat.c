#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];

	strcpy(str, "Today "); // Today를 str문자열에 복사하고
	strcat(str, "is "); // 뒤에 붙이기
	strcat(str, "4.");
	strcat(str, "19");

	puts(str);

	return 0;
}