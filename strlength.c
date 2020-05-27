#include <stdio.h>

int strlength(char* arr);
int main()
{
	char arr[] = "abcdef";
	strlength(arr);
}

// 배열안에 문자를 포인터 변수로 받아서 길이 세는 함수
int strlength(char* arr)
{
	int i = 0; 

	// 포인터 arr값이 있을 때까지 반복
	while (arr[++i]); 
	printf("%d", i); // 개수출력
	printf("\n");
}