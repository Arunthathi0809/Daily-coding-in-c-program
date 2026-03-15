#include<stdio.h>
int main()
{
    char c[5],i;
    c[0] = '1';
    c[1] = '2';
    c[2] = '3';
    c[3] = '4';
    c[4] = '5';
    for(i=0;i<5;i++)
    {
        printf("%c",c[i]);
    }
}