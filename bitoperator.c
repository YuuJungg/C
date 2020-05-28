#include <stdio.h>

int a, b, result;
int main()
{
	int a = 15; // 00000000 00000000 00000000 00001111
	int b = 20; // 00000000 00000000 00000000 00010100
	
	int and = a & b;
	int or = a | b;
	int xor = a ^ b;
	int nota = ~a;
	int notb = ~b;
	int lshift = a << 1;
	int rshift = a >> 2;
	printf("비트 & 연산 결과: %d\n", and);
	printf("비트 | 연산 결과: %d\n", or);
	printf("비트 ^ 연산 결과: %d\n", xor);
	printf("비트 ~a 연산 결과: %d\n", nota);
	printf("비트 ~b 연산 결과: %d\n", notb);
	printf("비트 << 연산 결과: %d\n", lshift);
	printf("비트 >> 연산 결과: %d\n", rshift);
	return 0;
	
}