#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int FACT_NO,y=1,Temp;
printf("Enter the Fact_no:");
scanf("%d",&FACT_NO);
Temp=FACT_NO;
while(y!=0){
    FACT_NO = FACT_NO * y;
    Temp--;
    y = Temp;
}
printf("Facorial is %d",FACT_NO);
return 0;
}

