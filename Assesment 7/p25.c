#include<stdio.h>
void disp_assend(int);

int main()
{
    int x;
    scanf("%d", &x);
    disp_assend(x);
}

void disp_assend(int x)
{
    int digit, count = 0;

    while(x != 0)
    {
        digit = x % 10;   

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        x = x / 10;   
    }

    printf("Total single digit prime numbers = %d", count);
}