#include <stdio.h>
int main()
{
    int n, middle, i, flag = 0;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);
    if (n < 1000 || n > 9999)
    {
        printf("Not a 4 digit number");
        return 0;
    }
    middle = (n / 10) % 100;
    if (middle <= 1)
    {
        printf("Middle number %d is NOT prime", middle);
        return 0;
    }
    for (i = 2; i < middle; i++)
    {
        if (middle % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Middle number %d is prime", middle);
    else
        printf("Middle number %d is not prime", middle);
    return 0;
}
