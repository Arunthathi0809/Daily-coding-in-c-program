#include <stdio.h>
int main()
{
    int num, pair, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 10)
    {
        pair = num % 100;   
        if (pair % 2 != 0)  
        {
            count++;
        }
        num = num / 100;   
    }
    printf("Total 2-digit odd numbers = %d", count);
    return 0;
}