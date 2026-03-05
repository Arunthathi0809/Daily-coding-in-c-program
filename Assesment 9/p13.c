#include<stdio.h>

int main()
{
    int a[4], i, first, last, temp;

    printf("Enter 4 numbers:\n");

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);

        last = a[i] % 10;   // get last digit
        temp = a[i];

        while(temp >= 10)
        {
            temp = temp / 10;
        }

        first = temp;   // get first digit

        if(first == last)
        {
            printf("Success\n");
        }
        else
        {
            printf("Failure\n");
        }
    }

    return 0;
}