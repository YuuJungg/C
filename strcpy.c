#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "hello ";
	char s2[10];
	
	// s1의 문자열을 s2로 복사
	strcpy(s2, s1);
	printf("%s\n", s1); // hello
	
	return 0;
	
	
}