#include<stdio.h>

int main()
{
    int x, digit, count = 0;

    printf("Enter your number: ");
    scanf("%d", &x);

    if(x < 0)
    {
        x = -x;
    }

    while(x > 0)
    {
        digit = x % 10;

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        x = x / 10;
    }

    printf("Number of single-digit prime numbers: %d", count);

    return 0;
}