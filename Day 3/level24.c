
#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d,e;
    printf("enter the number:");
    scanf("%d",&x);
    z=x%100;
    a=z%10;
    b=z/10;
    c=(a%2)*(b%2);
    y=x-(c*5);
    printf("Result=%d",y);
    return 0;
}