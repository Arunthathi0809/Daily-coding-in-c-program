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
        printf("Prime");
    else
        printf("Not Prime");
}