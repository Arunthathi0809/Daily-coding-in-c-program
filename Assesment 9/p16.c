#include<stdio.h>

int main()
{
    int a[50], b[50], c[51];
    int i, n, carry = 0, sum;

    printf("Enter number of digits (max 50): ");
    scanf("%d",&n);

    printf("Enter first number digits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter second number digits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i = n-1; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;
        c[i+1] = sum % 10;
        carry = sum / 10;
    }

    c[0] = carry;

    printf("Result:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}