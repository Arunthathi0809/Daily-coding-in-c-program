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
    int b,i,lcm;

    scanf("%d",&b);      

    for(i=1;;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm = i;
            break;
        }
    }

    return lcm;
}