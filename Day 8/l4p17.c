#include <stdio.h>
int main()
{
    int x, a = 2;
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x <= 1)
    {
        printf("Not a prime number");
        return 0;
    }
    if (x == 2)
    {
        printf("Even prime number");
        return 0;
    }
loop:
    if (a <= x / 2)
    {
        if (x % a == 0)
        {
            printf("Not a prime number");
            return 0;
        }
        a++;
        goto loop;
    }
    printf("Prime number");
    return 0;
}
