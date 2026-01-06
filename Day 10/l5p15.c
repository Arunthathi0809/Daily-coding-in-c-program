#include <stdio.h>
int main()
{
    int x, temp, power = 1, first, last, result;
    printf("Enter a number: ");
    scanf("%d", &x);
    last = x % 10;      
    temp = x;
    for (; temp >= 10; temp = temp / 10)
    {
        power = power * 10;
    }
    first = temp;      
    if (last % 2 != 0) 
    {
        result = x - (first * power) + (1 * power);
        printf("%d", result);
    }
    else
    {
        printf("%d", x);
    }
    return 0;
}
