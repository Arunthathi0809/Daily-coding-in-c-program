#include<stdio.h>

int main()
{
    int a[5], b[5], i, j, temp;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];   // copy original numbers
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(b[i] < b[j])   // condition for descending
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Original numbers:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nDescending order:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}