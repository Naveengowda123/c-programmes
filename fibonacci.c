#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=1,TEMP,USER_INPUT;
    printf("enter the input no:");
    scanf("%d",&USER_INPUT);
    while(x<USER_INPUT){
        printf("%d\n",x);
        TEMP = x + y;
        x = y;
        y = TEMP;
    }
    return 0;
}
