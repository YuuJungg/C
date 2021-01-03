/*
2021-01-03
C언어로 쉽게 풀어쓴 자료구조 공부
작성자 : 조유정
*/
#include <stdio.h>

void swap(int* px, int* py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 1, b = 2;
	printf("swap을 호출하기 전 : a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("swap을 호출한 다음 : a=%d, b=%d\n", a, b);
	return 0;
}