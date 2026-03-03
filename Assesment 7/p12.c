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
    int sum = 0, digit;
    while(x != 0)
    {
        digit = x % 10;     
        sum = sum + digit;  
        x = x / 10;        
    }
    printf("Sum of digits = %d", sum);
}