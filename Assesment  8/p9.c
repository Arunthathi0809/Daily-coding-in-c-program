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
    int y;

    if(a % 2 == 0)
        y = a;
    else
        y = a - 1;

    return y;
}