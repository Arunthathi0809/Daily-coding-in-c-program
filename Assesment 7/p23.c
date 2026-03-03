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
    if(x == 0 || x == 1 || x == 4 || x == 9)
        printf("Single Digit Perfect Square Number");
    else
        printf("Not a Single Digit Perfect Square Number");
}