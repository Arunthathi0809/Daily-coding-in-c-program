#include<stdio.h>

int main()
{
    int a[100], i = 0, sum = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    while(1)
    {
        scanf("%d", &a[i]);

        if(a[i] == 0)
        {
            break;
        }

        sum = sum + a[i];
        i++;
    }

    printf("Total numbers entered = %d\n", i);
    printf("Sum of numbers = %d", sum);

    return 0;
}