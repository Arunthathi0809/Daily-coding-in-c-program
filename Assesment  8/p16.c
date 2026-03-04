#include<stdio.h>
int function_name(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = function_name(x);
    printf("%d",y);
}

int function_name(int a)
{
    int i;
    for(i=9999;i>=1000;i--)
    {
        if(i%7==0 && i%9==0)
            return i;
    }
}