#include <stdio.h>

int main()
{
	char fruits[] = "fruit.txt";
	char fruit[100];
	
	FILE *f;
	
	printf("과일 입력>> ");
	scanf("%s", &fruit);
	
	// fruit.txt 읽기
	if((f = fopen(fruits, "r")) == NULL)
	{
		printf("에러");
		return -1;
	}
	
	// 읽기
	fscanf(f, "%s", fruit);
	printf("과일>> %s\n", fruit); // 출력
		
	fclose(f);
}