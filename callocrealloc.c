#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* record;
	int done = 0;
	int i = 0;
	int temp;
	int size = 3;  // 최소 참가자 3명

	record = (int*)calloc(size, sizeof(int));

	printf("타자 대회\n");
	while (!done)
	{
		printf("%d번째 참가자의 기록 : ", i + 1);
		scanf("%d", &record[i]);

		if ((i + 1) >= size)
		{
			printf("\n참여자가 더 없으면 1, 있으면 0 입력 >> ");
			scanf("%d", &done);
			
			if (done)
				continue;
			else
			{
				temp = size;
				printf("추가된 참여자 수 : ");
				scanf("%d", &size);
				size += temp;
				record = (int*)realloc(record, size);
			}
		}
		i++;
	}
	printf("\n결과\n");
	for (i = 0; i < size; i++)
		printf("%d번째 참가자의 기록 : %d타\n", i + 1, record[i]);

	free(record);
	return 0;
}