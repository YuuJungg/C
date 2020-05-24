#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 전화번호부 구조체 생성
typedef struct PhoneNumber Phone;
struct PhoneNumber {
    char name[100];
    char number[100];
};

int main()
{
	Phone* info = 0;
    int done = 0;
    int i = 0;
    int temp;
    int size = 0;
    char buffer[1000];
	char buffer2[1000];
	int num=0;
 
    FILE* f1 = fopen("phone_num1.txt", "a+");  
    printf("입력 연락처 수>> ");
    scanf("%d", &size);
    info = (Phone*)calloc(size, sizeof(int)); 
	
	// f1에 파일이 없으면
	if(fgets(buffer, sizeof(buffer), f1) == NULL)
	{
		while (!done)
		{
			while (!done)
			{
				while (1) // 이름을 잘 입력할 때까지 반복
				{
					printf("이름 : ");
					scanf("%s", info[i].name);
					if (strlen(info[i].name) > 15)
						printf("입력 가능한 글자수를 초과하였습니다\n");
					else
						break;
				}
				printf("전화번호 : ");
				scanf("%s", &info[i].number);

				// strcmp함수는 같으면 0을 반환하므로 
				if (strcmp(info[i].name, info[i + 1].name) == 0 && strcmp(info[i].number, info[i + 1].number) == 0)
					printf("중복되었습니다.\n");

				if ((i + 1) >= size)
				{
					printf("추가 입력 0, 종료 1 : ");
					scanf("%d", &done);				

					if (done) // 1
					{
						for (i = 0; i < size; i++)
						{
							// 입력받은 연락처 파일에 저장
							fprintf(f1, "%s  %s\n", info[i].name, info[i].number);
						}
						fclose(f1);						
					}
					printf("\n\t===== 전화번호부 =====\n");
					for (i = 0; i < size; i++)
					{
						printf("\t");
						printf("%s %s\n", info[i].name, info[i].number);
					}
					printf("\t======================\n\n\n"); 
					printf("연락처를 자동 백업합니다.\n");				
				}
				i++;
			}

		}
	}
	
	
	// f1에 파일이 있으면
	else
	{
		printf("자동으로 연락처를 복구합니다.\n");
		while (!done)
		{
			while (!done)
			{
				while (1) // 이름을 잘 입력할 때까지 반복
				{
					printf("이름 : ");
					scanf("%s", info[i].name);
					if (strlen(info[i].name) > 15)
						printf("입력 가능한 글자수를 초과하였습니다\n");
					else
						break;
				}
				printf("전화번호 : ");
				scanf("%s", &info[i].number);

				// strcmp함수는 같으면 0을 반환하므로 
				if (strcmp(info[i].name, info[i + 1].name) == 0 && strcmp(info[i].number, info[i + 1].number) == 0)
					printf("중복되었습니다.\n");

				if ((i + 1) >= size)
				{
					printf("추가 입력 0, 종료 1 : ");
					scanf("%d", &done);				

					if (done) // 1
					{
						for (i = 0; i < size; i++)
						{
							// 입력받은 연락처 파일에 저장
							fprintf(f1, "%s  %s\n", info[i].name, info[i].number);
						}
						fclose(f1);
						FILE* f1 = fopen("phone_num1.txt", "r");
						if(f1 == NULL)
							return -1;
						while(!feof(f1)) // 파일 끝까지 읽을 때까지
						{
							fgets(buffer,sizeof(buffer),f1);
							num++;
						}
						fclose(f1);	
					}
					printf("\n\t===== 전화번호부 =====\n");
					FILE* f1 = fopen("phone_num1.txt", "r");
					FILE* f2 = fopen("phone_num2.txt", "w");
					while(fgets(buffer,sizeof(buffer),f1))
						printf("\t%s",buffer);
					fclose(f1);	
					FILE* fr = fopen("phone_num1.txt", "r");
					fprintf(f2,"%d\n",num-1);
					while(1)
					{
						fscanf(fr,"%s %s", buffer, buffer2);
						if(feof(fr))
							break;
						fprintf(f2,"%s %s\n",buffer, buffer2);
					}
					fclose(f2);
					fclose(fr);
					printf("\t======================\n\n\n"); 
					printf("연락처를 자동 백업합니다.\n");					
				}
				i++;
			}

		}
	}
	free(info);
    return 0;		
}
