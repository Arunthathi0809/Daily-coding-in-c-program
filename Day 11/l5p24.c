#include<stdio.h>

int main()
{
    int x, twoDigit, count = 0;

    printf("Enter your number: ");
    scanf("%d", &x);

    if(x < 0)
    {
        x = -x;
    }

    while(x >= 10)  
    {
        twoDigit = x % 100;

        if(twoDigit == 16 || twoDigit == 25 || 
           twoDigit == 36 || twoDigit == 49 ||
           twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }

        x = x / 10;   // shift one digit
    }

    printf("Number of two-digit perfect squares: %d", count);

    return 0;
}