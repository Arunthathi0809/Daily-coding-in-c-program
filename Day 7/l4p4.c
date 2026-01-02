#include<stdio.h>
int main()
{
    int x=0;
    int sum=0;
    loop: if(x<=6)
     {
        sum=sum+x;
        printf("%d ", sum);
        x++;
     goto loop;
     }
     printf("sum=%d\n",sum);
}
