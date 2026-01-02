#include<stdio.h>

int main()
{
    int x = 10;
    int sum = 0;   // ✅ sum declared

loop:
    if (x <= 100)
    {
        if (x % 2 != 0)          // odd numbers
        {
            if ((x / 10) == 7)   // tens digit is 7
            {
                sum = sum + x;
                printf("x = %d, sum = %d\n", x, sum);
            }
        }
        x++;
        goto loop;
    }

    return 0;
}
