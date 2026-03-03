#include<stdio.h>
int main()
{
    int x,reverse = 0,y;
    printf("enter the number");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        reverse =reverse*10 + y;
        x=x/10;
    }
    printf("sum of the given numbers %d",reverse);
    return 0;
}