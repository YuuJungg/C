#include <stdio.h>
#include <string.h>

// ��ȭ��ȣ�� ����ü ����
struct PhoneNumber {
    char name[20];
    char number[20];
};

int main()
{
    struct PhoneNumber n1, n2; // n1, n2 ����ü ���� ����

    while (1) // �̸��� �� �Է��� ������ �ݺ�
    {
        printf("�̸�>> ");
        scanf("%s", n1.name);
        if (strlen(n1.name) > 15)
            printf("�Է� ������ ���ڼ��� �ʰ��Ͽ����ϴ�\n");
        else
            break;
    }
    printf("��ȭ��ȣ��>> ");
    scanf("%s", n1.number);
    while (1) // n1�� n2�� �ٸ��� �Է��� ������ �ݺ�
    {
        while (1) // �̸��� �� �Է��� ������ �ݺ�
        {
            printf("�̸�>> ");
            scanf("%s", n2.name);
            if (strlen(n2.name) > 15)
                printf("�Է� ������ ���ڼ��� �ʰ��Ͽ����ϴ�\n");
            else
                break;
        }
        printf("��ȭ��ȣ��>> ");
        scanf("%s", n2.number);

        // strcmp�Լ��� ������ 0�� ��ȯ�ϹǷ� 
        if (strcmp(n1.name, n2.name) == 0 && strcmp(n1.number, n2.number) == 0)
            printf("�ߺ��Ǿ����ϴ�.\n");
        else
            break;
    }

}