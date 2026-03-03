#include<stdio.h>
int main()
{
    int i=1,x,firstdigit,lastdigit,power=1,middle,result,sum=0,temp;
    printf("enter the number:");
    scanf("%d",&x);
    lastdigit=x%10;
    temp = x;
    while(temp>0)
    {
        sum++;
        temp=temp/10;
    }
    if(i=1,i<sum,i++)
    {
        power=power*10;
    }
    firstdigit=x/power;
    middle=x%power;
    middle=middle/10;
    result=(lastdigit*power)+middle*10+firstdigit;
    printf("the final result is %d",result);
    return 0;
}