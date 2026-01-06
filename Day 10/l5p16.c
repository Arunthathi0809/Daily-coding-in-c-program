#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x<=1)
    {
        printf("Not a prime number");
    }
    else
    {
        int flag=0;
        for(int i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Prime number");
        }
        else
        {
            printf("Not a prime number");
        }
    }
    return 0;       
}