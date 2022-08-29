#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,rem=0,sum=0,num,temp,sum1=0,rem1=0,temp1=1,temp2;
    printf("enter the number:");
    scanf("%d",&num);
    temp = num;
    temp2 = num;
    while(temp){
        rem1 = temp % 10;
        temp = temp/10;
        sum1 = sum1 + rem1;
    }
    for(i=2;i<temp2;i++){
        if(num%i == 0){
            temp1 = num;
            num = num/i;
            if(temp1 != i){
               sum = sum + i;
               i--;
            }
            else if(temp1 == i){
               while(temp1){
                rem = temp1 % 10;
                temp1 = temp1 / 10;
                sum = sum + rem;
               }
               break;
            }
        }
        else{
            continue;
        }
    }
    if(sum1 == sum){
        printf("the entered number is smith number %d %d",sum1,sum);
    }
    else{
            printf("the entered number is not smith number %d %d",sum1,sum);
    }
}
