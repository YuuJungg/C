#include <stdio.h>
int a, b, result;
int main_operator4()
{
	int a = 15;  //00000000 00000000 00000000 00001111
	int b = 20;  //00000000 00000000 00000000 00010100

	int result = a & b; //a와 b의 비트 & 연산 
	// 00000000 00000000 00000000 00000100 
	// 2의 0승*0 + 2의 1승*0 + 2의 2승*1 = 4
	// result는 4

	printf("비트 &연산 결과: %d \n", result);
	return 0;
}
