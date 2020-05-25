#include <stdio.h>

int main()
{
	char buffer[50] = "Hello World Hi Bye";
	char str[50];
	char str1[50];
	char str2[50];
	
	// buffer 배열에 저장된 문자열 2개를 str1,str2에 각각 입력받는다.
	sscanf(buffer, "%s %s", str1, str2);
	
	// str배열에 str1, str2의 내용 저장 
	sprintf(str, "%s %s", str1, str2);
	puts(str); // str배열 내용 출력
	return 0;
}