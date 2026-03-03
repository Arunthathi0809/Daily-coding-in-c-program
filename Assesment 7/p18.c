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
    int lastTwo, i, flag = 0;

    lastTwo = x % 100;   

    if(lastTwo <= 1)
    {
        printf("Last two digits are Not Prime");
        return;
    }
    for(i = 2; i <= lastTwo / 2; i++)
    {
        if(lastTwo % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Last two digits are Prime");
    else
        printf("Last two digits are Not Prime");
}