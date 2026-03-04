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

    for(i=70;i<=79;i++)
    {
        if(i%2!=0)
        {
            y = y + i;
        }
    }

    return y;
}