#include<stdio.h>
void disp_assend(int);
int main()
{
    int x = 1;   
    disp_assend(x);
}

void disp_assend(int x)
{
    int y, sum = 0;
    for(y = x; y <= 5; y++)
    {
        sum = sum + y;
    }
    printf("Sum = %d", sum);
}