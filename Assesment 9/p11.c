#include<stdio.h>

int main()
{
    int a[5], b[5], i, n, rev, digit, sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        n = a[i];
        rev = 0;

        while(n > 0)
        {
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        b[i] = rev;
        sum = sum + rev;
    }

    printf("Reversed numbers:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nSum of reversed numbers = %d", sum);

    return 0;
}