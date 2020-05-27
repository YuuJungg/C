#include <stdio.h>

int strcompare(char* arr1, char* arr2);
int main()
{
	char a[10] = "abcdef";
	char b[10] = "abcdef";
	int result = strcompare(a, b);
	if (result == 0)
		printf("두 문자열은 같습니다\n");
	else
		printf("두 문자열은 같지 않습니다\n");

}

// 두 문자열 비교함수 
int strcompare(char* arr1,char *arr2)
{
	// 두 문자열 중 하나 또는 두개가 끝날 때까지 검사
	// 문자열을 차례대로 검사하면서 
	for (; (*arr1 != '\0') || (*arr2 != '\0'); arr1++, arr2++)
	{
		if (*arr1 != *arr2)
			return 1; //같지 않으면
	}
	return 0; //같으면
}