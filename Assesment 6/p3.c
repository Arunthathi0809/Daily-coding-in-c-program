#include<stdio.h>
int main()
{
    int x=0,y=0;
    while(x<=5)
    {
        y=y+x;
        x++;
    }
    printf("%d\n",y);
    return 0;
}