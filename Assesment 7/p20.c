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
    if(x == 2 || x == 3 || x == 5 || x == 7)
        printf("Single Digit Prime Number");
    else
        printf("Not a Single Digit Prime Number");
}