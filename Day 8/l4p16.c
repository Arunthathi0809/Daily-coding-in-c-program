#include<stdio.h>
int main()
{
    int x,a=2;
    printf("enter your number:");
    scanf("%d",&x);
    if(x<=1)
    {
        printf("not prime number");
    }
    if(x==2)
     printf("even prime number");
loop:
{
    if(a<=x/2)
    {
        if(x%a==0)
        printf("not a prime number");
       return 0;
    }
    goto loop;
    printf("prime number");
}
}