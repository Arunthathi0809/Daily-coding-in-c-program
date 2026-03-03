#include<stdio.h>
void disp_assend(int, int);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    disp_assend(x, y);
}

void disp_assend(int x, int y)
{
    int a = x, b = y, temp;

    
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("LCM = %d", (x * y) / a);
}