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
    int b,c,i;
    scanf("%d",&b);      
    scanf("%d",&c);     
    for(i=1;;i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
            return i;
    }
}