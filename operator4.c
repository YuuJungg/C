#include <stdio.h>
int a, b, result;
<<<<<<< HEAD
int main_operator4()
=======
int main()
>>>>>>> aabe773d80ec25d5c61995e51c33e5ec2b4b2195
{
	int a = 15;  //00000000 00000000 00000000 00001111
	int b = 20;  //00000000 00000000 00000000 00010100

<<<<<<< HEAD
	int result = a & b; //a�� b�� ��Ʈ & ���� 
	// 00000000 00000000 00000000 00000100 
	// 2�� 0��*0 + 2�� 1��*0 + 2�� 2��*1 = 4
	// result�� 4

	printf("��Ʈ &���� ���: %d \n", result);
=======
	int result = a & b; //a와 b의 비트 & 연산 
	// 00000000 00000000 00000000 00000100 
	// 2의 0승*0 + 2의 1승*0 + 2의 2승*1 = 4
	// result는 4

	printf("비트 &연산 결과: %d \n", result);
>>>>>>> aabe773d80ec25d5c61995e51c33e5ec2b4b2195
	return 0;
}
