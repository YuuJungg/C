#include <stdio.h>
int main_operator2()
{
    int a = 10;
    int b, c;

    b = a == 10 ? 1 : 0;
    // a�� 10�̸� b�� 1 ����, 10�� �ƴϸ� b�� 0����
    printf("%d\n", b);    // a�� 10�̹Ƿ� b�� 1

    c = a == 5 ? 1 : 0;
    printf("%d\n", c);    // a�� 5�� �ƴϹǷ� b�� 0

    return 0;
}
