#include<stdio.h>
void disp_assend(int);
int main()
{
    int x = 10;  
    disp_assend(x);
}

void disp_assend(int x)
{
    int y, sum = 0;

    for(y = x; y <= 99; y++)
    {
        if(y % 10 == 5)   
        {
            sum = sum + y;
        }
    }
    printf("Sum = %d", sum);
}