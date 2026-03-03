#include<stdio.h>
void disp_assend(int);
int main()
{
    int x = 70;   
    disp_assend(x);
}

void disp_assend(int x)
{
    int y, sum = 0;
    for(y = x; y <= 79; y++)
    {
        if(y % 2 != 0)   
        {
            sum = sum + y;
        }
    }
    printf("Sum = %d", sum);
}