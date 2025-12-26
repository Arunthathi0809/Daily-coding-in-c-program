#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    printf("enter the three digit number:");
    scanf("%d",&x);
    a=(x/100);
    z=x%100;
    b=(z/10)*10;
    c=(z%10)*100;
    y=a+b+c;
    printf("Result=%d",y);
    return 0;
}