#include<stdio.h>
int main()
{
    int x,sum =0;
    printf("Enter the value of number n:\n");
    scanf("%d",&x);
    for(;x!=0;x=x/10)
    {
        sum++;
    }
        printf("total digits are %d\n",sum);
        return 0;
    }
