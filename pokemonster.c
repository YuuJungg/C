#include <stdio.h>

// ���ϸ� ����ü ����
struct Pokemon {
    char name[20];
    int strength;
};

int main()
{
    struct Pokemon m1; // m1 ����ü ���� ����

    printf("���ϸ� �̸�: ");
    scanf("%s", m1.name);

    printf("ü��: ");
    scanf("%d", &m1.strength);

    printf("%s�� ü���� %d�Դϴ�.\n", m1.name, m1.strength);
}