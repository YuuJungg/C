#include <stdio.h>

char strplus(char* arr1, char* arr2);
int main()
{
	char str1[10] = "hello ";
	char str2[10] = "world";
	strplus(str1, str2);
}

// 두 문자열 붙이기 함수
char strplus(char* arr1,char *arr2)
{
	// arr1이 끝나기 전까지 몇갠지 세어준다
	int i = 0;
	while (arr1[i] != '\0') 
		i++;

	// arr2도 끝나기 전까지 몇갠지 세어주는데
	// arr1 끝난 다음 배열 인덱스에 저장해준다
	// 저장이 끝나면 arr1에 끝났다는 '\0' 표시해주고
	// arr1 출력
	int j = 0;
	while (arr2[j] != '\0')
		arr1[i++] = arr2[j++];
	arr1[i] = '\0';

	printf("%s\n", arr1);

}