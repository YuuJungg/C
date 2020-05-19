/*
다이아몬드 출력하기
홀수는 위에가 1
짝수는 위에가 2부터 시작
*/

#include <stdio.h>
int main()
{
	int input;
	printf("input : ");
	scanf_s("%d", &input);

	if (input % 2 == 0)
	{
		for (int i = 0; i < input - 1; i++)
		{

			for (int j = input - 2; j > i; j--)
				printf(" ");
			for (int j = 0; j < 2 * i + 2; j++)
				printf("*");
			printf("\n");
		}

		for (int i = 1; i < input - 1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 2 * input - 4; j > 2 * i - 2; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else
	{

		for (int i = 0; i < input; i++)
		{

			for (int j = input - 1; j > i; j--)
				printf(" ");
			for (int j = 0; j < 2 * i + 1; j++)
				printf("*");
			printf("\n");
		}

		for (int i = 1; i < input; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 2 * input - 1; j > 2 * i; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

}
