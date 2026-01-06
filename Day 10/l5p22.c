#include <stdio.h>
int main()
{
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n >= 10; n = n / 10)
    {
        digit = n % 100;
        if (digit % 2 != 0)
        {
            count++;
        }
    }
    printf("Total odd digits = %d", count);
    return 0;
}
