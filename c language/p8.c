#include<stdio.h>
int main()
{
    char c[5],i;
    c[0] = 49;
    c[1] = 50;
    c[2] = 51;
    c[3] = 52;
    c[4] = 53;
    for(i=0;i<5;i++)
    {
        printf("%c",c[i]);
    }
}