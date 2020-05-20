#include <stdio.h>
int main()
{
	char* arr[3]; // 포인터 배열 선언
	// int형 포인터 배열을 선언하면 숫자를 넣으면 된다. 

	arr[0] = "Kknok";   // arr[0], arr[1], arr[2]는 문자열 주소 가리킴
	arr[1] = "포인터 배열";
	arr[2] = "Today is 2020.4.15";

	for (int i = 0; i < 3; i++)
		printf("arr[%d] : %s\n", i, arr[i]);

	return 0;
}