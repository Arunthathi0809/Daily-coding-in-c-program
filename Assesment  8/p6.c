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
    int y=0,k;
    while(a!=0)
    {
        k = a % 10;  
        y = y + k;    
        a = a / 10;   
    }
    return y;
}