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
    int y = 0, d;
    while(a != 0)
    {
        d = a % 10;   
        if(d == 0 || d == 1 || d == 4 || d == 9)
            y++;      
        a = a / 10;   
    }
    return y;
}