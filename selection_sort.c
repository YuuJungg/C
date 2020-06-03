#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
#define SWAP(x,y,t) ((t)=(x), (x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;

void selection_sort(int list[], int n)
{
	int i, j, least, temp;
	for (i = 0; i < n - 1; j++)
	{
		least = i;
		for (j = i + 1; j < n; j++) // 최소값 탐색
		{
			if (list[j] < list[least])
				least = j;
			SWAP(list[i], list[least], temp);
		}
	}
}

int main()
{
	int i;
	n = MAX_SIZE;
	srand(time(NULL));
	for (i = 0; i < n; i++) // 난수 발생
		list[i] = rand() % 100; // 난수 0-99

	selection_sort(list, n);
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");
	return 0;
}