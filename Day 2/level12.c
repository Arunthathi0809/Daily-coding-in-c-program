#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    printf("enter the number:");
    scanf("%d",&x);
    z=x/100;
    a=x%100;
    b=a/10;
    c=a%10;
    y=z+b+c;
    printf("Result=%d",y);
    return 0;
}