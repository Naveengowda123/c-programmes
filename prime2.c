#include<stdio.h>
#include<stdlib.h>
int prime(int num){
    int temp,count = 1,i;
 for(i=2;i<=num;i++){
    temp = num%i;
    if(temp == 0){
        count++;
        if(i== num && count<3){
                return 1;
        }
        else if(i== num & count>=3){
            return 0;
        }
    }

 }
}
int main()
{
    //int num;
    printf("the number is %d",prime(7));
}
