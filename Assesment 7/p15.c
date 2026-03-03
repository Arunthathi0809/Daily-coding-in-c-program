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
    int last;
    last = x % 10;  
    if(last % 2 == 0)   
    {
        printf("Result = %d", x);
    }
    else
    {
        printf("Result = %d", x - 1);
    }
}