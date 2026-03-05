#include<stdio.h>

int main()
{
    int a[5], b[5], i, j=0, k, count;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(k = 1; k <= a[i]; k++)
        {
            if(a[i] % k == 0)
            {
                count++;
            }
        }

        if(count != 2)   // not a prime number
        {
            b[j] = a[i];
            j++;
        }
    }

    printf("New array after removing prime numbers:\n");

    for(i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}