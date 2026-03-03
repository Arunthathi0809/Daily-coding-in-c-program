#include <stdio.h>
int main() 
{
    int num, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) 
    {
        printf("Not Prime");
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
        if (flag == 0)
            printf("Prime Number");
        else
            printf("Not Prime");
    }
    return 0;
}