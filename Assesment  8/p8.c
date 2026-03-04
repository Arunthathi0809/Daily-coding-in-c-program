#include<stdio.h>
int function_name(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=function_name(x);
    printf("%d",y);
}
int function_name(int a)
{
    int first,last,temp,power=1,middle;
    last = a % 10;
    temp = a;
    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    middle = (a % power) / 10;
    return last * power + middle * 10 + first;
}