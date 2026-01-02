#include<stdio.h>
int main()
{
    int x=10;
    loop:
    if (x<100)
    {
        if (x%2!=0)
        {
            if (((x%10)+(x/10))==7)
            {
              printf("%d\n",x);  
            }
        }
        x++;
        goto loop;
    }
    return 0;
}