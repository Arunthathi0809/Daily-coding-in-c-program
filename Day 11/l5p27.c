#include<stdio.h>

int main()
{
    int num, sum, temp, digit;

    for(num = 1; num < 100000; num++)
    {
        sum = 0;
        temp = num;

        while(temp > 0)
        {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        if(sum == 14)
        {
            printf("Smallest number less than 100000 with digit sum 14 is: %d", num);
            break;   // stop after first match
        }
    }

    return 0;
}