#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr = NULL;
	int size;
	int i;

	printf("배열의 크기 : ");
	scanf("%d", &size);
	ptr = (int*)malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
	{
		printf("%d번째 값 입력 : ", i + 1);
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < size; i++)
		printf("%2d", ptr[i]);
	printf("\n");

	free(ptr);
	return 0;
}