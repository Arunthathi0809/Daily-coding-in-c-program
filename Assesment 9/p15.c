#include<stdio.h>

int main()
{
    int a[5], b[5], i, j, n, sum, digit, temp;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        n = a[i];
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        b[i] = sum;   // store digit sum in new array
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("New array in ascending order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}