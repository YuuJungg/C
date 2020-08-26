
#include <stdio.h>
 
int main()
{
    int box = 0;
    int input;
    
    scanf("%d", &input);

    while(1)
    {
        if(input % 5 == 0)
        {
            box += input / 5;
            printf("%d", box);
            break;
        }

        input = input -3;
        box++;

        if(input < 0)
        {
            printf("-1");
            break;
        }
    }
}
    