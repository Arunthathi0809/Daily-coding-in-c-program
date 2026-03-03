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
    int first, last, middle, temp, digits = 0, power = 1;
    temp = x;
    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    for(int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = x / power;      
    last = x % 10;          
    middle = (x % power) / 10;  
    x = last * power + middle * 10 + first;

    printf("After swapping first and last digit = %d", x);
}