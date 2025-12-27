
#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    printf("enter the number:");
    scanf("%d",&x);
    z=x%100;
    a=(x/100)*100;
    b=z%10;
    y=a+b;
    printf("Result=%d",y);
    return 0;
}