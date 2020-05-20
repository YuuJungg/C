#include <stdio.h>

int main()
{
	int var = 10;
	// int가 4바이트이기 때문에 주소가 4바이트의 메모리 크기로 증가
	int* ptr = &var;

	printf("변경 전 | ");
	printf("var : %d", var);
	printf("   |   *ptr : %d", *ptr);
	printf("           |   ptr : %d\n", ptr);

	ptr += 1;

	printf("변경 후 | ");
	printf("var : %d", var);
	printf("   |   *ptr : %d", *ptr);
	printf("   |   ptr : %d\n", ptr);

	return 0;
}