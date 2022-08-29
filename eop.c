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
 if((Count < 3) && (Input_Num%2==0)){
 printf("the number is prime no. and the number is even");
 }
 else if((Count<3) && (Input_Num%2!=0)){
    printf("the number is prime and the number is odd");
 }
 else if((Count>=3)&&(Input_Num%2==0)){
    printf("the number is not prime and it is even");
 }
 else{
    printf("the number is not prime and odd ");
 }

    return 0;
}
