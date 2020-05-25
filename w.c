#include <stdio.h>

int main()
{
	char name[20];
	int id;
	
	FILE *fp = fopen("my_info.txt", "w+");
	
	printf("이름 : ");
	scanf("%s", name);
	
	printf("학번 : ");
	scanf("%d", &id);
	
	fprintf(fp, "이름 : %s\n학번 : %d\n", name, id);
	
	fclose(fp);
	return 0;
	
	
}