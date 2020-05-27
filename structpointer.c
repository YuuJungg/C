#include <stdio.h>
#include <string.h> 
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

struct Person {    
    char name[20];       
    int age;              
    char birth[100];    
};

int main()
{
    // 구조체 포인터 선언, 메모리 할당
    struct Person* p1 = malloc(sizeof(struct Person));    

    // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
    strcpy(p1->name, "조유정");
    p1->age = 22;
    strcpy(p1->birth, "1999.10.10");

    // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1->name);       
    printf("나이: %d\n", p1->age);        
    printf("생일: %s\n", p1->birth);  

    free(p1);    // 동적 메모리 해제

    return 0;
}