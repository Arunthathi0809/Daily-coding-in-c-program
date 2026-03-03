#include<stdio.h>
void disp_assend(int);

int main()
{
    int x = 1;   
    disp_assend(x);
}

void disp_assend(int x)
{
    int y;

    for(y = x; y <= 9; y++)
    {
        if(y % 2 != 0)   
        {
            printf("%d\n", y);
        }
    }
}