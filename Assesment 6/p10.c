#include<stdio.h>
int main()
{
    int x,sum =0;
    printf("enter your number");
    scanf("%d",&x);
    while(x>0)
    {
        sum++;
        x=x/10;
    }
    printf("the total number of digits in the given number is: %d",sum);
    return 0;
}