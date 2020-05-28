#include <stdio.h>

int main(void)
{
    int i1, i2;
    int j1, j2;
    int count1 = 0;
    int count2 = 0;
	
    printf("범위 i >> ");
    scanf("%d %d", &i1, &i2); // 5 13
    printf("범위 j >> ");
    scanf("%d %d", &j1, &j2); // 4 9

    printf("    |  ");
    for (int i = j1; i < j2 + 1; i++)
        printf(" %d  ", i);
    printf("\n");
    printf("----+------------------------\n");

   
    for (int i = i1; i <= i2; i++)
    {
        printf(" %2d | ", i);
        for (int j = j1; j <=j2; j++)
            printf("%3d ", i * j);
        printf("\n");
    }
    return 0;
}

