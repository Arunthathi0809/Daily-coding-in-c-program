#include <stdio.h>

int checkNumber(int num)
{
    int d1, d2;

    d1 = num / 10;   // first digit
    d2 = num % 10;   // second digit

    if(num % 2 != 0 && (d1 + d2 == 7))
        return 1;
    else
        return 0;
}

int main()
{
    int i;

    printf("Two digit odd numbers whose sum of digits is 7:\n");

    for(i = 10; i <= 99; i++)
    {
        if(checkNumber(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}