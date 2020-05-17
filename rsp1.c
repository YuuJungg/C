#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char me;
	int com;
	int result;

	srand(time(NULL));

	while (1)
	{
		printf("가위 바위 보! (가위=s, 바위=r, 보=p)\n");
		scanf_s(" %c", &me);

		// 사용자 입력 출력
		printf("사용자 : ");
		switch (me)
		{
		case 's':
			me = 1;
			printf("가위\n");
			break;
		case 'r':
			me = 2;
			printf("바위\n");
			break;
		case 'p':
			me = 3;
			printf("보\n");
			break;
		}
		// 1~3
		com = rand() % 3 + 1;

		// 컴퓨터 입력 출력
		printf("컴퓨터 : ");
		switch (com)
		{
		case 1:
			printf("가위\n");
			break;

		case 2:
			printf("바위\n");
			break;

		case 3:
			printf("보\n");
			break;
		}

		// 게임 결과 출력
		if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
			printf("사용자 승!\n");
		else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1))
			printf("컴퓨터 승!\n");
		else
			printf("비겼습니다!\n");

	}
	return 0;
}