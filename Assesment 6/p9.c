#include <stdio.h>
int main()
{
    int x = 10;
    int sum = 0;

    while(x <= 99)
    {
        if(x % 10 == 5)
        {
            sum = sum + x;
        }
        x++;   
    }
    printf("Sum of two-digit numbers whose one's digit is 5 = %d", sum);
    return 0;
}