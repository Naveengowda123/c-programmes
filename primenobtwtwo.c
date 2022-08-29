#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int INPUT_NO_ONE,INPUT_NO_TWO;
    int COUNT = 1,i=2,TEMP,j=0;
    printf("enter the the first number:");
    scanf("%d",&INPUT_NO_ONE);
    printf("enter the second number:");
    scanf("%d",&INPUT_NO_TWO);
    while(INPUT_NO_ONE < INPUT_NO_TWO){
      if(i<=INPUT_NO_ONE){
        TEMP = INPUT_NO_ONE % i;
        j=i;
        i++;
        if(TEMP == 0){
          COUNT++;
          if(j == INPUT_NO_ONE){
            if(COUNT<3){
              printf("%d\n",INPUT_NO_ONE);
            }

            INPUT_NO_ONE++;
            i=2;
            COUNT=1;
          }
        }
      }
    }
    return 0;
}
