#include <stdio.h>
int main()
{
    int x, y, first, last, digits = 1, mid, result;
    printf("Enter the number: ");
    scanf("%d", &x);
    y=x;
    last = x % 10;
loop:
    if (y>=10)
    {
       y=y/10;
        digits = digits * 10;
        goto loop;
    }
    else
    {
        first=y;
    }
    mid = (x % digits) / 10;
    result = last * digits + mid * 10 + first;
    printf("After interchange = %d", result);
    return 0;
}
