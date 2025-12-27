
#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d;
    printf("enter the four digit number:");
    scanf("%d",&x);
    z=(x/1000)*100;
    a=(x%1000);
    b=(a/100)*1000;
    c=z+b;
    d=a%100;
    y=c+d;
    printf("Result=%d",y);
    return 0;
}