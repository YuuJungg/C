/*
2021-01-03
C언어로 쉽게 풀어쓴 자료구조 공부
작성자 : 조유정
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10

int main()
{
	int* p;
	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL)
	{
		fprintf(stderr, "메모리가 부족해서 할당할 수 없음.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
		p[i] = i;
	for (int i = 0; i < SIZE; i++)
		printf("%d ", p[i]);
	printf("\n");	
		
	free(p);
	return 0;
}