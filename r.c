#include <stdio.h>

int main()
{
	char str[100]; //문자열 저장할 공간
	char name[20];
	int id;

	FILE* fp = fopen("my_info.txt", "r");

	if (fp == NULL)
	{
		printf("해당 파일을 열 수 없습니다!!!\n");
		return -1; // 비정상 종료
	}
	
	// fp에 있는 정보를 str에 저장
	while(fgets(str, 100, fp))
		printf("%s",str);	
	fclose(fp);    // 파일 포인터 닫기

	return 0;
}