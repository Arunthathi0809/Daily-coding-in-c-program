#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the number:");
    scanf("%d",&x);
    z=x%100;
    y=z%10;
    printf("Result=%d",y);
    return 0;
}