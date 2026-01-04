#include <stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x<0)
        x=-x;
loop:
    if (x!=0)
    {
        sum=sum+(x%10);  
        x=x/10;            
        goto loop;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
