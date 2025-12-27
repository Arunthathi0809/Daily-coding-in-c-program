
#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    printf("enter the number:");
    scanf("%d",&x);
    a=x/10;
    b=x%10;
    z=(a+b)%2;
    y=x-(z*5);
    printf("Result=%d",y);
    return 0;
}