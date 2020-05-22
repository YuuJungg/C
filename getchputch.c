#include <stdio.h>

int main()
{
	//getch(), putch()반환형 int
	int ch;

	printf("입력>> ");
	ch = getch();   //입력하자마자
	printf("입력 문자>> ");
	putch(ch);    //문자 출력

	return 0;
}