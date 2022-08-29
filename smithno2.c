#include<stdio.h>
#include<stdlib.h>
char SmithNum(int NUM){
int SUM=0,SUM1=0,REM,i,REM2,TEMP,TEMP1;
TEMP = NUM;
while(NUM){
    REM = NUM % 10;
    SUM = SUM + REM;
    NUM = NUM / 10;
}
NUM = TEMP;
for(i=2;i<=TEMP/2;i++){
    if(NUM%i == 0){
        NUM = NUM / i;
        TEMP1 = i;
        while(TEMP1){
           REM2 = TEMP1 % 10;
           SUM1 = SUM1 + REM2;
           TEMP1 = TEMP1 / 10;
        }
        i--;
    }
}
if(SUM == SUM1){
    return printf("the number is Smith number");
}
else{
    return printf("the number is not Smith number");
}
}
int main(){
int NUM;
printf("enter the number:");
scanf("%d",&NUM);
SmithNum(NUM);
return 0;
}
