#include <stdio.h>
int main()
{
    int num, i = 2, flag = 0;
    int temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
    }
    temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if (flag == 0 && sum == 14)
        printf("Number is Prime and Sum of digits is 14");
    else
        printf("Condition not satisfied");

    return 0;
}