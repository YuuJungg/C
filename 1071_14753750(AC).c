﻿
#include <stdio.h>
 
 
int main (void)
{
    
    int num1;
replay:
    scanf("%d",&num1);
    
    if(num1 != 0){
        printf("%d\n",num1);
        goto replay;
        
    }
    
    return 0;
}
