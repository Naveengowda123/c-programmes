#include <stdio.h>
#include <stdlib.h>
int factorial(int Num){
if(Num == 1 || Num == 0){
    return 1;
}
else{
return Num * factorial(Num-1);
}

}
int main()
{
    int Num;
    printf("enter the Number:");
    scanf("%d",&Num);
    printf("factorial is %d",factorial(Num));
    return 0;
}
