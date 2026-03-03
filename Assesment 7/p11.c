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
    int count = 0;
    if(x == 0)
    {
        count = 1;
    }
    else
    {
        while(x != 0)
        {
            count++;
            x = x / 10;
        }
    }
    printf("Number of digits = %d", count);
}