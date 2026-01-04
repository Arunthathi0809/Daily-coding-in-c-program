#include <stdio.h>
int main()
{
    int x,a;
    printf("Enter the number: ");
    scanf("%d", &x);
loop:
    a=x%10;   
    if(a%2!=0)   
    {
        x=x-1;   
        goto loop;    
    }
    else
    {
        printf("Result = %d", x);
    }
    return 0;
}
