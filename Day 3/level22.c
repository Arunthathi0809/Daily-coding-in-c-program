
#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter the number:");
    scanf("%d",&x);
    z=x/10;
    a=z%2;
    y=x-(a*5);
    printf("Result=%d",y);
    return 0;
}