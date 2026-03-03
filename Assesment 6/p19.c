#include <stdio.h>
int main()
{
    int num, middle;
    int i = 2, flag = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999)
    {
        printf("Please enter a valid 4-digit number");
        return 0;
    }
    middle = (num / 10) % 100;
    printf("Middle two digits: %d\n", middle);
    if (middle <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= middle / 2)
        {
            if (middle % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
    }
    if (flag == 0)
        printf("Middle two digits are Prime");
    else
        printf("Middle two digits are Not Prime");
    return 0;
}