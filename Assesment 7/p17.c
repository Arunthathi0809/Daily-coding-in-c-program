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
    int i, flag = 0;
    int sum = 0, temp, digit;
    if(x <= 1)
    {
        printf("Not Prime");
        return;
    }
    for(i = 2; i <= x / 2; i++)
    {
        if(x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)  
    {
        temp = x;
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if(sum == 14)
            printf("Prime and Sum of digits is 14");
        else
            printf("Prime but Sum of digits is not 14");
    }
    else
    {
        printf("Not Prime");
    }
}