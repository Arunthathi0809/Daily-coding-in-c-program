#include<stdio.h>
int function_name(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = function_name(x);
    printf("%d",y);
}

int function_name(int a)
{
    int i,temp,sum,count=0;
    for(i=1;i<100000;i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        if(sum == 14)
            count++;
    }
    return count;
}