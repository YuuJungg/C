#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_rsp2()
{
	// �ѱ��� 2byte����
	// ���� => 2*2+1(\n) = 5
	char hand[3][5] = { "����", "����", "��" };
	int me;
	int com;
	int result;

	srand(time(NULL));

	while (1)
	{
		printf("���� ���� ��! (����=0, ����=1, ��=2)\n");
		scanf_s(" %d", &me);

		com = rand() % 3; // 0~2

		// �Է°� ���
		printf("����� : %s\n", hand[me]);
		printf("��ǻ�� : %s\n", hand[com]);

		// ���� ��� ���
		result = me - com;
		if (me == com) // �� ����� ������
			printf("�����ϴ�!\n");
		else if (result == 1 || result == -2)
			printf("����� ��!\n");
		else if (result == 2 || result == -1)
			printf("��ǻ�� ��!\n");
	}
	return 0;
}