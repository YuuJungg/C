#include <stdio.h>
int a, b, result;
int main_operator4()
{
	int a = 15;  //00000000 00000000 00000000 00001111
	int b = 20;  //00000000 00000000 00000000 00010100

	int result = a & b; //a�� b�� ��Ʈ & ���� 
	// 00000000 00000000 00000000 00000100 
	// 2�� 0��*0 + 2�� 1��*0 + 2�� 2��*1 = 4
	// result�� 4

	printf("��Ʈ &���� ���: %d \n", result);
	return 0;
}
