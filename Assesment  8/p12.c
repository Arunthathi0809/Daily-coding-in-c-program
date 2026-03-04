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
    while(a >= 10)
    {
        d = a % 100;        
        if(d % 2 != 0)      
            y++;
        a = a / 100;        
    }

    return y;
}