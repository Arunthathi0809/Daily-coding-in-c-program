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
    int b,i,hcf;
    scanf("%d",&b);    
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf = i;
    }
    return hcf;
}