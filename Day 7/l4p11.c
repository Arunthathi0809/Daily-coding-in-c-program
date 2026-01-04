#include <stdio.h>
int main()
{
    int x, y = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x== 0)
    {
    y = 1;
    goto print;
    }
loop:
    if (x!= 0)
    {
        y++;
        x= x/10;
        goto loop;
    }
print:
    printf("Number of digits = %d\n", y);
    return 0;
}