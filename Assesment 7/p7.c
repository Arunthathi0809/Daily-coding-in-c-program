#include<stdio.h>
void disp_assend(int);

int main()
{
    int x = 10;  
    disp_assend(x);
}

void disp_assend(int x)
{
    int y, sum;

    for(y = x; y <= 99; y++)
    {
        if(y % 2 != 0)  
        {
            sum = (y / 10) + (y % 10); 

            if(sum == 7)
            {
                printf("%d\n", y);
            }
        }
    }
}