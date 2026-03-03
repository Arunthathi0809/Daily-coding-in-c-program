#include<stdio.h>
int main()
{
    int i, x, firstdigit, lastdigit;
    int power = 1, middle, result;
    int sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &x);
    temp = x;
    lastdigit = x % 10;
    while(temp > 0)
    {
        sum++;
        temp = temp / 10;
    }
    for(i = 1; i < sum; i++)
    {
        power = power * 10;
    }
    firstdigit = x / power;
    middle = x % power;
    middle = middle / 10;
    result = (lastdigit * power) + (middle * 10) + firstdigit;
    printf("The final result is %d\n", result);
    return 0;
}