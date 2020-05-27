#include <stdio.h>	

int main()
{
	char str[50] = { 0, }; // 문자열을 입력 받을 배열
	char arr[5] = { 0, }; // .을 기준으로 X개수 입력 받을 배열
	int i = 0, j = 0, k = 0;
	int temp = 0;

	printf("글자블록을 입력하세요(X or .):  ");
	scanf("%s", str, 30);

	while (str[i] != NULL)
	{
		if (str[i] == 'X')	
		{
			j++; // X나오면 j에 추가
		}
		else if (str[i] == '.')
		// .이 나오면 j를 arr 배열에 저장하고 j 초기화
		{
			arr[k] = j;
			j = 0;
			k++; // arr배열 인덱스 값
		}
		i++;
	}
	arr[k] = j; //마지막 arr값에 j 값 넣기

	// .개수 +1 반복
	for (int i = 0; i < k + 1; i++)
	{
		// X개수 홀수면 -1
		if (arr[i] % 2 == 1)
		{
			printf("-1\n");
			return 0;
		}

		int A = arr[i] / 4;  // X개수를 4로 나눈 몫을 저장
		int B = arr[i] % 4;  // X개수를 4로 나눈 나머지를 저장

		for (int j = 0; j < A; j++)
		{
			for (int i = 0; i < 4; i++)
			{
				str[temp] = 'A';
				temp++;
			}
		}

		// 4로 나눈 나머지가 있으면
		if (B != 0) 
		{
			for (int i = 0; i < 2; i++)
			{
				str[temp] = 'B';
				temp++;
			}
		}
		if (i != k) // .을 찍어주는 위치
			str[temp] = '.';
		temp++;

	}
	printf("%s \n", str);
	return 0;
}


