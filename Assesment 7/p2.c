#include<stdio.h>
void disp_assend(int);

int main()
{
    int x = 5;   
    disp_assend(x);
}

void disp_assend(int x)
{
    int y;
    for(y = x; y >= 1; y--)
    {
        printf("%d\n", y);
    }
}