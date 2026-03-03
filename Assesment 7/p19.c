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
    int middle, i, flag = 0;
    middle = (x / 10) % 100;

    if(middle <= 1)
    {
        printf("Middle two digits are Not Prime");
        return;
    }

    for(i = 2; i <= middle / 2; i++)
    {
        if(middle % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Middle two digits are Prime");
    else
        printf("Middle two digits are Not Prime");
}