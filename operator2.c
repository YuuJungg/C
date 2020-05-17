#include <stdio.h>
int main_operator2()
{
    int a = 10;
    int b, c;

    b = a == 10 ? 1 : 0;
    // a가 10이면 b에 1 저장, 10이 아니면 b에 0저장
    printf("%d\n", b);    // a가 10이므로 b는 1

    c = a == 5 ? 1 : 0;
    printf("%d\n", c);    // a가 5가 아니므로 b는 0

    return 0;
}
