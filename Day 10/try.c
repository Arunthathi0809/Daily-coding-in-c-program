#include<stdio.h>
int main()
{
    int x,digits,rev=0;
    printf("enter a number:");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        digits=x%10;
        rev=rev*10+digits;
    }
    printf("the reverse number is %d",rev);
    return 0;   
}