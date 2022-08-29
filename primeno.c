#include <stdio.h>
#include <stdlib.h>

int main()
{
 int Count=1,Input_Num,True_False=1,Temp,i=2;
 printf("Enter the Number:");
 scanf("%d",&Input_Num);
 while(True_False){
    if(i<=Input_Num){
      Temp = Input_Num % i ;
      i++;
      if(Temp == 0){
            Count++;
            continue;
      }
    }
    else{
        True_False = 0;
    }
 }
 if(Count < 3){
 printf("the number is prime no.");
 }
 else{
    printf("the number is not prime");
 }
    return 0;
}
