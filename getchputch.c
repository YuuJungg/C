#include <stdio.h>

int main()
{
	//getch(), putch()��ȯ�� int
	int ch;

	printf("�Է�>> ");
	ch = getch();   //�Է����ڸ���
	printf("�Է� ����>> ");
	putch(ch);    //���� ���

	return 0;
}