#include <stdio.h>

int main()
{
    char d[30]; 
    scanf("%s", d); 
    for(int i=0; d[i]!='\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닐 동안 아래 실행
    {
        printf("\'%c\'\n", d[i]);
    }   

    return 0;
}
