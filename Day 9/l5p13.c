#include<stdio.h>
int main()
{
    int x,rev=0,rem;
    printf("Enter the value of number n:\n");
    scanf("%d",&x);
    for(;x!=0;x=x/10)
    {
        rem=x%10;
        rev=rev*10+rem;
    }
        printf("reverse of the digits are %d\n",rev);
        return 0;
    }
