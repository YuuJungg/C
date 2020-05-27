#include <stdio.h>
#include <time.h>
#include <math.h>

int main()
{
	srand(time(NULL));
	int RandNum[3000];
	int Rnum;
	int v;
	int max, min;
	int x = 0;	
	int c1 = 0;
	int c2 = 0;

	Rnum = rand() % 98 + 3; // 3~100 사이의 랜덤한 값
	v = rand() % 2701 + 3; // 300~3000 사이의 랜덤한 값
	for (int i = 0; i < Rnum; i++) // Rnum번 반복해서 난수 생성
	{
		RandNum[i] = rand() % 901 + 10;
		// 10~1000 사이의 랜덤한 값
		// a~b사이의 랜덤 값 구할 때: a~(b-1+a). randTemp=rand()%b+a
		printf("%d ", RandNum[i]);
	}
	printf("\n V : %d\n", v);

	max = RandNum[0];
	min = RandNum[0];
	for (int i = 0; i < Rnum; i++) // 최대 최소값 구하기
	{
		if (RandNum[i] > max)
			max = RandNum[i];
		if (RandNum[i] < min)
			min = RandNum[i];
	}
	printf("제일 큰 수 = %d\n", max);
	printf("제일 작은 수 = %d\n", min);

	for (int i = 0; i < Rnum; i++)
	{
		if (RandNum[i] >= v) // v와 차이 구하기
			c1 = RandNum - v;
		else
			c2 = v - RandNum[i];

		if (c1 < c2) //제일 작은 수 값이 인접한 값
			x = RandNum[i];
		else
			x = RandNum[i];
	}
	
	if ((max + min) > v) //최대최소 더한 값이 v보다 크면 -1
		printf("-1\n");
	else
		printf("%d를 선택하는 것이 게임에서 승리할 수 있다.\n", x);
}