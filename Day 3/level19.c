
#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    printf("enter the three digit number:");
    scanf("%d",&x);
    z=(x/100)*100;
    a=(x%100);
    b=(a/10)*10;
    c=b+2;
    y=z+c;
    printf("Result=%d",y);
    return 0;
}