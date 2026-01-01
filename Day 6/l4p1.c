#include<stdio.h>
int main()
{
    int x;
    loop: if(x<6)
     {
        printf("%d\n",x);
        x++;
     goto loop;
     }
}