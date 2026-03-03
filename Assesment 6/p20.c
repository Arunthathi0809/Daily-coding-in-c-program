#include <stdio.h>
int main()
{
    int num = 0;
    int i, count = 0, flag;
    while (num <= 9)
    {
        flag = 0;
        if (num > 1)
        {
            i = 2;
            while (i <= num / 2)
            {
                if (num % i == 0)
                {
                    flag = 1;
                    break;
                }
                i++;
            }
            if (flag == 0)
            {
                count++;
            }
        }
        num++;
    }
    printf("Total single digit prime numbers = %d", count);
   return 0;
}