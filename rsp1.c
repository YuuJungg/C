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
		printf("���� ���� ��! (����=s, ����=r, ��=p)\n");
		scanf_s(" %c", &me);

		// ����� �Է� ���
		printf("����� : ");
		switch (me)
		{
		case 's':
			me = 1;
			printf("����\n");
			break;
		case 'r':
			me = 2;
			printf("����\n");
			break;
		case 'p':
			me = 3;
			printf("��\n");
			break;
		}
		// 1~3
		com = rand() % 3 + 1;

		// ��ǻ�� �Է� ���
		printf("��ǻ�� : ");
		switch (com)
		{
		case 1:
			printf("����\n");
			break;

		case 2:
			printf("����\n");
			break;

		case 3:
			printf("��\n");
			break;
		}

		// ���� ��� ���
		if ((me == 1 && com == 3) || (me == 2 && com == 1) || (me == 3 && com == 2))
			printf("����� ��!\n");
		else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1))
			printf("��ǻ�� ��!\n");
		else
			printf("�����ϴ�!\n");

	}
	return 0;
}