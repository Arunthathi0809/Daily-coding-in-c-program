#include<stdio.h>
int main()
{
    int x,sum = 0,y;
    printf("enter the number");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        sum =sum + y;
        x=x/10;
    }
    printf("sum of the given numbers %d",sum);
    return 0;
}