#include<stdio.h>
int main()
{
    int x=1;
    int sum=0;
    loop: if(x<=5)
     {
        sum=sum+x;
        x++;
     goto loop;
     }
     printf("sum=%d\n",sum);
}
