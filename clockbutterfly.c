#include <stdio.h>    
#include <stdlib.h>
#include <string.h>

// ArrStruct 구조체 선언
typedef struct sand_butter {
    char** sandclock;
    char** butterfly;
    int size;
} ArrStruct;

void create(ArrStruct* arr, int num);
void print(ArrStruct* arr);

int main()
{
    int num;
    printf("입력>> ");
    scanf("%d", &num);

    // ArrStruct 구조체 동적할당
    ArrStruct* arr = (ArrStruct*)malloc(sizeof(ArrStruct) * num);
    create(arr, num);
    print(arr);

    // 동적할당을 차례대로 해제
    for (int i = 0; i < num; i++)
    {
        free(arr->sandclock[i]);
        free(arr->butterfly[i]);
    }
    free(arr->sandclock);
    free(arr->butterfly);
    free(arr);
    return 0;
}

// create 함수
void create(ArrStruct* arr, int num)
{
    // 입력한 num값을 구조체 변수 size값으로
    arr->size = num;

    // 구조체 이차원 배열 sandclock에 동적할당
    arr->sandclock = (char**)malloc(sizeof(char*) * num);
    for (int i = 0; i < num; i++)
        arr->sandclock[i] = (char*)malloc(sizeof(char) * num);

    int center = num / 2;

    //모래시계        
    for (int i = 0; i < num; i++) // 5
    {
        for (int j = 0; j < num; j++)
        {
            if (i <= center) // center=2. 3줄
            {
                if (j >= i && j < (num - i))
                    arr->sandclock[i][j] = '*';
                else
                    arr->sandclock[i][j] = ' ';
            }
            else
            {
                if (j >= num - (i + 1) && j <= i)
                    arr->sandclock[i][j] = '*';
                else
                    arr->sandclock[i][j] = ' ';
            }
        }
    }

    // 구조체 이차원 배열 butterfly에 동적할당
    arr->butterfly = (char**)malloc(sizeof(char*) * num);
    for (int i = 0; i < num; i++)
        arr->butterfly[i] = (char*)malloc(sizeof(char) * num);

    // 나비만들기
    for (int i = 0; i < num; i++) // 5
    {
        for (int j = 0; j < num; j++)
        {
            if (i <= center) // center=2. 3줄
            {
                if (j <= i || (num - i) <= (j + 1))
                    arr->butterfly[i][j] = '*';
                else
                    arr->butterfly[i][j] = ' ';
            }
            else
            {
                if (j <= num - (i + 1) || j >= i)
                    arr->butterfly[i][j] = '*';
                else
                    arr->butterfly[i][j] = ' ';

            }
        }
    }
}

// print 함수
void print(ArrStruct* arr)
{
    // sandclock 출력
    for (int i = 0; i < arr->size; i++)
    {
        for (int j = 0; j < arr->size; j++)
            printf("%c", arr->sandclock[i][j]);
        printf("\n");
    }
    printf("\n");

    // butterfly 출력
    for (int i = 0; i < arr->size; i++)
    {
        for (int j = 0; j < arr->size; j++)
            printf("%c", arr->butterfly[i][j]);
        printf("\n");
    }
}
