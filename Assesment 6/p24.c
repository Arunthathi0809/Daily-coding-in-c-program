#include <stdio.h>
int main()
{
    int num, pair, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 10)
    {
        pair = num % 100;   // Get last two digits
        if (pair == 16 || pair == 25 || pair == 36 || 
            pair == 49 || pair == 64 || pair == 81)
        {
            count++;
        }
        num = num / 100;    // Remove last two digits
    }
    printf("Total 2-digit perfect square numbers = %d", count);
    return 0;
}