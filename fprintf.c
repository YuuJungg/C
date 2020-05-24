#include <stdio.h>

int main()
{
	char fruits[] = "fruit.txt";
	char fruit[100];
	
	FILE *f;
	
	printf("과일 입력>> ");
	scanf("%s", &fruit);
	
	// fruit.txt 열기
	if((f = fopen(fruits, "w")) == NULL)
	{
		printf("에러");
		return -1;
	}
	
	// fruit.txt 출력
	fprintf(f, "%s", fruit);
	
	fclose(f);
}