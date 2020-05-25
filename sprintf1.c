#include <stdio.h>

int main()
{
	char str[100]; // 선언된 곳의 주소를 받는다
	int temp = 4; 

	// str은 버퍼로 사용될 공간 나타냄
	sprintf(str, "%d월 입니다~", temp); // 문자열 저장
	printf("%s\n", str); // 문자열 출력

	return 0;
}

