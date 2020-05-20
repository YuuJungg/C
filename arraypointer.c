#include <stdio.h>

int main()
{
	char(*arr)[3];
	char arr1[3] = { 'c','y','j' };
	char arr2[3] = { 'h','i','\n' };

	//인덱스 개수가 3인 배열 포인터를 선언했는데 5개여서 가리키기 불가.
	char arr3[5] = { 'h','e','l','l','o' };

	arr = &arr1; // 배열 인덱스 3개인 배열 포인터가 arr1의 주소를 가리킨다.
	printf("arr1 문자열 : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]); // 문자 하나니까 %c
	printf("\n");

	arr = &arr2;
	printf("arr2 문자열 : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]);

	arr = &arr3;
	printf("arr3 문자열 : ");
	for (int i = 0; i < (int)sizeof(*arr); i++)
		printf("%c", (*arr)[i]);
	printf("\n");
}