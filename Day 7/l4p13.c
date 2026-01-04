#include <stdio.h>
int main()
{
    int x,rev=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x<0)
        x=-x;
loop:
    if(x!=0)
    {
        rev=(rev*10) + (x%10);  
        x=x/10;                  
        goto loop;                  
    }
    else
    {
        printf("Reversed number = %d", rev);
    }
    return 0;
}
