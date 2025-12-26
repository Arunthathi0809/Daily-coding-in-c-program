#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter the number:");
    scanf("%d",&x);
    a=(x%10)*10;
    z=x/10;
    y=z+a;
    printf("Result=%d",y);
    return 0;
}