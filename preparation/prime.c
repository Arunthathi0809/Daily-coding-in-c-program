#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the number:");
    scanf("%d\n",&a);
    for(i=0;i<=a/2;i++)
    {
        if(a%i==0)
         printf("not a prime number");
        else
        printf("prime number");
    }
}