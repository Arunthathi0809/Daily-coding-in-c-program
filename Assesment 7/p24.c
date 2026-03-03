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
    if(x == 16 || x == 25 || x == 36 || 
       x == 49 || x == 64 || x == 81)
        printf("Two Digit Perfect Square Number");
    else
        printf("Not a Two Digit Perfect Square Number");
}