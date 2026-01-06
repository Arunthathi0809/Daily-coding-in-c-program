#include <stdio.h>
int main()
{
    int n, i, flag = 0, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        flag = 1; 
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    for (temp = n; temp > 0; temp = temp / 10)
    {
        sum = sum + (temp % 10);
    }
    if (flag == 0 && sum == 14)
    {
        printf("Prime number AND sum of digits is 14");
    }
    else if (flag == 0 && sum != 14)
    {
        printf("Prime number BUT sum of digits is not 14");
    }
    else if (flag == 1 && sum == 14)
    {
        printf("Not prime BUT sum of digits is 14");
    }
    else
    {
        printf("Not prime AND sum of digits is not 14");
    }
    return 0;
}
