#include <stdio.h>

int main()
{
    char data[2001];
    // fgets()를 사용하면 공백문자가 포함되어있는 문장 입력받아 저장할 수 있다.
    fgets(data, 2000, stdin);
    printf("%s", data);

    return 0;
}
