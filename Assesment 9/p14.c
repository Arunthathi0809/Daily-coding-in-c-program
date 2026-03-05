#include<stdio.h>

int main()
{
    int a[100], n, i;
    float avg;

    printf("Enter total number of elements: ");
    scanf("%d",&n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    if(n % 2 != 0)   // odd count
    {
        printf("Middle number = %d", a[n/2]);
    }
    else             // even count
    {
        avg = (a[n/2] + a[(n/2)-1]) / 2.0;
        printf("Average of middle two numbers = %.2f", avg);
    }

    return 0;
}