#include<stdio.h>
int main()
{
    int x;
    for (x=10;x<100;x++)
    {
        if(x%2!=0)
        {
            if((x%10)+(x/10)==7)
            {
         printf("%d\n",x); 
            } 
        }
    }
return 0;
}