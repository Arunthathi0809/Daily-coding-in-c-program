#include<stdio.h>
void disp_assend(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_assend(x);
}
void disp_assend(int x)
{
    int y;
    for(y=x;y<=5;y++)
    {
        printf("%d\n",y);
    }
}