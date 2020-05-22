#include <stdio.h>
#include <string.h>

// 전화번호부 구조체 생성
struct PhoneNumber {
    char name[20];
    char number[20];
};

int main()
{
    struct PhoneNumber n1, n2; // n1, n2 구조체 변수 선언

    while (1) // 이름을 잘 입력할 때까지 반복
    {
        printf("이름>> ");
        scanf("%s", n1.name);
        if (strlen(n1.name) > 15)
            printf("입력 가능한 글자수를 초과하였습니다\n");
        else
            break;
    }
    printf("전화번호부>> ");
    scanf("%s", n1.number);
    while (1) // n1과 n2를 다르게 입력할 때까지 반복
    {
        while (1) // 이름을 잘 입력할 때까지 반복
        {
            printf("이름>> ");
            scanf("%s", n2.name);
            if (strlen(n2.name) > 15)
                printf("입력 가능한 글자수를 초과하였습니다\n");
            else
                break;
        }
        printf("전화번호부>> ");
        scanf("%s", n2.number);

        // strcmp함수는 같으면 0을 반환하므로 
        if (strcmp(n1.name, n2.name) == 0 && strcmp(n1.number, n2.number) == 0)
            printf("중복되었습니다.\n");
        else
            break;
    }

}