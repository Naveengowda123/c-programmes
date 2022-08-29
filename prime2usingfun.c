#include<stdio.h>
#include<stdlib.h>
char prime(int num){
    int temp,count = 1,i;
 for(i=2;i<=num;i++){
    temp = num%i;
    if(temp == 0){
        count++;
        if(i== num && count<3){
                return printf("the number is prime");
        }
        else if(i== num && count>=3){
            return printf("the number is not prime");
        }
    }

 }
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the number is %s",prime(num));
}
