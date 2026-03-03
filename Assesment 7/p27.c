#include<stdio.h>
void disp_assend(int);

int main()
{
    int x = 1;   // Start from 1
    disp_assend(x);
}

void disp_assend(int x)
{
    int temp, digit, sum, count = 0;

    while(x < 100000)
    {
        temp = x;
        sum = 0;

        // Find sum of digits
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if(sum == 14)
        {
            count++;
        }

        x++;
    }

    printf("Total count = %d", count);
}