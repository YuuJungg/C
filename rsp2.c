#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_rsp2()
{
	// 한글은 2byte차지
	// 가위 => 2*2+1(\n) = 5
	char hand[3][5] = { "가위", "바위", "보" };
	int me;
	int com;
	int result;

	srand(time(NULL));

	while (1)
	{
		printf("가위 바위 보! (가위=0, 바위=1, 보=2)\n");
		scanf_s(" %d", &me);

		com = rand() % 3; // 0~2

		// 입력값 출력
		printf("사용자 : %s\n", hand[me]);
		printf("컴퓨터 : %s\n", hand[com]);

		// 게임 결과 출력
		result = me - com;
		if (me == com) // 뺀 결과가 같으면
			printf("비겼습니다!\n");
		else if (result == 1 || result == -2)
			printf("사용자 승!\n");
		else if (result == 2 || result == -1)
			printf("컴퓨터 승!\n");
	}
	return 0;
}