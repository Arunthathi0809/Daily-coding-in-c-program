
#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter the two digit number:");
    scanf("%d",&x);
    z=x/10;
    a=(x%10);
    y=a+z;
    printf("Result=%d",y);
    return 0;
}