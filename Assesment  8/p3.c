#include<stdio.h>

int function_name(int);

int main()
{
    int x,y;
    scanf("%d",&x);
    y=function_name(x);
    printf("%d",y);
}

int function_name(int a)
{
    int i,y=0;
    while(y%10==5)
{
    for(i=10;i<=99;i++)
    {
        y = y + i;
    }
}
    return y;
}