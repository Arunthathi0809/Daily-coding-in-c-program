#include <stdio.h>
int main()
{
    int num, lastTwo;
    int i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    lastTwo = num % 100;
    printf("Last two digits: %d\n", lastTwo);
    if (lastTwo <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= lastTwo / 2)
        {
            if (lastTwo % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
    }
    if (flag == 0)
        printf("Last two digits are Prime");
    else
        printf("Last two digits are Not Prime");
    return 0;
}