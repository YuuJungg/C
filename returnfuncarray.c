#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int func(int* arr, int n);
int sort(int* arr, int n);
int main()
{	
	srand(time(NULL));
	int arr[5];
	int i = 0;
	int n = 5;
	printf("처음 배열 : "); 
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 30;
		printf("%d ", arr[i]);
	}	
	printf("\n");
	printf("바뀐 배열 : ");
	int array[5]={0,};
	for (int i = 0; i < 5; i++)
		array[i] = sort(arr, i);
	for (int i = 4; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

//최대값 위치 구하는 함수
int func(int* arr,int n) 
{	
	int m = 0;
	if (n == 4)
		return n;

	m = func(arr, n + 1);
	if (arr[m] < arr[n])
		return n;
	else
		return m;
}
// 정렬하는 함수
int sort(int *arr, int n) 
{
	int minindex=func(arr, n);
	int temp = arr[minindex];
	arr[minindex] = arr[n];
	arr[n] = temp;
	return arr[n];
}