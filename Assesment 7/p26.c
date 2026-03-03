#include<stdio.h>
void disp_assend(int);

int main()
{
    int x = 9999;   
    disp_assend(x);
}

void disp_assend(int x)
{
    while(x >= 1000)
    {
        if(x % 7 == 0 && x % 9 == 0)
        {
            printf("Biggest 4-digit number divisible by 7 and 9 = %d", x);
            break;
        }
        x--;
    }
}