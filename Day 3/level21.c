
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the three digit number:");
    scanf("%d",&x);
    z=x%2;
    y=x-(z*5);
    printf("Result=%d",y);
    return 0;
}