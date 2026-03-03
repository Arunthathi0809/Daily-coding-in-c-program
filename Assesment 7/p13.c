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
    int digit, reverse = 0;

    while(x != 0)
    {
        digit = x % 10;              
        reverse = reverse * 10 + digit;  
        x = x / 10;                  
    }

    printf("Reverse = %d", reverse);
}