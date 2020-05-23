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
    int size = 3; // 최소 전화번호부 3명

    info = (Phone*)calloc(size, sizeof(int));

    printf("<전화번호부>\n");
    while (!done)
    {
        while (!done)
        {
            printf("*%d번째 전화번호부*\n", i + 1);
            while (1) // 이름을 잘 입력할 때까지 반복
            {
                printf("이름>> ");
                scanf("%s", info[i].name);
                if (strlen(info[i].name) > 15)
                    printf("입력 가능한 글자수를 초과하였습니다\n");
                else
                    break;
            }
            printf("전화번호>> ");
            scanf("%s", &info[i].number);

            // strcmp함수는 같으면 0을 반환하므로 
            if (strcmp(info[i].name, info[i + 1].name) == 0 && strcmp(info[i].number, info[i + 1].number) == 0)
                printf("중복되었습니다.\n");

            if ((i + 1) >= size)
            {
                printf("\n입력할 전화번호부가 더 없으면 1, 있으면 0 입력 >> ");
                scanf("%d", &done);

                if (done)
                    continue;
                else
                {
                    temp = size; // temp=3
                    printf("추가된 전화번호부 사람 수 : ");
                    scanf("%d", &size);// size=2
                    size += temp;
                    info = (int*)realloc(info,size);
                }
            }
            i++;
        }


    }

    printf("\n<전화번호부에 입력된 사람>\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", i + 1);
        printf("이름>> %s\n", info[i].name);
        printf("전화번호>> %s\n", info[i].number);

    }
	
    free(info);
    return 0;
}