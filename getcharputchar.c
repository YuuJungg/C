#include <stdio.h>

int main()
{
	//getchar(), putchar()반환형 int
	int ch;

	ch = getchar(); //문자 입력
	putchar(ch);    //문자 출력
	putchar('\n');  //줄바꿈

	return 0;
}