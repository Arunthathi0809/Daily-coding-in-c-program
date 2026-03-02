#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("enter your number");
    scanf("%d",&x);
    if(x<0)
    {
        x=-x;
    }
    while(x>0)
    {
        y=x%10;
        if(y==1||y==4||y==9)
        {
            z++;
        }
        x=x/10;
    }
        printf("no of perfect square number in given %d",z);
        return 0;
    
}