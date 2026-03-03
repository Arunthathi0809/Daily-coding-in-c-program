#include <stdio.h>
int main()
{
    int num = 1, temp, digit;
    int sum, count = 0;
    while (num < 100000)
    {
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        if (sum == 14)
        {
            count++;
        }
        num++;
    }
    printf("Total numbers less than 100000 whose digit sum is 14 = %d", count);
    return 0;
}