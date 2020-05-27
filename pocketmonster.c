#include <stdio.h>

// 포켓몬 구조체 생성
struct Pokemon {
    char name[20];
    int strength;
};

int main()
{
    struct Pokemon m1; // m1 구조체 변수 선언

    printf("포켓몬 이름: ");
    scanf("%s", m1.name);

    printf("체력: ");
    scanf("%d", &m1.strength);

    printf("%s의 체력은 %d입니다.\n", m1.name, m1.strength);
}