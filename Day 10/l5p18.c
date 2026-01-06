#include <stdio.h>
int main()
{
    int n, last2, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    last2 = n % 100;
    if (last2 <= 1)
    {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i < last2; i++)
    {
        if (last2 % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime (last two digits = %d)", last2);
    else
        printf("Not Prime (last two digits = %d)", last2);
    return 0;
}
